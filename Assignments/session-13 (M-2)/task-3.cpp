#include<stdio.h>
main()
{
	char song[3][30]={"Khat","Bairan"};
	FILE *fl;
	fl=fopen("playlist.txt","a");
	
	for(int i=0;i<2;i++)
	{
		fprintf(fl,"\n %s",song[i]);
	}
	fclose(fl);
}
