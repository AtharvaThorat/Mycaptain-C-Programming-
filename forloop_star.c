#include<stdio.h>
main()
{
	int i=0;
	int j=0;
	for(i=1;i<=6;i=i+1)
	{
		for(j=1;j<=i;j++)
		{
			printf("01\t");
		}
		printf("\n");
	}
}
