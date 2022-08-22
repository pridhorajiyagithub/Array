/*avg of 2d array*/
#include<stdio.h>


main()
{
 int r,c,i,j,sum=0,avg;
 int a[50][50];
 

 printf("enter row size::\n");
 scanf("%d",&r);

 printf("enter column size::\n");
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
	   sum = sum + a[i][j];

	}
	printf("\n");
 }
 printf("sum of all array element = %d\n\n",sum);
 avg = sum/(r*c);
 printf("avg of array element = %d ",avg);


}
