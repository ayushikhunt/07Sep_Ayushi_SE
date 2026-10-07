#include<stdio.h>

struct Time
{
	int hours;
	int min;
};

struct MovieShow
{
	char m[20];
	int screen;
	
	struct Time time;
}movie={"Avatar",2,{3,30}};

main()
{
	printf("Movie:%s, Screen : %d , Time: %d : %d",movie.m,movie.screen,movie.time.hours,movie.time.min);	
}
