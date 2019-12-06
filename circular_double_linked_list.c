#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int value;
	struct Node *next;
	struct Node *prev;
};

int length(struct Node *list)
{
	if(list == NULL)
		return 0;
	int count = 1;
	struct Node *list1 = list->next;
	while(list1 != list)
	{
		count++;
		list1 = list1->next;
	}
	return count++;
}
void printList(struct Node *list, int clockwise)
{
	if(list == NULL)
	{
		printf("List is Empty\n");
		return;
	}
	struct Node *list1 = list;
	if(clockwise == 1)
    {
    	while(1)
    	{
	    	//printf("%d pre %d next %d \n",list1->value,list1->prev->value, list1->next->value);
	    	printf("%d,",list1->value);
	        if(list1->next == list)
	        if(list1->next == list)
	             break;
			list1 = list1->next;
		}
    }
    else 
    {
    	while(1)
    	{
	    	printf("%d,",list1->prev->value);
	        if(list1->prev == list)	break;
			list1 = list1->prev;
		}
    };
    printf("\n");
    return;
}
struct Node *add(struct Node *list, int n)
{
	struct Node *node = (struct Node *) malloc(sizeof(struct Node));
	node->value = n;
	node->next = NULL;
	node->prev = NULL;
	if(list == NULL)
	{
		list = node;
		node->prev = node;
		node->next = node;
	}
	struct Node *temp = list->next;;
	if(list->value == n)	
		return list;
	while(temp != list)
	{
		if(temp->value == node->value)
		{
			return list;
		}
		temp = temp->next;
	}
	struct Node *last = list;
	while(last->next != list)
		last = last->next;
	node->next = list;
	list->prev = node;
	node->prev = last;
	last->next = node;
	list = node;
	return list;
}
struct Node *delete(struct Node *list, int n)
{
	if(list == NULL || (length(list) == 1 && list->value == n))
		return NULL;
	int found = 0;
	struct Node *temp1;
	struct Node *temp2;
	struct Node *last = list;

	while(last->next != list)
		last = last->next;
	if(list->value == n)
	{
		list = list->next;
		//free(last->next);
		if(length(list) == 1 && list->value == n)
			return NULL;
		last->next = list;
		list->prev = last;
	}
	temp1 = list;
	temp2 = temp1->next;
	while(temp1->next != list)
	{
		if(temp2->value == n)
		{
			found = 1;
			temp1->next = temp2->next;
			temp1->next->prev = temp1;
			//free(temp2);
		}	
		temp1 = temp1->next;
		temp2 = temp1->next;
	}
	if(found == 0)
		printf("%d not found,\n", n);
	return list; 
}
struct Node *sort(struct Node *list)
{
	if(list == NULL || length(list) == 1)
		return list;
	struct Node *list1 = list;
	struct Node *list2;
	while(list1-> next != list)
	{
		list2 = list1->next;
		while(list2 != list)
		{
			if(list2->value < list1->value)
			{
				int temp = list1->value;
				list1->value = list2->value;
				list2->value = temp;
			}
			list2 = list2->next;
		}
		list1 = list1->next;
	}
	return list;
}