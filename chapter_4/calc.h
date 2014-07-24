
	
	/*	macro definitions 	*/
	
	#define 	NUMBER '0'
	#define MAXOP  100		/* max size of operand or operator */
	#define NUMBER 	'0'		/* signal that a number was found */
	#define MAXVAL 100		/** maximum depth of val stack ***/
	

	/*	function definitions		*/
	void push(double f);	 /* push: push f onto value stack */
	double pop(void);
	int getop(char s[]);		 /* getop: get next character or numeric operand */
	
	int etline(char s[], int lim);
	int getch(void);		 /* get a (possibly pushed-back) character */	
	



