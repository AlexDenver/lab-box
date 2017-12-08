#include<stdio.h>
#include<string.h>
#include<time.h>
main(){

	int i,j,k,len,m,n,count=1,o,q,a,len1;
	long int time1;
	char str[20]="Dilip",stro[30];
	char ch,chm;
	clock_t start, end;
	len=strlen(str);
	stro[0]='\0';
	//for (i = 0; i < len; i++)
	{
		ch=str[len-1];
		str[len-1]='\0';
		len--;
		j=-1;
		while(j++<10){
			for (i = 0; i < 137374180; ++i){}
			system("tput clear");
			printf("%s\n",str);
			k=0;
			m=0;
			while(m++<count){
				printf("\n");
			}
			count++;
			while(str[k] !='\0'){
				printf(" ");
				k++;
			}
			printf(" ");
			
			printf("%c\n",ch);
			



//			o=0;
//			while(o<10){
//				printf("\n");
//				o++;
//			}
//			q=0;
//			while(str[q]!='\0')
//			{
//				printf(" ");
//				q++;
//			}

			printf("%s", stro);
		}
		len1=strlen(stro);
		a=0;
//		if()
		while(len1>=0){
			stro[len1]=stro[len1-1];
			len1--;
		}
		stro[0]=ch;




	}
}
