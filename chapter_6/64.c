
// write a pgm that prints the distinct words in its input stored into
//decreasing order of frequency of occurencec preceeding each word by its count

#include <stdio.h>
#include <ctype.h>

#define MAXWORD 100
#define NDISTINCT 1000

struct tnode {
		char *word;
		int count;
		struct tnode *left;
		struct tnode *right;
};

struct tnode *addtree(struct tnode*,char *);
int getword(char *,int);
void sortlist(void);
void treestore(struct tnode *);
struct tnode *talloc(void);
char *str_dup(char *);


struct tnode *list[NDISTINCT];
int ntn = 0;

// print distinct words sorted in decreasing order of frequency
main()
{	
		struct tnode *root;
		char word[MAXWORD];
		int i;

		root = NULL;
		while (getword(word,MAXWORD) != EOF)
				if(isalpha(word[0]))
						root = addtree(root,word);
		treestore(root);
		sortlist();
		for(i = 0;i < ntn;i++)
				printf("%2d:%20s\n",list[i]->count,list[i]->word);
		return 0;
}

// treestore : stores in list [] pointers to tree nodes
void treestore(struct tnode *p)
{
		if(p != NULL){
				treestore(p->left);
				if(ntn < NDISTINCT)
						list[ntn++] = p;
				treestore(p->right);
		}
}

// sortlist : sortlist of pointers to tree nodes
void sortlist()
{
		int gap,i,j;
		struct tnode *temp;
		for(gap= ntn/2;gap > 0;gap/=2)
				for(i = gap;i < ntn;i++)
						for(j = i-gap;j >= 0;j-=gap){
								if((list[j]->count) >= (list[j+gap]->count))
										break;
								temp = list[j];
								list[j] = list[j+gap];
								list[j+gap] = temp;
						}
}

struct tnode *talloc(void);
char *str_dup(char *);
/* addtree: add a node with w, at or below p */
struct tnode *addtree(struct tnode *p, char *w)
{
				int cond;
				if (p == NULL) {
								/* a new word has arrived */
								p = talloc();
								/* make a new node */
								p->word = str_dup(w);
								p->count = 1;
								p->left = p->right = NULL;
				} else if ((cond = strcmp(w, p->word)) == 0)
								p->count++;
				/* repeated word */
				else if (cond < 0)
								/* less than into left subtree */
								p->left = addtree(p->left, w);
				else
								/* greater than into right subtree */
								p->right = addtree(p->right, w);
				return p;
}



