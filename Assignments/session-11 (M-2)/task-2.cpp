#include<stdio.h>

void swapPlaylistCounts(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

main()
{
    int playlist1 = 20;
    int playlist2 = 35;

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("Playlist 1 Songs = %d", playlist1);
    printf("\nPlaylist 2 Songs = %d", playlist2);
}
