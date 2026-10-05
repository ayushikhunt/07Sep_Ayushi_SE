#include<stdio.h>

main()
{
    int likes = 100;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Likes = %d", likes);
    printf("\nAddress = %d", ptrLikes);
}
