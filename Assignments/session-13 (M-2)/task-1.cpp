#include<stdio.h>
main()
{
	char song[3][30]={"Perfect","Lover","Normal"};
	FILE *fl;
	fl=fopen("playlist.txt","w");
	
	for(int i=0;i<3;i++)
	{
		fprintf(fl,"\n %s",song[i]);
	}
	fclose(fl);
}
