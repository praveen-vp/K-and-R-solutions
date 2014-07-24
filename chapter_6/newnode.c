
#include <stdio.h>
struct node {
		int dat;
		struct node *next;
};

// h = new_node(10);

struct node * new_node(int x)
{
		struct node *p;
		p = malloc(sizeof(struct node));
		p->dat = x;
		p->next = 0;
		return p;
}

struct node * append(struct node *h,struct node *n)
{
		struct node *t = h;
		if(h == 0)
				return n;
		while(t->next != 0)
				t = t->next;
		t->next = n;
	
		return h;
}
// draw the control flow;;;;;;

main()
{
		struct node *h = 0;
		h = append(h,new_node(i));
//  append begining h modified insert new node at the 
//		begining 
// move, append recursive ,insert,list printing;
}

