#include<stdio.h>
struct complex{
	int r,i;	
};

struct complex add(struct complex,struct complex);
struct complex sub(struct complex,struct complex);
struct complex mul(struct complex,struct complex);
struct complex getComplex();

void main(){
	int opt;
	struct complex c1,c2,res;
	c1 = getComplex();
	c2 = getComplex();	
	do{		
		printf("\n\n\n1) Add\t\t2) Subtract\n3) Multiply\t4) Change Nos.\n5) Exit");
		printf("\nEnter your Choice: ");
		scanf("%d",&opt);
		switch(opt){
			case 1: 
				res = add(c1,c2);
				printf("\n\nSum of the Given Complex Number: (%d%s%di)",res.r,res.i<0?" \b":"+",res.i);
				break;
				
			case 2: 
				res = sub(c1,c2);
				printf("\n\nDifference of the Given Complex Number: (%d%s%di)\n\n",res.r,res.i<0?" \b":"+",res.i);
				break;
			case 3: 
				res = mul(c1,c2);
				printf("\n\nProduct of the Given Complex Number: (%d%s%di)\n\n",res.r,res.i<0?" \b":"+",res.i);
				break;
			case 4:
				c1 = getComplex();
				c2 = getComplex();
				break;
			case 5: 
				break;
			default: printf("Kindly Enter Options 1-4.\n\n");
		}
	}while(opt!=5);		
}

struct complex add(struct complex cf1, struct complex cf2){
	struct complex sum;
	sum.r = cf1.r + cf2.r;
	sum.i = cf1.i + cf2.i;
	return(sum);
}
struct complex getComplex(){
	struct complex cmp;
	printf("Enter Real Part: ");
	scanf("%d",&cmp.r);
	printf("Enter Imaginary Part: ");
	scanf("%d",&cmp.i);
	return(cmp);
}
struct complex sub(struct complex cf1,struct complex cf2){
	struct complex diff;
	diff.r = cf1.r - cf2.r;
	diff.i = cf1.i - cf2.i;
	return(diff);
}

struct complex mul(struct complex cf1,struct complex cf2){
	struct complex prod;
	prod.i = cf1.i*cf2.r + cf2.i*cf1.r;
	prod.r = -cf1.i*cf2.i + cf1.r*cf2.r;
	
	return(prod);
}
