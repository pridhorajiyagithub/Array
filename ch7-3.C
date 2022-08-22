/* merge two array  */
#include<stdio.h>

main()
{
	int i,k,n1,n2;
    int a1[50],a2[50],a3[100];
    
	printf("enter first array size::\n");
	scanf("%d",&n1);
	
	printf("enter first array element::\n");
	for(i=0;i<n1;i++)
	{
		printf("a1[%d] : ",i);
		scanf("%d",&a1[i]);
		a3[i]=a1[i];
	}
	
	k=i;
	printf("\nenter second array size::\n");
	scanf("%d",&n2);
	
	printf("\nenter second array element::\n");
	for(i=0;i<n2;i++)
	{
		printf("a2[%d] : ",i);
		scanf("%d",&a2[i]);
		a3[k]=a2[i];
		k++;
			}
	
	printf("\n new array after merging are::\n");
	for(i=0;i<k;i++)
	{
		
		printf("a[%d] = %d\n",i,a3[i]);
		//sum = sum + a[i];
	}
	  //  printf("avg of array element:: %d",avg);
				
	
}
