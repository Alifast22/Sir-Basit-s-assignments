# include<stdio.h>
void main()
{
	//variables are declared here
	int i,j,k,size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	//array num in which numbers will be entered is declared here
	int num[size];
	//for loop is used to enter the size of the array
	for (i=0;i<size;i++)
	{
		printf("Enter the %d number : ",i+1);
		scanf("%d|",&num[i]);
	}

   //for loop is used to replace the duplicate with a zero
   for(i=0;i<size;i++)
    {
       for(j=i+1;j<size;j++)
       {
           if(num[i]==num[j])
           {
               num[j]=0;
           }
       }
    }
    //for loop is used so that any number which is equal to zero can be replaced the number next to it
   for(i=0;i<size;i++)
   {
            for(j=0;j<(size-1);j++)
        {
        	//here the number that is zero is caught using condition
            if(num[j]==0)
                {
                //here the number is replaced by the next number in array	
                num[j]=num[j+1];
                num[j+1]=0;
                }

        }
   }  
     

    //the form with no duplicates is printed
    for(i=0;i<size;i++)
    {
        printf("%d\n",num[i]);
    }

}

