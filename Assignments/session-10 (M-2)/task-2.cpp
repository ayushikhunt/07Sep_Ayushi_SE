#include<stdio.h>
#include<string.h>
main()
{
	char nm1[10],nm2[10];
	
	printf("\nEnter Username: ");
	scanf("%s",&nm1);
	printf("\nEnter Username: ");
	scanf("%s",&nm2);
	
	if(strcmp(nm1,nm2)==0)
	{
		printf("Username is same...");
	}
	else
	{
		printf("Username is differnt...");
	}
	
	
}
