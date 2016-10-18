#define swap(x,y) y=x^y; x=x^y; y=x^y;

void pr(char* chrString)
{
    if(strlen(chrString) == 0)
        printf("\n");
    else
        printf("%s", chrString);
    
    }

void fakeHacking(void)
{
    puts("*****************************\nPress | to quit\n\
    or any other key to start\n*****************************\n");
    if ( _getch() == '|') {puts("Bye!"); getch() ;return ;}
        /*show some instruction, and quit if | is entered*/ 
    FILE* filePointer = NULL;
    filePointer = fopen("Codes_QuestionMark", "r");
    if(filePointer == NULL)  /*If fake coding file not found, return to basic interface*/
    {
        printf("Your don't have the codes yet. \
        \nPlease download the code (Codes_QuestionMark) from noobProjOne\n");
        getch();
        system("cls");
        return;
        }
    char temp = 'A';
    while( (temp = fgetc(filePointer) ) != EOF ) 
    {
        if(getch() == '|')   /* if | is entered, return, else continue to print char by char*/
        { system("cls"); return;}
          
        printf("%c", temp);
        }
    fclose(filePointer);
    system("cls");
    }
    
void cls(void) /* This function is used to clean your screan. For windows only */
{
    system("cls");
    }

