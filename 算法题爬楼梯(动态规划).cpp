#include "stdio.h"
#include "stdlib.h"
main()
{
	int i,numb[30],n=0;
	printf("请输入台阶的数量");
	scanf("%d",&n);
	printf("请输入消耗的能量值");
	for(i = 0;i < n;i ++)
		scanf("%d",&numb[i]);
	for(i = 2;i < n;i ++)
	{
		if(numb[i-1] < numb[i-2])
			numb[i] += numb[i-1];
		else
			numb[i] += numb[i-2];
	}
	if(numb[n-1] < numb[n-2])
		printf("消耗最少能量值为%d",numb[n-1]);
	else
		printf("消耗最少能量值为%d",numb[n-2]);
	system("pause");
	return 0;
      
}