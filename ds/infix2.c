#include<stdio.h>
#include <ctype.h>
int precedence(char elem){                 
    switch(elem)
    {
    case '#': return 0;
    case '(': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    }
}
void main(){
	char infix[25],postfix[25],tmpTk,tk,operStack[15],elem,ch;
	int i,k,op,tmp;
	i=k=0;
	op=-1;
	printf("Enter a Infix Expression:\n");
	scanf("%s",infix);
	
    
	while((tk=infix[i++])!='\0'){
		// printf("TK:%c\n",tk);
		if(tk=='('){
			operStack[++op]=tk;
		}if(isalnum(tk)){
			postfix[k++]=tk;			
		}else if(tk==')'){
			tmp=op;
			while(tmpTk=operStack[tmp++]!='('){
				printf("%c:%d\n", tmpTk, tmp);
				postfix[k++]=tmpTk;
			}
			if(tmp==-1)
				printf("Invalid Infix Exp\n");
			else
				op=tmp;
		}else{
			while(precedence(operStack[op]) >= precedence(tk)){
				postfix[k++]=operStack[op--];
			}
			operStack[++op]=tk;
		}
	}
	while( op != -1)     {		
        postfix[k++]=operStack[op--];
        printf("\n%c\t:",postfix[k-1]);
	}
	printf("\nPostfix Expression: %s\n",postfix);
}