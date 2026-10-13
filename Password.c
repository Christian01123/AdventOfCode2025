#include "lib.h"

int main()
{
    //initlze values
    int ans = 0;
    int curClick = 0;
    char curLine[LINE_LEN];

    //read/open input file
    FILE * inputFile = fopen("input.txt", "r");

    //simulate turning
        //loop through each line
    while (fgets(curLine, sizeof(curLine), inputFile) != NULL)
    {
        //update curClick
        puts(curLine);
        changeClick(&curClick, curLine);
        puts(curLine);



        //check num times curClick == 0, update ans if so
        if (curClick == MIN_DIAL)
        {
            ans++;
        }
        curClick = 0;
    }
    //print answer
        //function: printf
    printf("\nAnswer: %d\n\n", ans);
    //end prog
    fclose(inputFile);



    return 0;
}