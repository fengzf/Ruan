#include<stdio.h>
#include<math.h>
void view()
{
    printf("              |---------------------------------------------|\n");
    printf("              |                 ��/��������                 |\n");
    printf("              |---------------------------------------------|\n");
    printf("              |1.��������                                   |\n");
    printf("              |---------------------------------------------|\n");
    printf("              |2.��������                                   |\n");
    printf("              |---------------------------------------------|\n");
	printf("              |3.������                                     |\n");
    printf("              |---------------------------------------------|\n");
	printf("              |4.��������                                   |\n");
    printf("              |---------------------------------------------|\n");
	printf("              |5.�̶���Ǯ                                   |\n");
    printf("              |---------------------------------------------|\n");
    printf("              |0.�˳�ϵͳ                                   |\n");
    printf("              |---------------------------------------------|\n");
}



main()
{
    int i,n,m,N=100;
    double v,money;  //���� 
    int years,months;    //��Ǯ���������� 
    double sum;  //����ܶ� 
    double r,month;   //�ꡢ������
	double A,B,C,y,Money;
    while(1)
    {
        view();
        printf("��ѡ��(0-5):");
        scanf("%d",&n);
        switch(n)
        {
    case 1:
        printf("�����뱾��:");
        scanf("%lf",&money);
          printf("�������Ǯ����:");
        scanf("%d",&years);
        printf("����������:");
        scanf("%lf",&r);
        for(i = 1 ; i<=years; i++)
        {
            sum = r*i*money+money;  
            printf("�����%d���Ĵ���ܶ�Ϊ:%.2lf\n\n\n",i,sum);
        }
        break;
    case 2:
        printf("��ѡ��:\n");
        printf("1.ͨ�����������ܶ�\n");
        printf("2.ͨ��Ŀ���ܶ��󱾽�\n\n");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            printf("�����뱾��:");
            scanf("%lf",&money);
            printf("�������Ǯ����:");
            scanf("%d",&years);
            printf("����������:");
            scanf("%lf",&r);
            for(i = 1 ; i<=years; i++)
            {
                v=pow(1+r,i);
                sum = v*money;  
                printf("�����%d���Ĵ���ܶ�Ϊ:%.2lf\n\n\n",i,sum); 
            }
            break;
        case 2:
            printf("������Ŀ���Ǯ:");
            scanf("%lf",&sum);
            printf("�������Ǯ����:");
            scanf("%d",&years);
            printf("����������:");
            scanf("%lf",&r);
            for(i = 1 ; i<=years; i++)
            {
                v=pow(1+r,i);
            }
            money=sum/v;  
            printf("���ڱ�����뱾��Ϊ:%.2lf\n\n\n",money); 
            break;
        }
		case 3:
			printf("�����뱾��:");
            scanf("%lf",&money);
	        printf("������Ŀ���Ǯ:");
            scanf("%lf",&sum);
            printf("����������:");
            scanf("%lf",&r);
			C=A=1+r;
	        B=sum/money;
			for(i=1;i<N;i++)
			{
				C=C*A;
		        if(C>=B)
				{
		        	break;
				}
			}
	        printf("��������Ϊ%d\n\n\n",i+1);
			break;
		case 4:
			printf("�����뱾��:");
            scanf("%lf",&money);
            printf("�������Ǯ����:");
	        scanf("%d",&years);
	        printf("������Ŀ���Ǯ:");
	        scanf("%lf",&sum);
	        B=sum/money;
	        y=1.0/years;
	        r=pow(B,y)-1;
	        printf("����������Ϊ:%-.3lf\n\n\n",r);
			break;
		case 5:
			printf("ÿ��Ͷ�뱾��:");
	        scanf("%lf",&money);
	        printf("�������Ǯ����:");
	        scanf("%d",&years);
	        printf("������������:");
	        scanf("%lf",&r);
	        month=r/12;
	        months=years*12;
	        Money=money;
	        for(i=0;i<months;i++)
			{
		        sum=(1+month)*Money;
		        Money=sum+money;
			}
	        printf("%d��󱾽����Ϣ֮��Ϊ:%lf\n\n\n",years,Money);
			break;

    case 0:
        return 0;
    }
    }
}