#include "stdio.h"
#include "stdlib.h"
int add(int x,int n);
main()
{
	int x,n;
	long result;
	printf("����������ĵ�����ָ����");
	scanf("%d %d",&x,&n);
	result = add(x,n);
	printf("���Ϊ��%ld\n\n",result);
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