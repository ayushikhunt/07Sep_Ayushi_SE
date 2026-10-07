#include<stdio.h>
#include<string.h>

main()
{
	FILE *fl;
	char str[100];

	fl=fopen("playlist.txt","r");

	while(fgets(str,100,fl)!=NULL)
	{
		if(strstr(str,"Love")!=NULL || strstr(str,"love")!=NULL)
		{
			printf("%s",str);
		}
	}

	fclose(fl);
}
