

#include "hashheader.h"

struct nlist *lookup(char *);
char *str_dup(char *);

// install : put (name,defn) in hashtab 
struct nlist *install(char *name,char *defn)
{
				struct nlist *np;
				unsigned  hashval;

				if((np = lookup(name)) == NULL) {   // not found
								np = (struct nlist *)malloc(sizeof(*np));
								if(np == NULL || (np->name = str_dup(name)) == NULL)
												return NULL;
								hashval = hash(name);
								np->next = hashtab[hashval];
								hashtab[hashval] = np;
				}
				else 						//	 already there 
								free((void *)np->defn);				// free previous defn
				if((np->defn = str_dup(defn)) == NULL)
								return NULL;
				return np;
}

