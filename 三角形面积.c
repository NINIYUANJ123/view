#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main()
{
	system("color F2");
	float a,b,c,s,area;
	printf("请输入三角形的三边:");
	scanf("%f %f %f",&a,&b,&c);
	if (a>0 && b>0 && c>0 )
	{
		s = (a+b+c)/2 ;
		area = sqrt(s*(s-a)*(s-b)*(s-c)) ;
		printf("三角形面积为%f\n",area);
	}
	else
	{
		printf("请重新输入大于0的数字");
	}
	system("pause") ;
	return 0;
}