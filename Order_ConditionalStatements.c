#include<stdio.h>
main()
{
	printf("What would you like to order? : \n1. Lettuce Salad\n2. Mushroom Soup\n3. Avacado Sandwich\n4. Chicken Wings\n5. Fried Rice");
	
	int choice = 0;
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("Food item = Lettuce Salad\nPrice = Rs249/- ", choice);
			break;
		case 2:
		
			printf("Food item = Mushroom Soup\nPrice = Rs299/- ");
			break;
		case 3:
			printf("Food item = Avacado Sandwich\n Price = Rs349/- ");
			break;
		case 4:
			printf("Food item = Chicken Wings\n Price = Rs 399/- ");
			break;
		case 5:
			printf("Food item = Fried Rice\n Price = Rs 449/- ");
			break;
			
		default : printf("Invalid choice");
}
}
