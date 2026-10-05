#include<stdio.h>

void FByValue(int follow)
{
    follow = follow + 1000;
    printf("\nFollowers in Value: %d", follow);
}

void FByReference(int *follow)
{
    *follow = *follow + 1000;
    printf("\nFollowers in Reference: %d", *follow);
}

main()
{
    int follow = 5000;
    FByValue(follow);
    printf("\nOriginal Followers: %d", follow);
    FByReference(&follow);
    printf("\nOriginal Followers: %d", follow);
}
