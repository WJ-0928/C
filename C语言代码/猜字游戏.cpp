//.完成猜数字游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void meun()
{
	printf("#################\n");
	printf("#### 1.play #####\n");
	printf("#### 0.exit #####\n");
}
void game()
{
	int random_num=rand()%100+1;
	int input=0;
	while(1)
	{
		printf("输入你猜的数：\n");
		scanf("%d",&input);
		if(input>random_num)
		{
			printf("猜大了\n");
		}
		else if(input<random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input=0;
	srand((unsigned)time(NULL));
	do{
	    meun();
	    printf("请选择>：\n");
	    scanf("%d",&input);
	    switch(input)
	    {
		    case 1:
			    game();
			    break;
		    case 0:
		    	break;
	    	default:
		    	printf("选则错误，请重新输入：\n");
		    	break;
    	}
	}
	while(input);
	return 0;
	
 } 
