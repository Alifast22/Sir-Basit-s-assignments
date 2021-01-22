
#include<stdio.h>

main()
{
	//declaring counter i,j,k and length of array
	int i,j,k,len;
	//taking input of the size of array
	printf("Enter the size of A and B : ");
	scanf("%d",&len);
	//declaring 3 arrays,sum,A and B
    int sum[len][len];
	int A[len][len],B[len][len];
//initializing all the elements of array sum to zero
for(i=0;i<len;i++)
{
	for(j=0;j<len;j++)
	{
		sum[i][j]=0;
		
	}	
}	

//accepting input in array A from user
for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("Enter a number in A : ");
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n");
//accepting input in array B from user
	for(i=0;i<len;i++)
		{
		for(j=0;j<len;j++)
		{
			
			printf("Enter a number in B : ");
			scanf("%d",&B[i][j]);
		}
		
       }
//three nested for loops have been made and according to the values of i,j and k a formula have been drived  
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
	       for(k=0;k<len;k++)	
		   {
		   	//below is the formula which calculates scalar product and store the value in an array called sum so that the values move column wise in the array called sum
		   		sum[i][j]=sum[i][j] + A[i][k]*B[k][j];
		   		
		   	
		  }	
		}
	}
	


//the vector product calculated from the forumla is printed below using a for loop	
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
	        printf("The vector product is %d\n",sum[i][j]);			
		}
	}



}


