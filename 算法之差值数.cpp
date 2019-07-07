#include "stdio.h"
#include "stdlib.h"
void tongji(long numb, int length, int count) {
        if (length == 0) {	
			printf("  %ld  ",numb);
            return;
        }
        long last = numb % 10;
		length -= 1;
        if(last + count <= 9){
			numb  = numb* 10 + last + count;
            tongji( numb , length , count);
		}
        if(last - count >= 0){
			numb = numb * 10 + last - count;
            tongji( numb, length, count);
		}
}
main()
{
	int length,count;
	printf("请输入长度和绝对值：\n");
	scanf("%d %d",&length,&count);
	if (length == 1 && length == 0)
    printf("请重新输入");
    for (int i = 1; i <= 9; i++)
        tongji( i, length - 1, count);
	system("pause");
	return 0;

 } 
