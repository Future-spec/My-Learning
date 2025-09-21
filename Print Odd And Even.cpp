#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("Enter a Number :\n");
	scanf("%d",&i);
	if(i%2==0)
	{
		printf("The Number %d is Even",i);
	}
	else
	{
		printf("The Number %d is odd",i);
	}
	printf("\n");
	getch();
	
}
