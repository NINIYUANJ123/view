#include"stdio.h"
#include"stdlib.h"
int main()
{
	system("color F2");
	char a[20];
	printf("�������д���ַ���:");
	scanf("%s",a);
	for(int i=0;a[i]!=0;i++)
	{
		a[i]=a[i]+32 ;

	}
	printf("СдΪ:%s\n",a);
	system("pause");
	return 0;
}