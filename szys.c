#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int n;
	int answer,useranswer;//ԭ�����û���
	int a,b,c,Operator1,Operator2,i;
	int right=0;//����˶�����Ŀ���ó�ʼֵΪ0
	printf("��������Ŀ��Ŀ��>=1��:");//��Ļ��ʾ���û�������Ҫ����Ŀ��Ŀ���зǷ��ַ��ļ���
	scanf("%d",&n);
	while(n<=0)
	{
		while(getchar()!='\n');
		printf("������������Ŀ��Ŀ��>=1��:");
		scanf("%d",&n);
	}
	srand((unsigned int)time(NULL));//���������
	
	for(i=0;i<n;i++)//����100�ڵ�����
	{
		a=1+(rand()%99);
		b=1+(rand()%99);
		c=1+(rand()%99);
		Operator1=rand()%4+1;
		Operator2=rand()%4+1;

	//��Ҫ�����������㷨
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
					if(useranswer==answer)//�жϴ�
					{
						printf("��ϲ���");
						putchar('\n');
						right++;//�Ʒ�
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
	
	}printf("���_��Ŀ��%d",right);//��ʾ��ȷ��Ŀ
	putchar('\n');
	printf("��ȷ�ʣ�%d/%d",right,n);
	putchar('\n');
	system("pause");
	
}