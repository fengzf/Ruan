#include<stdio.h>
void main()
{
	int i;
	double money = 1000;  //���� 
    int years = 20;    //��Ǯ���� 
    double sum = 0;  //����ܶ� 
    double r = 0.05;   //���� 
	printf("�����뱾��:");
	scanf("%lf",&money);
	printf("�������Ǯ����:");
	scanf("%d",&years);
	printf("������ԭ����ܶ�:");
	scanf("%lf",&sum);
	printf("������������:");
	scanf("%lf",&r);
    for(i = 1 ; i<=years; i++)
	{
        sum = (1+ r) * i *money;  
		printf("��Ǯ��%d���Ĵ���ܶ�Ϊ%.3lf:\n",i,sum);
	}
}