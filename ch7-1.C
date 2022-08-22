/* up to n 1d array  */
#include<stdio.h>

main()
{
	int i,n;
    int a[n];
	printf("enter array size::\n");
	
	scanf("%d",&n);
     //int a[n];
	
	printf("enter array element::\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("array element are::\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	
	
}
