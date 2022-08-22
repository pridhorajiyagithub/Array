#include<stdio.h>
// find sum of  daigonal element
main()
{
	int i,j,sum=0,n;
	int a[100][100];
	printf("here row and column are same.\n");
	printf("enter array n::\n");
	scanf("%d",&n);
	
	
/*	printf("enter array c::\n");
	scanf("%d",&c);*/
	
	printf("first enter array element:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   scanf("%d",&a[i][j]);	
		}
	}
	
	printf("sum of daigona element are::");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		
		}
	}
	
		printf(" %d",sum);
}
