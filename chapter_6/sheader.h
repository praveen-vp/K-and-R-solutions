

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct linklist {
		int lnum;
		struct linklist *ptr;
};

struct tnode {
		char *word;
		struct linklist *lines;
		struct tnode *left;
		struct tnode *right;
};


