#include <stdio.h>
/*ѡ���⣺�������չ�⡿
����ʽ������һ��ί��Ͷ����Ʋ�Ʒ���û��������������������/��ػ��𣬻������������𽫻���Ͷ���ڹ�Ʊ�Ƚ��ڲ�Ʒ��ȡ���棬����ȡһ���Ĺ�����á�����ĳ�����ڳ���ʱÿ����ֵΪ1Ԫ���깺����Ϊ1.5%����ط���Ϊ0.5%���������¹���
1)	ÿ���û�����ʱ�Ľ�������ڵ���1000��������1000����������
2)	����ݶ� �� ���������1���깺���ʣ�/�ݶ���ֵ��
3)	����������ÿ�칫������ÿ�ݻ���ֵ����0.9871����1.0121����
	�����������û���ǰ��ֵ������ݶ������ÿ�ݻ���ֵ��
4)	ÿ�վ�ֵ�����ʣ�������ÿ�ݻ���ֵ������ÿ�ݻ���ֵ��/����ÿ�ݻ���ֵ��100����
5)	����ӯ�����û���ǰ��ֵ����1����ط��ʣ��������
6)	��ƽ����ֵ �� һ��ÿ�վ�ֵ�ĺ�/�����գ�
��дһ������Ҫ���û������ڻ������ʱ�Ĺ�����ͻ���������һ�ܵ�ÿ��ÿ�ݻ���ֵ��ͳ��һ�����û��������������ʾ������������һ����ÿ�յ����ݣ������磬һ�γ������е�������£�
Please input your money(>1000, and multiple): 1500
1500 is not multiple of 1000.
Please input your money(>��1000, and multiple): 10000
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

void WeeklyUserEarning(float *EachDayNetValue ,int PurchaseAmout) //�β���ÿ�վ�ֵ����͹�����
{

	int i;
	float FundPortion;    //����ݶ�
	float UserCurrentNetValue[WORKINGDAY]; //�û���ǰ��ֵ Current Value
	float DailyNetGrowthRate[WORKINGDAY];   //ÿ�վ�ֵ������Increase Rate
	float FloatingPL[WORKINGDAY]; //����ӯ��  Current Payoff
	float WeeklyTotalNetValue=0; //��ƽ����ֵ
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

	int PurchaseAmout;   //������
	float EachDayNetValue[WORKINGDAY];//ÿ�����ֵ
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