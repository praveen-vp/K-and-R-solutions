
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define HASHSIZE 101

struct nlist { 			// table 
				struct nlist *next;  // next entry in chain
				char *name;						// defined name
				char *defn;						// replacement text
};

static struct nlist *hashtab[HASHSIZE];
unsigned hash(char *s);
char *str_dup(char *s);



