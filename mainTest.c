#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include "Head_One.h"  /*Including fakeHacking & cls*/
#include "showingOff.h" /*Including ListInstructions & showMyDNA & giveMeColour*/
#include "basicInterface.h" /*The Basic Interface to call almost every function*/

void ListInstructions(void);

int main(void)
{
    char temp[10];
    printf("Enter h for help manual, or anything else to enter CLI:  ");
    fgets(temp, 9, stdin);
    if( strcmp(temp, "h\n")== 0)
    {
        cls();
        ListInstructions();
        }
    /* Enter the main program*/
    basicInterface();
    
    printf("Logging off");  /* Fake logging off*/
    Sleep(370);pr(".");    Sleep(370); pr(".");    Sleep(370); pr(".");     Sleep(370); pr(".");

}



