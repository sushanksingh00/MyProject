//PREPENDING LINKED LIST

#include <stdio.h>
#include <stdlib.h>

//creating a node type def as a storage of number and a pointer to the next node

typedef struct node //writing "node" here to make it exist to use inside of that same struct
{
	int num;
	struct node *next; //way of using it
}
node;  // wrote it here to make it easier to use. Instead of "struct node" use "node".

int main(int argc, char *argv[])
{
	node *list = NULL; //creating a list which has NULL(nothing) not a garbage value.


	for (int i = 1; i < argc; i++) 
	{
		int num_input = atoi(argv[i]);

		node *n = malloc(sizeof(node)); // creating node for the next storage
		if (n == NULL)
		{
			return 1;
		}

		n->num = num_input; //num in node is given the inputed value
		n->next = list; //node's pointer pointing to list
		list = n;//now list is pointing to whole node

		//in the begining at first they might point to each other but from the secand node
		//the next node will be pointing to the previous location of the list pointer which is prev node
		//and the list now points to new node
		//list ----> new node -----> old node
		//basically we are inserting a new node.


	}

	//To print it out we assign a pointer which points to list's pointer which is always the latest node
	//so we print it out and assign our pointer to the node's pointer which was pointing to the next node.
	//print till the node's pointer becomes NULL i.e. LAST NODE.

	node *ptr = list;

	while(ptr != NULL)
	{
		printf("... %i\n", ptr->num);
		ptr = ptr->next;
	}
	return 0;
}
