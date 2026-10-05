#include<stdio.h>

void getUserInitials()
{
	char name[]={"Virat Kohli"};
	printf("Initials=%c%c",name[0],name[6]);
}

main()
{
	getUserInitials();
}
