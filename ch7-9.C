#include<stdio.h>
//addition of given two 2d array
main()
{
	int i,j,r,c;
	int a[50][50],b[50][50],d[50][50];
	
	printf("enter  2d array row::\n");
 scanf("%d",&r);

 printf("enter 2d array cloumn::\n");
 scanf("%d",&c);

 printf("\nenter first 2d array element::\n");
 for(i=0;i<r;i++)
 {
	for(j=0;j<c;j++)
	{
		printf("a[%d][%d] :",i,j);
		scanf("%d",&a[i][j]);
	}
 }
 
  printf("\nenter second 2d array element::\n");
 for(i=0;i<r;i++)
 {
	for(j=0;j<c;j++)
	{
		printf("b[%d][%d] :",i,j);
		scanf("%d",&b[i][j]);
	}
 }
 
  printf("\nafter addition of two 2d array element::\n");
 for(i=0;i<r;i++)
 {
	for(j=0;j<c;j++)
	{
		d[i][j] = a[i][j] + b[i][j];
		printf("%d ",d[i][j]);
	}
	printf("\n");
 }
 
 
 
 
 
	
}
