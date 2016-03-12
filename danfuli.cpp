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
	printf("              |0.退出系统                                   |\n");
	printf("              |---------------------------------------------|\n");
}

main()
{
	int i,n,m;
    double v,money;  //本金 
    int years;    //存钱年数 
    double sum;  //存款总额 
    double r;   //利率
	while(1)
	{
        view();
        printf("请选择(0-2):");
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
            printf("存入第%d年后的存款总额为:%.2lf\n",i,sum);
		}
		printf("\n\n\n");
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
                printf("存入第%d年后的存款总额为:%.2lf\n",i,sum); 
			}
			printf("\n\n\n");
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
            printf("现在必须存入本金为:%.2lf\n",money); 
			printf("\n\n\n");
		    break;
		}
	case 0:
	    return 0;
	}
	}
}


