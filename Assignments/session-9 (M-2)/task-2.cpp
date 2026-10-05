#include<stdio.h>
main()
{
	float playlistRatings[3][5]={	{4.2, 3.8, 4.5, 4.1, 4.7},
									{3.9, 4.3, 4.0, 4.6, 4.2},
									{2.8, 3.5, 4.1, 3.7, 4.0}							
							    };
							  
	for(int i=0;i<5;i++)
	{
		printf("\nPlaylist-2 Rating of days[%d]: %.2f",i,playlistRatings[1][i]);
	}
}
