#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int n;
	int answer,useranswer;
	int a,b,c,Operator1,Operator2,i;
	int right=0;
	printf("��������Ŀ��Ŀ��>=1��:");
	scanf("%d",&n);
	while(n<=0)
	{
		while(getchar()!='\n');
		printf("������������Ŀ��Ŀ��>=1��:");
		scanf("%d",&n);
	}
	srand((unsigned int)time(NULL));
	
	for(i=0;i<n;i++)
	{
		a=1+(rand()%99);
		b=1+(rand()%99);
		c=1+(rand()%99);
		Operator1=rand()%4+1;
		Operator2=rand()%4+1;

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
					printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���",right);
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");
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
						printf(" �������:");
					scanf("%d",&useranswer);
					if(useranswer==answer)
					{
						printf("��ϲ���");
						putchar('\n');
						right++;
					}
					else
					{
						printf("�𰸴���");	
						putchar('\n');
					}
				}
				break;
			}
			break;
		}
	
	}printf("���_��Ŀ��%d",right);
	putchar('\n');
	printf("��ȷ�ʣ�%d/%d",right,n);
	putchar('\n');
	system("pause");
	
}