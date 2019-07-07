#include "stdio.h"
#include "stdlib.h"
main()
{
	int i,j,d,k=5;
	scanf("%d",&k);
	int numb[k];
	for(i = 0 ; i < k ; i ++)
		scanf("%d",numb[i]);
	for(i = 0 ; i < k ; i ++)
	{
		for(j = i+1 ; j < k ; j ++)
		{
			if(numb[i] < numb[j])
			{
				d = numb[i];
				numb[i] = numb[j];
				numb[j] = d;
			}
		}
	}
	for(i = 0 ; i < k ; i ++)
		printf("%d ",numb[i]);
	system("pause");
	return 0;
}