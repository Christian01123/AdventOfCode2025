#include "lib.h"

void removeFirst(char *input)
{
    for (int i = 0; i < strlen(input) + 1; i++)
    {
        input[i] = input[i+1];
    }
}

bool checkDirection(char *input)
{
    if (input[0] == 'R')
    {
        puts("right");
        removeFirst(input);
        return true;
    }
    puts("left");
    removeFirst(input);
    return false;
}

void changeClick(int *curClicks, char *input)
{
    int clicks;
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
}

int getClicks(char *input)
{
    return atoi(input);
}




