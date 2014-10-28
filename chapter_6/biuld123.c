
/*
	 Build the list {1, 2, 3} in the heap and store
	 its head pointer in a local stack variable.
	 Returns the head pointer to the caller.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
				int data;
				struct node *next;
};

struct node *buildlist(void){
				struct *node head = malloc(sizeof(struct node));
				// first and the hea is the same;;;
				struct *node second = malloc(sizeof(struct node));
				struct *node third = malloc(sizeof(struct node));
				// allocated three nodes in the heap;;

				head->data = 1;
				head->next = second;
				// first node completed;

				second->data = 2;
				second->next = third;
				// second node completed

				third->data = 3;
				third->next = NULL;
				// third node completed with null pointer to indicate
				// end of list;;

				// now all are linked together from 1 to 3;;;;

				return head;		//return the starting addr of list;;
}

