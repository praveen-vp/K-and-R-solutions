
// Write a function undef that will remove a name and 
// definition from the table maintained by lookup and
// install.

#include "hashheader.h"

// undef :remove a name and definition from the table

void undef(char *s)
{
		int h;
		struct nlist *prev,*np;
		prev = NULL;
		h = hash(s);										// hash value of s

		for(np = hashtab[h];np != NULL;np = np->next){
				if(strcmp(s,np->name) == 0)
						break;
				prev = np;									// remember previous entry
		}

		if(np != NULL){									// found name
				if(prev != NULL)						// first in th hash list ?
						hashtab[h] = np->next;
				else												//	else where in the hashlist 
						prev->next = np->next;	
		
				free((void *) np->name);
				free((void *) np->defn);
				free((void *) np);					// free allocated structure 
		}

}

