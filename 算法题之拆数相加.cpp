#include "stdio.h"
#include "stdlib.h"
main()
{
	int b=0,c=0,num;
	printf("������������Ҫ�����:");
	scanf("%d",&num);
	while (num >=10){
		b = num%10;
		c +=b;
		num = num/10;
		if(num < 10){
		num += c; 
		c = 0;
		}
	}
	printf("%d",num);
	system("pause");
}