#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int n;
	int answer,useranswer;//原答案与用户答案
	int a,b,c,Operator1,Operator2,i;
	int right=0;//答对了多少题目设置初始值为0
	printf("请输入题目数目（>=1）:");//屏幕显示让用户输入需要的题目数目，有非法字符的检验
	scanf("%d",&n);
	while(n<=0)
	{
		while(getchar()!='\n');
		printf("请重新输入题目数目（>=1）:");
		scanf("%d",&n);
	}
	srand((unsigned int)time(NULL));//生成随机数
	
	for(i=0;i<n;i++)//限制100内的数字
	{
		a=1+(rand()%99);
		b=1+(rand()%99);
		c=1+(rand()%99);
		Operator1=rand()%4+1;
		Operator2=rand()%4+1;

	//主要的四则运算算法
		switch(Operator1){
		case 1:
			switch(Operator2){
			case 1:
				answer=a+b+c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d+%d+%d=\n",a,b,c);
					printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)//判断答案
					{
						printf("恭喜答对");
						putchar('\n');
						right++;//计分
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
					
				}
				break;
			case 2:
				answer=a+b-c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d+%d-%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对",right);
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 3:
				answer=a+b*c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d+%d*%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 4:
				answer=a+b/c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d+%d/%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			}
			break;
		case 2:
			switch(Operator2){
			case 1:
				answer=a-b+c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d-%d+%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 2:
				answer=a-b-c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d-%d-%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 3:
				answer=a-b*c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d-%d*%d\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 4:
				answer=a-b/c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d-%d/%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			}
			break;
		case 3:
			switch(Operator2){
			case 1:
				answer=a*b+c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d*%d+%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 2:
				answer=a*b-c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d*%d-%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 3:
				answer=a*b*c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d*%d*%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 4:
				answer=a*b/c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d*%d/%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			}
			break;
		case 4:
			switch(Operator2){
			case 1:
				answer=a/b+c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d/%d+%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 2:
				answer=a/b-c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d/%d-%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 3:
				answer=a/b*c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d/%d*%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");
						putchar('\n');
					}
				}
				break;
			case 4:
				answer=a/b/c;
				if(answer<0){
					i--;
					continue;
				}else{
					printf("%d/%d/%d=\n",a,b,c);
						printf(" 请输入答案:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("恭喜答对");
						putchar('\n');
						right++;
					}
					else
					{
						printf("答案错误");	
						putchar('\n');
					}
				}
				break;
			}
			break;
		}
	
	}printf("正確数目：%d",right);//显示正确数目
	putchar('\n');
	printf("正确率：%d/%d",right,n);
	putchar('\n');
	system("pause");
	
}