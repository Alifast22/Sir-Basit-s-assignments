#include <stdio.h>

main()
{
	//declare and initializing variables
	int i,num[9],sume=0,sumo=0;
	//for loop to enter the 9 numbers
	for(i=0;i<9;i++)
	{
	
	printf("Enter a number : ");
	scanf("%d",&num[i]);
	//checking whether the element even
	if(num[i] % 2==0)
	{
		sume=sume+num[i];
      		
	 
	}
	//checking whether the element even
 
	else if(num[i]%2==1)
	{
		sumo=sumo+num[i];	   
	}

    }
   //printing out the sum of odd and even number
    printf("The sum of all even elements is : %d\n",sume);
    printf("The sum of all odd elements is : %d\n",sumo);
   //printing out the larger sum from odd end even sum  
	if (sume>sumo)
	{
		printf("The larger sum is %d",sume);
	}
	else
	{
		printf("The larger sum is %d",sumo);
	}
	
}

    

