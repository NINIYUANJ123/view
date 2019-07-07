#include <stdlib.h>
#include <stdio.h>
#include <time.h>         
main()
{
	int i,num,j,k;
	int count=0;
	int m=0;
	int a[30];
	char c=0;
	srand( (unsigned)time( NULL ) );
    for( i = 0; i < 10;i++ )
	{
		a[i] = rand()%100;
		printf(" %d ",a[i]);
	}
    do
	{
		count++;
		printf("请您输入您要插入的数:");
		scanf("%d",&num);
		a[9+count] = num;
    	for(i=0;i<(10+count);i++)
		{
			for(j=(i+1);j<=(10+count);j++)
			{
				if(a[i]<a[j])
				{
					k=a[i];
					a[i]=a[j];
					a[j]=k;
				}
			}
		}
		for(i=0;i<(10+count);i++)
		{
		    printf(" %d ",a[i]);
		}
		printf("\n是否继续输入?(y/n)");
		fflush(stdin);
		c=getchar();

	}while(c=='Y' || c=='y');
	return 0;
}