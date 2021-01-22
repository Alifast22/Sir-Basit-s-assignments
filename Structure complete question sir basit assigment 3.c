#include<stdio.h>
#include<string.h>

//struct of article is declared
struct article 
{
	int ID;
	char title[50];
	char journal[50];
	int issue;
	int year;
	int spage;
	int epage;
	char author[50];
};


int main()
{
	//an array art is declared as an struct array
	struct article art[4];	
	int i=0;
	
	//All the information of the journal 1 is initialized here which is stored in the 0th position of a structure array
	art[0].ID=1;
	strcpy(art[0].title,"Cuckoo Hashing");
	strcpy(art[0].journal,"JAlg");
	art[0].issue=51;
	art[0].year=2004;
	art[0].spage=121;
	art[0].epage=133;
	strcpy(art[0].author,"Robert Tarjan");

	//All the information of the journal 2 is initialized here which is stored in the 1th position of a structure array
	art[1].ID=2;
	strcpy(art[1].title,"Deterministic Dictionaries");
	strcpy(art[1].journal,"JAlg");
	art[1].issue=40;
	art[1].year=2002;
	art[1].spage=80;
	art[1].epage=95;
	strcpy(art[1].author,"Robert Lafore");

	//All the information of the journal 3 is initialized here which is stored in the 2nd position of a structure array	
	art[2].ID=3;
	strcpy(art[2].title,"Royal Dictionaries");
	strcpy(art[2].journal,"JPef");
	art[2].issue=45;
	art[2].year=1999;
	art[2].spage=60;
	art[2].epage=120;
	strcpy(art[2].author,"Robert Luther");
	
	//All the information of the journal 4 is initialized here which is stored in the 3th position of a structure array	
	art[3].ID=4;
	strcpy(art[3].title,"Bloody Streets");
	strcpy(art[3].journal,"JCef");
	art[3].issue=55;
	art[3].year=2003;
	art[3].spage=90;
	art[3].epage=150;
	strcpy(art[3].author,"John Thomsom");
	
	//below, the function check_author is called which replace Robert Tarjan authors with Robert Lafore
	check_author(art);
	//below. the function Article_count is called which displays all the information of a article with more than 50 pages and published in year greater than 2000 
	Article_count(art);
	//below,the function Journal_information is called which which displays all of the information of journal JAlg
	Journal_Information(art);
	//below,the recursive function display is called which will display all the information of the stored articles
	display(art,i);
	
}
//below function check_author is defined which takes an struct variable as argument and returns nothing
	void check_author(struct article art[])
	{
		int i,flag=0;
		for(i=0;i<4;i++)
		{
			//comparison is done using strcmp to replace robert tarjan with robert lafore
			if (strcmp(art[i].author,"Robert Tarjan")==0)
			{
				//replacing of robert tarjan with robert lafore is done here
				printf("Author of ID %d was %s\n",art[i].ID,art[i].author);
				strcpy(art[i].author,"Robert Lafore");
				printf("Author of ID %d is now %s\n",art[i].ID,art[i].author);
				printf("\n");
				flag+=1;

			}
			
		}
		//if there is no record with author name Robert Tarjan so the statement below will run as flag will remain to its initiailzed value
		if(flag==0)
		{
			printf("Not Found any article with author name Robert Tarjan\n");
		}
	}
	//below,the function article_count is defined which takes an struct variable as argument and returns nothing
	void Article_count(struct article art[])
	{
		int i;
		for(i=0;i<4;i++)
		{
			//here it is compared that the pages in article must be greater than 50 and year in which article was published must be greater than 2000
			if(art[i].epage-art[i].spage>=50 && art[i].year>2000)
			{
				//printing of all the information is done below
				    printf("ID is :%d\n",art[i].ID);
					printf("Title is :%s\n",art[i].title);
					printf("Journal is :%s\n",art[i].journal);
					printf("issue is :%d\n",art[i].issue);
					printf("year is :%d\n",art[i].year);
					printf("Start page is :%d\n",art[i].spage);
					printf("End page is :%d\n",art[i].epage);
					printf("Author is :%s\n",art[i].author);
					printf("\n");				
			}

		}
	}

//below,the function Journal_information is defined which takes an struct variable as argument and returns nothing
	void Journal_Information(struct article art[])
	{
		int i;
		for(i=0;i<4;i++)
		{
			//below statment will compare and print all the information of any article with journel name JAlg
			if (strcmp(art[i].journal,"JAlg")==0)
			{
			    printf("ID is :%d\n",art[i].ID);
				printf("Title is :%s\n",art[i].title);
				printf("Journal is :%s\n",art[i].journal);
				printf("issue is :%d\n",art[i].issue);
				printf("year is :%d\n",art[i].year);
				printf("Start page is :%d\n",art[i].spage);
				printf("End page is :%d\n",art[i].epage);
				printf("Author is :%s\n",art[i].author);
				
				printf("\n");

			}
		}
	}
//below,the recursive function Display is defined which takes an struct variable as argument and returns nothing	
	void display(struct article art[],int i)
	{
		
		//below, the base condition is set to i=4 i.e the total size of structure array
		if(i==4)
		{
			return;
			
		}
		//printing of all the information is done below
	    printf("ID is :%d\n",art[i].ID);
		printf("Title is :%s\n",art[i].title);
		printf("Journal is :%s\n",art[i].journal);
		printf("issue is :%d\n",art[i].issue);
		printf("year is :%d\n",art[i].year);
		printf("Start page is :%d\n",art[i].spage);
		printf("End page is :%d\n",art[i].epage);
		printf("Author is :%s\n",art[i].author);
		printf("\n");
		
		//value of counter is incremented
		i++;
		//function is called again to make it recursive
		display(art,i);		
	}
	
	

