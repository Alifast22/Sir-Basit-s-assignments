#include <stdio.h>
int main()
{
	//variables are declared and initialized
	
	int i,j,lar=0,count=0,var,row=0;
	//array of num and total are delcared and initialize.Num will be used to take input from user while total will be used to store the counting of consecutive 1 while the program is running so that count of every row can be stored separately
	int num[6][6],total[6];

//for loop is used to take input of numbers from the user	
for(i=0;i<6;i++)
{
	for(j=0;j<6;j++)
	{
		printf("Enter number of 1 and zero for row %d : ",i+1);
		scanf("%d",&num[i][j]);
	}
	printf("\n");
}	


//for loop is used to count the consecutive 1 in a row	
	for(i=0;i<6;i++)
	{
		for(j=0;j<5;j++)
		{
			if(num[i][j]==1 && num[i][j+1]==1)
			{
				//counting of consecutive 1 is done below using a variable of count
				count=count+1;
				//coundition is used to store the highest count only within a row in a variable called lar
				if(count>lar)
				{
					lar=count;
				}
			}
			// the else if condition with be reached only when 1 is not present within the row.Thus as soon as a value other than 1 is entered the else if condition will discard the value of count so that a new counting could be started
			else if(num[i][j]!=1 || num[i][j+1]!=1)
			{
				count=0;

			}
		}
		//value of the highest count wihin the row with be stored in an array
		total[i]=lar;
		//value of both count and lar is set to zero again at the end of the row so that  the counting and highest count is different from the previous row
		lar=0;
		count=0;
		
	}
	//sorting is within the elements of total is done below so that the postion of the maximum element from total could be taken by keeping i constant using break so that a single value of i could be compared with all values of element

	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(total[i]<total[j])
			{
				var=total[i];
				total[i]=total[j];
				total[j]=var;
				row=j;
			
			
				
				
			}
		
		}
		break;
	}
	//row number is printed after taking the highest element from sorting
		printf("Row Number is : %d",row+1);
}

