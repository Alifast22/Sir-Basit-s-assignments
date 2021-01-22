#include <stdio.h>

main()
{
	//declaring and initializing variables below
	int i,k,j=0,num,a,z;
	//accepting a positive integer as input from user
	printf("Enter a positive integer : ");
	scanf("%d",&num);
	//a command which will direct user to give positive inputs only
	if(num<=0)
	{
		printf("Enter a postive integer please");
	}
    //for loop used to control number of rows of the pattern which has to be printed
    for(i=0;i<num;i++)
    {
    //for loop used to control the number of - being printed in a row
	for(z=0;z<i;z++)
			{
				printf("_");
			}

			    	
         //for loop used to control the number of * being printed in a row
    	for(j=0;j<num-i;j++)
    	{
    		printf("*");
    		
		}
		printf("\n");
			

	}

    

}



