#include<stdio.h>
// row wise sum in 2d array
main()
{
	int i,j,r,c,l;
	int a[50][50];
	int sum=0 ;
	
	printf("enter array row size::\n");
	scanf("%d",&r);
	
	printf("enter array column size::\n");
	scanf("%d",&c);
	
	printf("enter array element::\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter column number for sum::\n");
	scanf("%d",&l);
	
	for(i=0;i<r;i++)
	{   
	
	   if(l==j)
	   {
	   
		for(j=0;j<c;j++)
		{
	
		sum = sum + a[j][i];

		
		}
		printf("%d ",sum);
	}
	/*	if(l==j)
	printf(" sum = %d \n",sum);*/
}
	

	
}
