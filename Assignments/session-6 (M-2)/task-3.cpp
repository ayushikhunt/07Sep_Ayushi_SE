#include<stdio.h>
#include<stdlib.h>

main()
{
    int song, guess;

    song = rand() % 3 + 1;

    printf("Guess the Song Game\n");
    printf("-------------------\n");

    printf("\n1. Perfect");
    printf("\n2. Believer");
    printf("\n3. Shape of You");

    do
    {
        printf("\n\nEnter your guess: ");
        scanf("%d",&guess);

        if(guess == song)
        {
            printf("Correct! You guessed the song.");
        }
        else
        {
            printf("Wrong! Try again.");
        }

    }while(guess != song);
}
