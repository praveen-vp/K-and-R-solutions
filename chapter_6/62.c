
// Exercise 6-2. Write a program that reads a C program and prints in 
// alphabetical order each group of variable names that are identical
// in the first 6 characters, but different somewhere thereafter.
// Don't count words within strings and comments. Make 6 a parameter 
// that can be set from the command line.
/*********************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct tnode {				
	char *word;
	int match;
	struct tnode *left;
	struct tnode *right;
};

#define MAXWORD 100
#define YES 1
#define NO 	0
					
struct tnode *addtreex(struct tnode *,char *,int,int *);
void treexprint(struct tnode *);
int getword(char *,int);
struct tnode *talloc(void);
int compare(char *,struct tnode *,int,int *);
char * str_dup(char *);


main(int argc,char *argv[])
{
		struct tnode *root;
		char word[MAXWORD];
		int found = NO;
		int num;

		num = (--argc &&(*++argv)[0] == '-')?atoi(argv[0]+1):6;

		root = NULL;
		while (getword(word,MAXWORD)!= EOF){
				if(isalpha(word[0]) && strlen(word) >= num)
						root = addtreex(root,word,num,&found);
				found = 0;
		}

		treexprint(root);
}

// addtreex : add a node with w,at or below p

struct tnode *addtreex(struct tnode *p,char *w,int num,int *found)
{
		int cond;
		if(p == NULL){
				p = talloc();
				p->word = str_dup(w);
				p->match = *found;
				p->left = p->right = NULL;
		}
		else if((cond = compare(w,p,num,found)) < 0)
				p->left = addtreex(p->left,w,num,found);
		else if(cond > 0)
				p->right = addtreex(p->right,w,num,found);
		return p;
}

// compare : compare words and update p->match

int compare(char *s,struct tnode *p,int num,int *found)
{		
		int i;
		char *t = p->word;

		for(i = 0;*s == *t; i++,s++,t++)
				if(*s == '\0')
						return 0;
		if(i >= num){
				*found = YES;
				p->match = YES;
		}
		return *s - *t;
}

// treexprint : in-order print of tree p if p->match == YES

void treexprint(struct tnode *p)
{
		if(p != NULL){
				treexprint(p->left);
				if(p->match)
						printf("%s\n",p->word);
				treexprint(p->right);
		}
}




