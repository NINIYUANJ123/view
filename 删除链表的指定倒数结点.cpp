//给定一个链表，删除链表的倒数第 n 个节点，并且输出删除后的链表
#include <stdio.h>
#include <stdlib.h> 
int location;
struct Data
{
	int number;
	struct Data *next;
};
void Create(struct Data *pHead)
{
	struct Data *pNew, *pMove;
	int n,d;
	pHead->next = NULL;
	pNew = pHead;
	printf("请输入链表(以0结束输入)：");
	scanf("%d", &n);
	while( n != 0)
	{
		pMove = (struct Data *)malloc(sizeof(struct Data));
		pMove->number = n;
		pMove->next = pNew->next;
		pNew->next  = pMove;
		pNew = pMove;
		scanf("%d", &n);
	}
	printf("请输入要删除的字数:");
	scanf("%d",&d);
	struct Data *p = (struct Data *)malloc(sizeof (struct Data));
	p = pHead;
	p = Delete(p,d);
	while(p->next != NULL)
	{
		printf("%d",p->next->number);
		p = p->next;
	}
}
struct Data *Delete(struct Data *pHead,int n)
{
	int i;
    struct Data *fast = (struct Data *)malloc(sizeof (struct Data));
	struct Data *slow = (struct Data *)malloc(sizeof (struct Data));
	fast = pHead;;
	slow = pHead;;
	if (n != 5)
	{
		for (i = 0; i < n; i++)
		{
			fast = fast->next;
		}
		while (fast->next!=NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}
		slow->next = slow->next->next;
	    return pHead;;
	}
	if(n==5)
	{
		pHead = pHead->next;
		return pHead;;
	}
}
int main()
{
	struct Data *pHead = (struct Data *)malloc(sizeof(struct Data));
	Create(pHead);  
	system("pause");
	return 0;
}
