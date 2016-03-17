#include<stdio.h>
#include<math.h>
void view()
{
    printf("              |---------------------------------------------|\n");
    printf("              |                 单/复利计算                 |\n");
    printf("              |---------------------------------------------|\n");
    printf("              |1.单利计算                                   |\n");
    printf("              |---------------------------------------------|\n");
    printf("              |2.复利计算                                   |\n");
    printf("              |---------------------------------------------|\n");
	printf("              |3.求年限                                     |\n");
    printf("              |---------------------------------------------|\n");
	printf("              |4.求年利率                                   |\n");
    printf("              |---------------------------------------------|\n");
	printf("              |5.固定存钱                                   |\n");
    printf("              |---------------------------------------------|\n");
    printf("              |0.退出系统                                   |\n");
    printf("              |---------------------------------------------|\n");
}



main()
{
    int i,n,m,N=100;
    double v,money;  //本金 
    int years,months;    //存钱年数、月数 
    double sum;  //存款总额 
    double r,month;   //年、月利率
	double A,B,C,y,Money;
    while(1)
    {
        view();
        printf("请选择(0-5):");
        scanf("%d",&n);
        switch(n)
        {
    case 1:
        printf("请输入本金:");
        scanf("%lf",&money);
          printf("请输入存钱年数:");
        scanf("%d",&years);
        printf("请输入利率:");
        scanf("%lf",&r);
        for(i = 1 ; i<=years; i++)
        {
            sum = r*i*money+money;  
            printf("存入第%d年后的存款总额为:%.2lf\n\n\n",i,sum);
        }
        break;
    case 2:
        printf("请选择:\n");
        printf("1.通过本金求存款总额\n");
        printf("2.通过目标总额求本金\n\n");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            printf("请输入本金:");
            scanf("%lf",&money);
            printf("请输入存钱年数:");
            scanf("%d",&years);
            printf("请输入利率:");
            scanf("%lf",&r);
            for(i = 1 ; i<=years; i++)
            {
                v=pow(1+r,i);
                sum = v*money;  
                printf("存入第%d年后的存款总额为:%.2lf\n\n\n",i,sum); 
            }
            break;
        case 2:
            printf("请输入目标金钱:");
            scanf("%lf",&sum);
            printf("请输入存钱年数:");
            scanf("%d",&years);
            printf("请输入利率:");
            scanf("%lf",&r);
            for(i = 1 ; i<=years; i++)
            {
                v=pow(1+r,i);
            }
            money=sum/v;  
            printf("现在必须存入本金为:%.2lf\n\n\n",money); 
            break;
        }
		case 3:
			printf("请输入本金:");
            scanf("%lf",&money);
	        printf("请输入目标金钱:");
            scanf("%lf",&sum);
            printf("请输入利率:");
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
	        printf("所需年数为%d\n\n\n",i+1);
			break;
		case 4:
			printf("请输入本金:");
            scanf("%lf",&money);
            printf("请输入存钱年数:");
	        scanf("%d",&years);
	        printf("请输入目标金钱:");
	        scanf("%lf",&sum);
	        B=sum/money;
	        y=1.0/years;
	        r=pow(B,y)-1;
	        printf("所求年利率为:%-.3lf\n\n\n",r);
			break;
		case 5:
			printf("每月投入本金:");
	        scanf("%lf",&money);
	        printf("请输入存钱年数:");
	        scanf("%d",&years);
	        printf("请输入年利率:");
	        scanf("%lf",&r);
	        month=r/12;
	        months=years*12;
	        Money=money;
	        for(i=0;i<months;i++)
			{
		        sum=(1+month)*Money;
		        Money=sum+money;
			}
	        printf("%d年后本金和利息之和为:%lf\n\n\n",years,Money);
			break;

    case 0:
        return 0;
    }
    }
}