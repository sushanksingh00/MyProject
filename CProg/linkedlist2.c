#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
}
node;

int main(int argc, char *argv[])
{
	node *list = NULL;

	for (int i = 1; i < argc; i++)
	{
		int num_input = atoi(argv[i]);

		node *n = malloc(sizeof(node));
		if (n==NULL)
		{
			return 1;
		}
		n->number = num_input;
		n->next = NULL;

		if (list == NULL)
		{
			list = n;
		}

		//if the linked list you want to be in ascending order itself use a else if stmt
		//this wont be running for first pointing

		else if( n->number < list->number)//comparing the new n->number and old list->number which was first node
		{
			n->next = list; //If it has to be inserted in between use the previous method to insret
			list = n;
		}

		else
		{
			for (node *ptr= list; ptr != NULL; ptr = ptr->next) //else create a pointer and run it for checking and iritrates over all the pointers.
			{
				if (ptr->next == NULL)
				{
					ptr->next = n; //Here we are joining the new node in the end
					break;
				}
				if (n->number < ptr->next->number)
				{
					n->next = ptr->next; //if has to be inserted, Do it.
					ptr->next = n;
					break;
				}
			}

		}


	}
	node *ptr2 = list;

	while (ptr2 != NULL)
	{
		printf("%i\n", ptr2->number);
		ptr2 = ptr2->next;
	}
	return 0;
}