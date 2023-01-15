#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int strtSize;

    do{
        printf("Enter the Starting size: ");
        scanf("%d", &strtSize);
    }while(strtSize<9);

    // TODO: Prompt for end size
    int endSize ;

    do{
        printf("Enter the End size: ");
        scanf("%d", &endSize);
    }while(endSize<strtSize);

    // TODO: Calculate number of years until we reach threshold
    int numYears ;
    int perYear ;
    int newStrt ;

    newStrt = strtSize;
    numYears = 0;

    while(newStrt < endSize){
        perYear = (newStrt/3) - (newStrt/4);
        newStrt = newStrt + perYear;
        numYears = numYears + 1;
    }

    // TODO: Print number of years
    printf("Years: %d", numYears);
}
