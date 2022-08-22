/* avg of array relement  */
#include<stdio.h>

main()
{
	int i,n;
    int a[50];
    int sum=0;
    float avg;
    
	printf("enter array size::\n");
	scanf("%d",&n);
    
	
	printf("enter array element::\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("array element are::\n");
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];

	}
	    avg = sum/n;
	    printf("avg of array element:: %.2f",avg);
			
	
}
