#include "stdio.h"
#include "stdlib.h"
int add(int x,int n);
main()
{
	int x,n;
	long result;
	printf("请输入运算的底数和指数：");
	scanf("%d %d",&x,&n);
	result = add(x,n);
	printf("结果为：%ld\n\n",result);
	system("pause");
	return 0;
}
int add(int x,int n)
{
	long result = 1;
	if(n == 0)
		result == 1;
	else
	{
		n--;
		result = x * add(x,n);
	}
	return result;
}