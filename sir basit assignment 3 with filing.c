#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int ID,issue_date,year,start_page,end_page,i,c=0;
	char title[50],journal[50],author[50];

     
	check_author( ID, title, journal, issue_date, year, start_page, end_page, author); 
	//below. the function Article_count is called which displays all the information of a article with more than 50 pages and published in year greater than 2000 
	Article_count(ID, title, journal, issue_date, year, start_page, end_page, author);
	//below,the function Journal_information is called which which displays all of the information of journal JAlg
	Journal_Information(ID, title, journal, issue_date, year, start_page, end_page, author);
	//below,the recursive function display is called which will display all the information of the stored articles
    display(ID, title, journal, issue_date, year, start_page, end_page, author,c);
			    
}


	 check_author(int ID,char title[],char journal[],int issue_date,int year,int start_page,int end_page,char author[])
	{
		int i,flag=0,z=0;
		FILE *fp;
		FILE *fptr;

		
			//comparison is done using strcmp to replace robert tarjan with robert lafore
			fp=fopen("D:\\classwork.txt","r");
			fptr=fopen("D:\\classwork2.txt","w");
			int p=0;
			i=0;
			while(p<2)
			{
	
		    fscanf(fp, "%d %[^\n] %s %d %d %d %d %[^\n]\n",&ID,title,journal,&issue_date,&year,&start_page,&end_page,author);
		
		    p++;

			if (strcmp(author,"Robert Tarjan")==0)
			{
				printf("%ld\n",ftell(fp));
				z=ftell(fp);
				strcpy(author,"Robert Lafore");
				i++;
				flag=1;

	    	}
	    
	    	
			    fprintf(fptr,"%d\n",ID);
			    fputs(title,fptr);
			    fprintf(fptr,"\n");
			    fputs(journal,fptr);
			    fprintf(fptr,"\n");
			    fprintf(fptr,"%d\n",issue_date);
			    fprintf(fptr,"%d\n",year);
			    fprintf(fptr,"%d\n",start_page);
			    fprintf(fptr,"%d\n",end_page);
			    fputs(author,fptr);
			    fprintf(fptr,"\n");	    	
	    	
	    	
	}
    fclose(fp);
	fclose(fptr);
	
	remove("D:\\classwork.txt");
	rename("D:\\classwork2.txt","D:\\classwork.txt");
	//if there is no record with author name Robert Tarjan so the statement below will run as flag will remain to its initiailzed value
		if(flag==0)
		{
			printf("Not Found any article with author name Robert Tarjan\n");
		}
printf("\n");		

	}
	
	//below,the function article_count is defined which takes an struct variable as argument and returns nothing
	void Article_count(int ID,char title[],char journal[],int issue_date,int year,int start_page,int end_page,char author[])
	{
		int i,flag=0,z=0;
		FILE *fp;
		FILE *fptr;

		
		
			fp=fopen("D:\\classwork.txt","r");
			fptr=fopen("D:\\classwork2.txt","w");
			int p=0;
			i=0;
			printf("The following articles have pages greater than 50 and year greater than 2000 : \n");
			while(p<2)
			{
		
		    fscanf(fp, "%d %[^\n] %s %d %d %d %d %[^\n]\n",&ID,title,journal,&issue_date,&year,&start_page,&end_page,author);
		
		    p++;

			if (end_page-start_page>=50 && year>2000 )
			{
			 
             
             printf("ID: %d\nTitle: %s\nJournal: %s\nIssue date : %d\nYear: %d\nStart Page: %d\nEnd page: %d\nAuthor :%s",ID, title, journal, issue_date, year, start_page, end_page, author);
             printf("\n");
	    	}
	    	
	    		    	
	}		
printf("\n");
	}
	
	
	 Journal_Information(int ID,char title[],char journal[],int issue_date,int year,int start_page,int end_page,char author[])
	{
		int i,flag=0,z=0;
		FILE *fp;
		FILE *fptr;

		

			fp=fopen("D:\\classwork.txt","r");
			fptr=fopen("D:\\classwork2.txt","w");
			int p=0;
			i=0;
			while(p<2)
			{
		
		    fscanf(fp, "%d %[^\n] %s %d %d %d %d %[^\n]\n",&ID,title,journal,&issue_date,&year,&start_page,&end_page,author);
		
		    p++;

			if (strcmp(journal,"JAlg")==0)
			{
			 printf("The following articles have journal name JAlg : \n");
             
             printf("ID: %d\nTitle: %s\nJournal: %s\nIssue date : %d\nYear: %d\nStart Page: %d\nEnd page: %d\nAuthor :%s",ID, title, journal, issue_date, year, start_page, end_page, author);
             printf("\n");
	    	}
	    		

	}
	printf("\n");	
}

display(int ID,char title[],char journal[],int issue_date,int year,int start_page,int end_page,char author[],int c)
{
	FILE *fp;
	fp=fopen("D:\\classwork.txt","r");
	if(fp==NULL)
	{
		printf("error");
	}
//	fseek(fp,0,SEEK_SET);
	
	if(c>=2)
	{
        return;
    }
    printf("Display function : \n");
    while(c<2)
    {
	
    fscanf(fp, "%d %[^\n] %s %d %d %d %d %[^\n]",&ID,title,journal,&issue_date,&year,&start_page,&end_page,author);
			
        printf("ID: %d\nTitle: %s\nJournal: %s\nIssue date : %d\nYear: %d\nStart Page: %d\nEnd page: %d\nAuthor :%s",ID, title, journal, issue_date, year, start_page, end_page, author);
        printf("\n");
        c++;

}
	 fclose(fp);
     display(ID, title, journal, issue_date, year, start_page, end_page, author,c);
}
