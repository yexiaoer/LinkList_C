#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "circular_double_linked_list.h"
int main()
{	
   	struct Node *list1 = NULL;
	while (1) 
	{
		char *command;
		int i1, i2, i3, i4;
		scanf("%s", command);
		scanf("%d", &i1);
		scanf("%d", &i2);
		
		printf("%s %d", command, i2);

		if (strcmp(command, "add") == 0) 
		{
			while(1) {
				int i;
				scanf("%d", &i2);
				printf("%d\n", i2);
				fflush(stdout);
				break;
				return 0;
				if(i == '\n')	break;
				list1 = add(list1, i);
				printList(list1,1);
			}
			
		}
		break;
	}
}
		/*else if (strcmp(command, "delete")==0) 
		{
			while(1) {
				int i;
				scanf("%d",&i);
				if(i == '\n')	break;
				list1 = delete(list1, i);

				printList(list1,1);
			}
		}
		else if (strcmp(command, "sort")==0) 
		{
			list1 = sort(list1);
			printList(list1,1);
		}
		else if (strcmp(command, "print")==0) 
		{
			char *p;
			scanf("%s",p);
			if (strcmp(p, "true")) 
				printList(list1, 1);
			else
				printList(list1, 0);
		}
		else
			printf("Wrong");*/
	/*
		struct Node *list1 = NULL;
		list1 = add(list1, 10);
		list1 = add(list1, 8);
		list1 = add(list1, 7);
		list1 = add(list1, 2);
		list1 = add(list1, 19);
		list1 = add(list1, 1);
		list1 = add(list1, 20);
		list1 = add(list1, 15);
		list1 = add(list1, 20);
		list1 = add(list1, 2);
		printList(list1,1);

		list1 = delete(list1,3);
		list1 = delete(list1,4);
		printList(list1,1);
		list1 = delete(list1,2);
		printList(list1,1);

		list1 = add(list1, 100);
		printList(list1,1);
		list1 = add(list1, 20);
		list1 = add(list1, 18);
		list1 = add(list1, 55);
		printList(list1,1);

		list1 = delete(list1,55);
		printList(list1,1);
		list1 = sort(list1);
		printList(list1,1);
		list1 = sort(list1);

		printList(list1,1);
		list1 = delete(list1,100);
		printList(list1,1);
		list1 = sort(list1);
		printList(list1,1);
		printList(list1,0);*/