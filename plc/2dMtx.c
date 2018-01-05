#include<stdio.h>
main()
{
	int x[10][10],i,j;
	int ;
	for(i=0;i<2;i++){
		for (j = 0; j < 2; j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	x1=x;
	for(i=0;i<2;i++){
		for (j = 0; j < 2; j++){
			printf("%d\t", *(*(x1+i)+j) );
		}
		printf("\n");
	}
}
