#include "lib.h"

void removeFirst(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        input[i] = input[i+1];
    }
}

bool checkDirection(char *input)
{
    if (input[0] == 'R')
    {
        removeFirst(input);
        return true;
    }
    removeFirst(input);
    return false;
}

void changeClick(int *curClicks, char *input)
{
    int clicks = 0;
    //if dir is right
    if (checkDirection(input))
    {
        clicks = getClicks(input);
        *curClicks += clicks;
        *curClicks = (*curClicks) % MAX_DIAL;
    }
    else
    {
        clicks = getClicks(input);
        *curClicks -= clicks;
        *curClicks = (*curClicks) % MAX_DIAL;
    }
    printf("curClick: %d\n", *curClicks);
    printf("clicks: %d\n", clicks);

}

int getClicks(char *input)
{
    return atoi(input);
}




