#include<stdio.h>
main()
{
	int i,j,r,c,k,sum;
	int a[100][100];
	
	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &r, &c);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(i = 0; i < r; i++)
  	{
   		for(j = 0; j < c; j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
  	
  	
 	for(i = 0; i < r; i++)
  	{
   		for(j = 0; j < c; j++)
    	{
      		printf("%d ", a[i][j]);
    	}
    	printf("\n");
  	}
  	printf("which row = \n");
  	scanf("%d",&k);
  	
  	for(i=0;i<r;i++)
  	{
  		sum=0;
  		for(j=0;j<c;j++)
  		{
  			sum = sum + a[i][j];
		  }
		  if(k==i)
		  {
		  
  		printf("sum of row = %d",sum); 	  
	} }
	 
}
