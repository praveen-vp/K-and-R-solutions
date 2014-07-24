
// Exercise 6-3. Write a cross-referencer that prints a list of all words
// in a document, and for each word, a list of the line numbers on which
// it occurs. Remove noise words like 'the','and' and so on.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "sheader.h"

#define MAXWORD 100

struct tnode *addtreex(struct tnode *,char *,int);
int getword(char *,int);
int noiseword(char *);
void treexprint(struct tnode *);

struct tnode *talloc(void);
struct linklist *lalloc(void);
void addln(struct tnode *,int);
char *str_dup(char *s);
// cross referencer 

int main()
{
		struct tnode *root;
		char word[MAXWORD];
		int linenum = 1;

		root = NULL;
		while(getword(word,MAXWORD)!= EOF){
				if( isalpha(word[0]) && noiseword(word) == -1)
						root = addtreex(root,word,linenum);
				else if(word[0] == '\n')
						linenum++;
		}
		treexprint(root);
return 0;
}

// addtreex : add a node with w, at or below p

struct tnode *addtreex(struct tnode *p,char *w,int linenum)
{
		int cond;
		if(p == NULL){
				p = talloc();
				p->word = str_dup(w);
				p->lines = lalloc();
				p->lines->lnum = linenum;
				p->lines->ptr = NULL;
				p->left = p->right = NULL;
		}
		else if((cond = strcmp(w,p->word)) == 0)
				addln(p,linenum);
		else if (cond < 0)
				p->left = addtreex(p->left,w,linenum);
		else 
				p->right = addtreex(p->right,w,linenum);
		return p;
}

// addln : add a line number to number to the linked list 

void addln(struct tnode *p,int linenum)
{
		struct linklist *temp;

		temp = p->lines;
		while ((temp->ptr!= NULL) && (temp->lnum != linenum))
				temp = temp->ptr;
		if(temp->lnum != linenum){
				temp->ptr = lalloc();
				temp->ptr->lnum = linenum;
				temp->ptr->ptr = NULL;
		}
}

// treexprint : in-order print of tree p

void treexprint (struct tnode *p)
{
		struct linklist *temp;
		if(p != NULL){
				treexprint(p->left);
				printf("%10s:",p->word);
				for(temp = p->lines;temp != NULL; temp = temp->ptr)
						printf("%4d",temp->lnum);
				printf("\n");
				treexprint(p->right);		
		}
}

// lalloc:

struct linklist *lalloc(void)
{
		return (struct linklist *)malloc(sizeof(struct linklist));
}

// noise word:

int noiseword(char *w)
{
		static char *nw[] = {
				"a",
				"an",
				"and",
				"are",
				"in",
				"is",
				"of",
				"or",
				"that",
				"the",
				"this",
				"to"
		};
		
		int cond,mid;
		int low = 0;
		int high = sizeof(nw)/sizeof(char *) - 1;

		while(low <= high){
				mid = (low + high)/2;
				if((cond = strcmp(w,nw[mid])) < 0)
						high = mid - 1;
				else if (cond > 0)
						low = mid + 1;
				else 
						return mid;
		}
		return -1;
}		
