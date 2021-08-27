#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* should pertain the limits offered by the stack memory count
 * can be seen on your system through `ulimit -s`
 */
#define SAMPLE_COUNT (10U * 100U)


typedef struct Node {
	char data;
	struct Node* next;
} Node;
Node* addList(Node* ptr, char data)
{
	if(ptr==NULL)
	{
		ptr = malloc(sizeof(Node));
		ptr->data = data;
		ptr->next = NULL;
		return ptr;
	}
	Node *start = ptr;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	Node* new = malloc(sizeof(Node));
	new->data = data;
	ptr->next = new;
	new->next = NULL;
	return start;
}
int printList(Node* ptr)
{
	while(ptr->next!=NULL)
	{
		printf("%c\n",ptr->data);
		ptr = ptr->next;
	}
	printf("%c\n", ptr->data);
	return 0;
}
int deleteList(Node *ptr)
{
	while(ptr->next!=NULL)
	{
		Node *next = ptr->next;
		free(ptr);
		ptr = next;
	}
	free(ptr);
	return 0;
}

int main()
{
  /*  A benchmark of a dynamic memory allocation
   *  uses heap address. 
   */
	Node* ptr = NULL;
	float startTime = (float)clock()/CLOCKS_PER_SEC;
	for(int i=0;i<SAMPLE_COUNT;i++)
		ptr = addList(ptr, 'a');
	float endTime = (float)clock()/CLOCKS_PER_SEC;
	float timeElapsed = endTime - startTime;
  printf("\nDynamic memory allocation uses this address: %p",ptr);
	printf("\nA dynamic memory allocation which uses linked lists use time %9.5f\n", timeElapsed);
	deleteList(ptr);
  /* A benchmark of a static memory allocation
   * uses stack address. 
   */
	startTime = (float)clock()/CLOCKS_PER_SEC;
	char array[SAMPLE_COUNT];
	for(int i=0; i<SAMPLE_COUNT; i++)
		array[i] = 'a';
	endTime = (float)clock()/CLOCKS_PER_SEC;
	timeElapsed = endTime - startTime;
  printf("\nStatic memory allocation uses this address: %p",array);
	printf("\nA static allocation which uses arrays use time %9.5f\n", timeElapsed);
	return 0;
}
