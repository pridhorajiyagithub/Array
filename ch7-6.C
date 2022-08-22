/* print two 2d array*/
#include<stdio.h>


main()
{
 int r,c,i,j;
 int a[50][50],b[50][50];
 

 printf("enter  2d array row::\n");
 scanf("%d",&r);

 printf("enter 2d array cloumn::\n");
 scanf("%d",&c);

 printf("enter 2d array element::\n");
 for(i=0;i<r;i++)
 {
	for(j=0;j<c;j++)
	{
		printf("a[%d][%d] :",i,j);
		scanf("%d",&a[i][j]);
	}
 }
 

 printf("print 2d array element::\n");
 for(i=0;i<r;i++)
 {
	for(j=0;j<c;j++)
	{
		
        printf("%d ",a[i][j]);
	}
	printf("\n");
 }



}
