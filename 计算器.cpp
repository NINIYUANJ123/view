#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
void add()
{
	char c = 0;
	do
	{
		char d = 0;
		system("cls");
		double a,b,sum;
		puts("\n\t\t\t\t\t**------- �� �� �� �� -------**");
		printf("\n\t\t\t\t\t��������Ҫ��������ּ������:");
		printf("\t");
		scanf("%lf%c%lf",&a,&d,&b);
				while ((c = getchar()) != EOF && c != '\n');
		if(d == '+')
		{
			sum= a+b ;
			printf("\n\t\t\t\t\t���Ϊ:%lf",sum);
		}
		else
			printf("\t\t\t\t\t��������ַ����Ǽӷ��ַ�");
		printf("\n\n\t\t\t\t\t�Ƿ������������?(Y/N)");
        c = getch();
		putch(c);
		putch('\n');
	}while(c == 'y' || c == 'Y');
}
void sub()
{
	char c = 0;
	do
	{
		char d = 0;
		system("cls");
		double a,b,sum;
		puts("\n\t\t\t\t\t**------- �� �� �� �� -------**");
		printf("\n\t\t\t\t\t��������Ҫ��������ּ������:");
		printf("\t");
		scanf("%lf%c%lf",&a,&d,&b);
		if(d == '-')
		{
			sum= a-b ;
			printf("\n\t\t\t\t\t���Ϊ:%lf",sum);
		}
		else
			printf("\t\t\t\t\t��������ַ����Ǽ����ַ�");
		printf("\n\n\t\t\t\t\t�Ƿ������������?(Y/N)");
        c = getch();
		putch(c);
		putch('\n');
	}while(c == 'y' || c == 'Y');
}
void mul()
{
	char c = 0;
	do
	{
		char d=0;
		system("cls");
		double a,b,sum;
		puts("\n\t\t\t\t\t**------- �� �� �� �� -------**");
		printf("\n\t\t\t\t\t��������Ҫ��������ּ������:");
		printf("\t");
		scanf("%lf%c%lf",&a,&d,&b);
		if(d == '*')
		{
			sum= a*b ;
			printf("\n\t\t\t\t\t���Ϊ:%lf",sum);
		}
		else
			printf("\t\t\t\t\t��������ַ����ǳ˷��ַ�");
		printf("\n\n\t\t\t\t\t�Ƿ������������?(Y/N)");
        c = getch();
		putch(c);
		putch('\n');
	}while(c == 'y' || c == 'Y');
}
void div()
{
	char c = 0;
	do
	{
		char d=0;
		system("cls");
		double a,b,sum;
		puts("\n\t\t\t\t\t**------- �� �� �� �� -------**");
		printf("\n\t\t\t\t\t��������Ҫ��������ּ������:");
		printf("\t");
		scanf("%lf%c%lf",&a,&d,&b);
		if(d == '/')
		{
			sum= a/b ;
			printf("\n\t\t\t\t\t���Ϊ:%lf",sum);
		}
		else
			printf("\t\t\t\t\t��������ַ����Ǽӷ��ַ�");
		printf("\n\n\t\t\t\t\t�Ƿ������������?(Y/N)");
        c = getch();
		putch(c);
		putch('\n');
	}while(c == 'y' || c == 'Y');
}
void mix()
{
    char c,d=0;
	do
	{
		system("cls");
		double a,b,sum=0;
		puts("\n\t\t\t\t\t**------- �� �� �� �� -------**");
		printf("\n\t\t\t\t\t��������Ҫ���������:");
		printf("\t");
		scanf("%lf",&a) ;
		while(1)
		{
			d = getchar();
			if(d=='+' || d=='-' || d=='*' || d=='/' || d=='=')
			{
				if(d != '=')
				{
					scanf("%lf",&b) ;
					if(d == '+')
					{
						sum = a + b ;
					}
					else if(d == '-')
					{
						sum = a - b ;
					}
					else if(d == '*')
					{
						sum = a * b ;
					}
					else if(d == '/')
					{
						sum = a / b ;
					}
					a = sum ;
				}
				else
				{
					break;
				}
			}
			else
			{
				printf("����Ĳ��Ϸ��ַ�");
			}
		}
		printf("\t\t\t\t\t���Ϊ:%lf",a);
		printf("\n\n\t\t\t\t\t�Ƿ������������?(Y/N)");
        c = getch();
		putch(c);
		putch('\n');
	}while(c == 'y' || c == 'Y');
}
int Menu()
{
	int a;
	system("cls");
	puts("\n\t\t\t\t\t*******��ѡ��������������***********");
	puts("\t\t\t\t\t*----------------------------------*");
	puts("\t\t\t\t\t***      (1).�ӷ�����            ***");
	puts("\t\t\t\t\t***      (2).��������            ***");
	puts("\t\t\t\t\t***      (3).�˷�����            ***");
	puts("\t\t\t\t\t***      (4).��������            ***");
	puts("\t\t\t\t\t***      (5).�������            ***");
	puts("\t\t\t\t\t***      (0).�˳�                ***");
	puts("\t\t\t\t\t************************************");
	printf("\n\t\t\t\t\t");
	scanf("%d",&a);
	switch(a)
	{
		case(1):
			add();
			break;
		case(2):
			sub();
			break;
		case(3):
			mul();
			break;
		case(4):
			div();
			break;
		case(5):
			mix();
			break;
	}
	return a;
}


int main()
{
	system("color F2");
	while(Menu())
		;
	return 0;
}