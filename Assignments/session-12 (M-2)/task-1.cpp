#include<stdio.h>

struct Playlist
{
	char title[50],nm[20];
	int time;
}play;

main()
{
	printf("Enter Song titel:");
	scanf("%s",&play.title);
	printf("Enter song artist name:");
	scanf("%s",&play.nm);
	printf("Enter Duration of Song:");
	scanf("%d",&play.time);
	
	printf("\nYour Song Title is %s , Artist name is %s , and Time duration is %d",play.title,play.nm,play.time);
}
