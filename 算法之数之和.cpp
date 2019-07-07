#include "stdio.h"
#include "stdlib.h"
main()
{
	int i,j,k,count,numb=0,n[100][100];
	scanf("%d",&numb);
	for(i = 0 ; i <= numb/2 ;i ++)
	{
		count=0;
		for(j = i+1 ; j <= numb/2+1 ; j ++)
		{
			n[i][j] = j;
			count += j ;
			if(count == numb)
			{
				for(k = i+1;k <= j;k++)
					printf(" %d ",n[i][k]);
				printf("\n");
				break;
			}
			else if(count > numb)
				break;
		}
	}
	printf(" %d\n",numb);
	system("pause");
}