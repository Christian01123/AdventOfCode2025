#ifndef LIB_H
#define LIB_H

//headers
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//macros
#define MAX_DIAL 99
#define MIN_DIAL 0
#define LINE_LEN 10

//funcs
/*
*   input should be one string to read L or R,
*   output is true if Right, false if Left
*   Removes first value of string, i.e. R34 -> 34
*/
bool checkDirection(char *input);

/*
*   takes in clicks to rotate curClicks by
*   call check dir if to add or sub clicks
*   output nothing
*   change value of curClicks using pointer
*/
void changeClick(int *curClick, char *input);

/*  
*   assume input only has nums
*   takes in pointer to string of ints, convert into ints
*   returns String as int
*/
int getClicks(char *input);

/*
*   takes in pointer to arr of chars and remove first value
*   update new string in place and return nothing
*/
void removeFirst(char *input);

#endif