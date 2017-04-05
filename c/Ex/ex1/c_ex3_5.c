#include <stdio.h>
/*选做题：【编程扩展题】
开放式基金是一种委托投资理财产品。用户可以向基金管理机构购买/赎回基金，基金管理机构负责将基金投资于股票等金融产品获取收益，并收取一定的管理费用。假设某基金在成立时每份面值为1元，申购费率为1.5%，赎回费率为0.5%。则有如下规则：
1)	每个用户购买时的金额必须大于等于1000，并且是1000的整数倍；
2)	基金份额 ＝ 购买金额×（1－申购费率）/份额面值；
3)	基金运作后每天公布当日每份基金净值，如0.9871或者1.0121，则：
	　　　　　用户当前净值＝基金份额×当日每份基金净值；
4)	每日净值增长率＝（当日每份基金净值－昨日每份基金净值）/昨日每份基金净值×100％；
5)	浮动盈亏＝用户当前净值×（1－赎回费率）－购买金额；
6)	周平均净值 ＝ 一周每日净值的和/工作日；
编写一个程序，要求用户输入在基金成立时的购买金额和基金运作第一周的每日每份基金净值，统计一周来用户的收益情况（提示：可用数组存放一周中每日的数据）。例如，一次程序运行的情况如下：
Please input your money(>1000, and multiple): 1500
1500 is not multiple of 1000.
Please input your money(>＝1000, and multiple): 10000
Please input everyday net value in this week:
0.9872  0.9935  1.0102  0.9905  1.0235
Quotient    Net Value     Increase Rate    Current Value    Current Payoff18
9850       0.9872           0.00%           9724            -325
9850       0.9935           0.64%           9786            -263
9850       1.0102           1.68%           9950            -99
9850       0.9905	 -1.95%           9756            -292
9850       1.0235           3.33%          10081              31
Average Net Value in this week = 1.00098 */
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