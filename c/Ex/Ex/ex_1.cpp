#include <stdio.h>
#define WORKINGDAY 5
#define PURCHASERATE 0.015
#define REDEMPTIONRATE 0.005
#define EACHDENOMINATION 1.0

void WeeklyUserEarning(float *EachDayNetValue ,int PurchaseAmout) //形参是每日净值数组和购买金额
{

	int i;
	float FundPortion;    //基金份额
	float UserCurrentNetValue[WORKINGDAY]; //用户当前净值 Current Value
	float DailyNetGrowthRate[WORKINGDAY];   //每日净值增长率Increase Rate
	float FloatingPL[WORKINGDAY]; //浮动盈亏  Current Payoff
	float WeeklyTotalNetValue=0; //周平均净值
	FundPortion = (float)PurchaseAmout * (1-PURCHASERATE) / EACHDENOMINATION;
	printf("Quotient    Net Value     Increase Rate    Current Value    Current Payoff18\n");
	
	DailyNetGrowthRate[0]=0;
	for(i=0;i<WORKINGDAY;i++)
	{	
		UserCurrentNetValue[i]=FundPortion * EachDayNetValue[i];
		FloatingPL[i]=UserCurrentNetValue[i]*(1-REDEMPTIONRATE)-PurchaseAmout;
		if(i!=0)
		{
			DailyNetGrowthRate[i]=(UserCurrentNetValue[i]-UserCurrentNetValue[i-1])/UserCurrentNetValue[i-1]*100;
		}
		printf("%8.0f %13.4f %15.2f%%%17.0f%18.0f\n",FundPortion,EachDayNetValue[i],DailyNetGrowthRate[i],UserCurrentNetValue[i],FloatingPL[i]);
		WeeklyTotalNetValue += EachDayNetValue[i];
		
	}
	printf("Average Net Value in this week = %.5f\n",WeeklyTotalNetValue/WORKINGDAY);
}

void main()
{	
	int i;

	int PurchaseAmout;   //购买金额
	float EachDayNetValue[WORKINGDAY];//每天基金净值
	//float EachDayNetValue[WORKINGDAY]={0.9872,0.9935,1.0102,0.9905,1.0235};
	do
	{
		printf("Please input your money(>1000, and multiple): ");
		scanf("%d",&PurchaseAmout);
		if(PurchaseAmout%1000)
			printf("%d is not multiple of 1000.\n",PurchaseAmout);
	}while(PurchaseAmout%1000);
	printf("Please input everyday net value in this week:\n");

	for(i=0;i<WORKINGDAY;i++)
		scanf("%f",&EachDayNetValue[i]);  //0.9872 0.9935 1.0102 0.9905 1.0235 for input copy
	
	WeeklyUserEarning(EachDayNetValue,PurchaseAmout);
	
}