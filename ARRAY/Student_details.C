#include<stdio.h>
#include<string.h>
int roll;
void Kaksha1()
{
	
	printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =98;
			result.math =34;
			result.physics =65;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Gourav kumar");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =69;
			second.english =99;
			second.math =89;
			second.physics =98;
			second.chemistry =99;
			second.total;
			
			strcpy(second.name[0],"Rohan singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Sohan kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Soham kumar");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}
	
}
// class one is above 
    
 void Kaksha2()
    {
    	 
    	
    printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =98;
			result.math =89;
			result.physics =78;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Maan kumar");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =69;
			second.english =99;
			second.math =89;
			second.physics =98;
			second.chemistry =99;
			second.total;
			
			strcpy(second.name[0],"Rohan singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Kajal kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Payal kumar");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}
 	
    }
void Kaksha3()
    {
	     
		
	printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =56;
			result.math =45;
			result.physics =78;
			result.chemistry =50;
			result.total;
			
			
			strcpy(result.name[0],"Anjily Rani");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =69;
			second.english =99;
			second.math =89;
			second.physics =98;
			second.chemistry =99;
			second.total;
			
			strcpy(second.name[0],"Sakshi singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Sohan Pall");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Sohan Singh");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			fourth.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}	 
    }
void Kaksha4()
    {
 	     
 	    
 	printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =98;
			result.math =89;
			result.physics =78;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Gourav Thakur");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =69;
			second.english =99;
			second.math =89;
			second.physics =98;
			second.chemistry =99;
			second.total;
			
			strcpy(second.name[0],"Rohan sharma\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Sohan kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Ayush kumar");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}
    }
void Kaksha5()
    {
	    	
		
	printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =98;
			result.math =89;
			result.physics =78;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Ajay kumar");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =45;
			second.english =44;
			second.math =34;
			second.physics =98;
			second.chemistry =59;
			second.total;
			
			strcpy(second.name[0],"ajay singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Ardeep kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Pankaj Singh");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	} 	
    }
void Kaksha6()
    {
     
    	
    printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =98;
			result.math =89;
			result.physics =78;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Gourav kumar");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =54;
			second.english =43;
			second.math =89;
			second.physics =54;
			second.chemistry =34;
			second.total;
			
			strcpy(second.name[0],"Rohan singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Sohan kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Sohan kumar");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}
    }

void Kaksha7()
    {
 	     
 	    
 	printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =98;
			result.math =89;
			result.physics =78;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Gourav kumar");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =69;
			second.english =99;
			second.math =89;
			second.physics =98;
			second.chemistry =99;
			second.total;
			
			strcpy(second.name[0],"Rohan singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Sohan kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Sohan kumar");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}
    }
void Kaksha8()
    {
 	     	
 	printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =98;
			result.math =89;
			result.physics =78;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Gourav kumar");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =69;
			second.english =73;
			second.math =56;
			second.physics =54;
			second.chemistry =99;
			second.total;
			
			strcpy(second.name[0],"Rohan singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =2;
			third.math =82;
			third.physics =72;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Sohan kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =64;
			fourth.english =98;
			fourth.math =26;
			fourth.physics =38;
			fourth.chemistry =33;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Sohan kumar");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}
    }
 void Kaksha9()
    {
     
		
	printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =54;
			result.math =45;
			result.physics =78;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Gourav kumar");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =69;
			second.english =99;
			second.math =89;
			second.physics =98;
			second.chemistry =99;
			second.total;
			
			strcpy(second.name[0],"Rohan singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Sohan kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Sohan kumar");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}	 	
    }
 void Kaksha10()
    {
 	    
		 
	printf("Enter your roll \n");
	
	printf(" ");
	scanf("%d",&roll);
	switch(roll)
	{
		case 1:
			struct marks{
				char name[1][15];
				int hindi;
				int english;
				int math;
				int physics;
				int chemistry;
				int total;
			}; 
			
			struct marks result;
			
			result.hindi =67;
			result.english =98;
			result.math =89;
			result.physics =78;
			result.chemistry =78;
			result.total;
			
			
			strcpy(result.name[0],"Gourav kumar");
			printf("%s\n", result.name[0]);
			printf("Roll number %d\n",roll);
			
			printf("Hindi =%d\n",result.hindi);
			printf("English =%d\n",result.english);
			printf("Math =%d\n",result.math);
			printf("Physics =%d\n",result.physics);
			printf("Chemistry =%d\n",result.chemistry);
			
			result.total =result.english + result.hindi + result.math + result.physics + result.chemistry;
			
			printf("Total marks is %d\n",result.total);
			break ;
			(result.total>=300)? printf("First division\n"):printf("Second division\n");
			
		case 2:
			struct marks second; // second roll number
			second.hindi =69;
			second.english =99;
			second.math =89;
			second.physics =98;
			second.chemistry =99;
			second.total;
			
			strcpy(second.name[0],"Rohan singh\n");
			printf("%s\n",second.name[0]);
			
			printf("Hindi =%d\n",second.hindi);
			printf("English =%d\n",second.english);
			printf("Math =%d\n",second.math);
			printf("Physics =%d\n",second.physics);
			printf("chemistry =%d\n",second.chemistry);
			
				second.total =second.english + second.hindi + second.math + second.physics + second.chemistry;
			
			printf("Total marks is  =%d\n", second.total);
			(second.total>=300)? printf("First division\n"):printf("Second division\n");
			break ;
			
		case 3:
			struct marks third; // third roll number
			third.hindi =67;
			third.english =98;
			third.math =89;
			third.physics =78;
			third.chemistry =78;
			third.total;
			
			
			strcpy(third.name[0],"Sohan kumar");
			printf("%s\n", third.name[0]);
			
			printf("Hindi =%d\n",third.hindi);
			printf("English =%d\n",third.english);
			printf("Math =%d\n",third.math);
			printf("Physics =%d\n",third.physics);
			printf("Chemistry =%d\n",third.chemistry);
			
			third.total =third.english + third.hindi + third.math + third.physics + third.chemistry;
			
			printf("Total marks is %d\n",third.total);
			
			(third.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
			
			case 4:
			struct marks fourth;  
			fourth.hindi =67;
			fourth.english =98;
			fourth.math =89;
			fourth.physics =78;
			fourth.chemistry =78;
			fourth.total;
			
			
			strcpy(fourth.name[0],"Sohan kumar");//fourth
			printf("%s\n", fourth.name[0]);
			
			printf("Hindi =%d\n",fourth.hindi);
			printf("English =%d\n",fourth.english);
			printf("Math =%d\n",fourth.math);
			printf("Physics =%d\n",fourth.physics);
			printf("Chemistry =%d\n",fourth.chemistry);
			
			third.total =fourth.english + fourth.hindi +fourth.math +fourth.physics +fourth.chemistry;
			
			printf("Total marks is %d\n",fourth.total);
			
			(fourth.total>=300)? printf("First division\n"):printf("Second division\n");
			
			break ;
					
	}	
    }

//Class is above
int main()
{	int enter;
	printf("Check student details\n Enter class name\n");
	scanf("%d",&enter);
	switch(enter)
	{
		case 1:Kaksha1();
		break;
		case 2:Kaksha2();
		break;
		case 3:Kaksha3();
		break;
		case 4:Kaksha4();
		break;
		case 5:Kaksha5();
		break;
		case 6:Kaksha6();
		break;
		case 7:Kaksha7();
		break;
		case 8:Kaksha8();
		break;
		case 9:Kaksha9();
		break;
		case 10:Kaksha10();
		break;
	}
	
	
}
 
	 
