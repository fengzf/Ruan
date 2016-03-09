#include<stdio.h>
void main()
{
	int i;
	double money = 1000;  //本金 
    int years = 20;    //存钱年数 
    double sum = 0;  //存款总额 
    double r = 0.05;   //利率 
	printf("请输入本金:");
	scanf("%lf",&money);
	printf("请输入存钱年数:");
	scanf("%d",&years);
	printf("请输入原存款总额:");
	scanf("%lf",&sum);
	printf("请输入年利率:");
	scanf("%lf",&r);
    for(i = 1 ; i<=years; i++)
	{
        sum = (1+ r) * i *money;  
		printf("存钱第%d年后的存款总额为%.3lf:\n",i,sum);
	}
}