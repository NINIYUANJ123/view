#include "stdio.h"
#include "stdlib.h"
void print1(int numb[],int k);
void print2(int numb[],int k);
main()
{
	int numb[20] = {2,3,1,2,4,5,6,8,4},flag,i,j,k=9;
	print1(numb,k);
	print2(numb,k);
	printf("%d",9/2);
	system("pause");
	return 0;
}
void print1(int numb[],int k)
{
	int i,flag,numb1[10],count = k/2;
	for(i = 0 ;i < count ; i ++)
		numb1[i] = numb[i*2]*10 + numb[i*2+1];
	for(i = 0 ; i < count-2 ; i ++)
	{
		if(numb1[i] + numb1[i+1] == numb1[i+2])
		{
			flag = 1;
		}
			else
			flag = 0;
	}
	if(flag == 1)
	{
		for(i = 0 ;i < count;i ++)
		{
			printf(" %d ",numb1[i]);
		}
	}
}
void print2(int numb[],int k)
{
	int i,flag,numb1[10],count = k/3;
	for(i = 0 ;i < count ; i ++)
		numb1[i] = numb[i*3]*100 + numb[i*3+1]*10 + numb[i*3+2];
	for(i = 0 ; i < count-2 ; i ++)
	{
		if(numb1[i] + numb1[i+1] == numb1[i+2])
		{
			flag = 1;
		}else
			flag = 0;
	}
	if(flag == 1)
	{
		for(i = 0 ;i < count;i ++)
		{
			printf(" %d ",numb1[i]);
		}
	}
}