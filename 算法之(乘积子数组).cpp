#include "stdio.h"
#include "stdlib.h"
/*����: nums = [10,5,2,6], k = 100
���: 8
������ֱ�Ϊ: [10], [5], [2], [6], [10,5], [5,2], [2,6], [5,2,6]*/
main()
{
    int count=0,n=0,k,i;
	int nums[100];
    int sum=1;
    int left=0,right=0;
	printf("���������ֵK,�����鳤��:");
	scanf("%d %d",&k,&n);
	printf("�������������ֵ:");
	for(i=0;i<n;i++)
		scanf("%d",&nums[i]);
    for(right=0;right<n;)
	{
        sum*=nums[right++];
        while(left<right&&sum>=k)
        	sum/=nums[left++];
        count+=right-left;
	}
	printf("%d",count);
	system("pause");
	return 0;

}
