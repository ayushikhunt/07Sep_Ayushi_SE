#include<stdio.h>
main()
{
	int like=1200;
	int shares=100;
	int comments=55;
	
	if(like>=1000 || (comments>200 && shares>=50))
	{
		printf("Your post is Trending");
	}
}
