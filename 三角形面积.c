#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main()
{
	system("color F2");
	float a,b,c,s,area;
	printf("�����������ε�����:");
	scanf("%f %f %f",&a,&b,&c);
	if (a>0 && b>0 && c>0 )
	{
		s = (a+b+c)/2 ;
		area = sqrt(s*(s-a)*(s-b)*(s-c)) ;
		printf("���������Ϊ%f\n",area);
	}
	else
	{
		printf("�������������0������");
	}
	system("pause") ;
	return 0;
}