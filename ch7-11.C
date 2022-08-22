#include<stdio.h>
//print all inner element in 2d array 5*5
main()
{
	int i,j;
	int a[5][5] = { {1,2,3,4,5},
	                {6,7,8,9,10},
	                {11,12,13,14,15},
	                {16,17,18,19,20},
	                {21,22,23,24,25}
	     	
	              };
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf("    ");
			}
			else
			{
				printf("%3d ",a[i][j]);
			}
		}
		printf("\n");
	}
	
	
}
