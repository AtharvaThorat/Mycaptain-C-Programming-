// C Program for calculating grades 

#include<stdio.h>
int main()
{
	float marks;
	
	
	printf("Enter marks: ");
	scanf("%f", &marks);
	
	if (marks >100)
	{
		printf("Wrong Input!");
	}
	else if(marks >=85 && marks <=100)
	{
		printf("Grade A");
	}
	
	else if (marks >=70 && marks <85)
	{
		printf("Grade B");
	}
	
	else if (marks >=55 && marks <70)
	{
		printf("Grade C");
	}
	
	else if (marks >=40 && marks <55)
	{
		printf("Grade D");
	}
	
	else
	{
		printf("Grade F");
	}
	
	
	
	return 0;
	
}
