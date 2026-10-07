#include<stdio.h>
main()
{
	FILE *fl;

	char str[100];
	fl=fopen("playlist.txt","r");
	
	while(fscanf(fl,"%s",&str)!=EOF)
	{
		printf("%s\n",str);
	}
}
