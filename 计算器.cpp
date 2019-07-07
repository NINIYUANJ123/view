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
		puts("\n\t\t\t\t\t**------- 加 法 运 算 -------**");
		printf("\n\t\t\t\t\t请输入您要运算的数字及运算符:");
		printf("\t");
		scanf("%lf%c%lf",&a,&d,&b);
				while ((c = getchar()) != EOF && c != '\n');
		if(d == '+')
		{
			sum= a+b ;
			printf("\n\t\t\t\t\t结果为:%lf",sum);
		}
		else
			printf("\t\t\t\t\t您输入的字符不是加法字符");
		printf("\n\n\t\t\t\t\t是否继续进行运算?(Y/N)");
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
		puts("\n\t\t\t\t\t**------- 减 法 运 算 -------**");
		printf("\n\t\t\t\t\t请输入您要运算的数字及运算符:");
		printf("\t");
		scanf("%lf%c%lf",&a,&d,&b);
		if(d == '-')
		{
			sum= a-b ;
			printf("\n\t\t\t\t\t结果为:%lf",sum);
		}
		else
			printf("\t\t\t\t\t您输入的字符不是减法字符");
		printf("\n\n\t\t\t\t\t是否继续进行运算?(Y/N)");
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
		puts("\n\t\t\t\t\t**------- 乘 法 运 算 -------**");
		printf("\n\t\t\t\t\t请输入您要运算的数字及运算符:");
		printf("\t");
		scanf("%lf%c%lf",&a,&d,&b);
		if(d == '*')
		{
			sum= a*b ;
			printf("\n\t\t\t\t\t结果为:%lf",sum);
		}
		else
			printf("\t\t\t\t\t您输入的字符不是乘法字符");
		printf("\n\n\t\t\t\t\t是否继续进行运算?(Y/N)");
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
		puts("\n\t\t\t\t\t**------- 除 法 运 算 -------**");
		printf("\n\t\t\t\t\t请输入您要运算的数字及运算符:");
		printf("\t");
		scanf("%lf%c%lf",&a,&d,&b);
		if(d == '/')
		{
			sum= a/b ;
			printf("\n\t\t\t\t\t结果为:%lf",sum);
		}
		else
			printf("\t\t\t\t\t您输入的字符不是加法字符");
		printf("\n\n\t\t\t\t\t是否继续进行运算?(Y/N)");
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
		puts("\n\t\t\t\t\t**------- 混 合 运 算 -------**");
		printf("\n\t\t\t\t\t请输入您要运算的数字:");
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
				printf("输入的不合法字符");
			}
		}
		printf("\t\t\t\t\t结果为:%lf",a);
		printf("\n\n\t\t\t\t\t是否继续进行运算?(Y/N)");
        c = getch();
		putch(c);
		putch('\n');
	}while(c == 'y' || c == 'Y');
}
int Menu()
{
	int a;
	system("cls");
	puts("\n\t\t\t\t\t*******请选择您的运算类型***********");
	puts("\t\t\t\t\t*----------------------------------*");
	puts("\t\t\t\t\t***      (1).加法运算            ***");
	puts("\t\t\t\t\t***      (2).减法运算            ***");
	puts("\t\t\t\t\t***      (3).乘法运算            ***");
	puts("\t\t\t\t\t***      (4).除法运算            ***");
	puts("\t\t\t\t\t***      (5).混合运算            ***");
	puts("\t\t\t\t\t***      (0).退出                ***");
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