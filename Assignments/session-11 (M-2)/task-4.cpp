#include<stdio.h>

void incrementFollowers(int *followers, int n)
{
    for(int i=0; i<n; i++)
    {
        *followers = *followers + 100;
        followers++;
    }
}

main()
{
    int followers[5] = {500, 800, 1000, 1200, 1500};

    incrementFollowers(followers, 5);

    for(int i=0; i<5; i++)
    {
        printf("%d\n", followers[i]);
    }
}
