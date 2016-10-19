#define swap(x,y) y=x^y; x=x^y; y=x^y;

void pr(char* chrString)
{
    if(strlen(chrString) == 0)
        printf("\n");
    else
        printf("%s", chrString);
    
    }
void cls(void) /* This function is used to clean your screan. For windows only */
{
    system("cls");
    }

void printAllCodes(void) /* Prints codes only*/
{
    FILE* filePointer = NULL;
    char temp = 'A';
    filePointer = fopen("Codes_QuestionMark", "r");
    if(filePointer == NULL)
    {
        printf("Error: Fail to open file\n");
        getch();
        return ;
        }
    while( (temp = fgetc(filePointer)) != EOF  &&  (temp != '>') )
    {
        printf("%c", temp);
        }
}










void fakeHacking(void)
{
    puts("*****************************\nPress | to quit\n\
    or any other key to start\n*****************************\n");
    if ( _getch() == '|') {puts("Bye!"); getch() ;return ;}
        /*show some instruction, and quit if | is entered*/ 
    FILE* filePointer = NULL;
    char buffer[5000]; /* keeping 'hack' */
    char bufferCodes[5000]; /* keeping 'codes' */
    int count = 0, i=0, j =0; // count the number of 'HACK' recorded
    filePointer = fopen("Codes_QuestionMark", "r");
    cls();
    system("color 02") ;
    if(filePointer == NULL)  /*If fake coding file not found, return to basic interface*/
    {
        printf("Your don't have the codes yet. \
        \nPlease download the code (Codes_QuestionMark) from noobProjOne\n");
        getch();
        system("cls");
        return;
        }
    char temp = 'A';
    strcpy(buffer, "");
    while( (temp = fgetc(filePointer) ) != EOF ) 
    {
        if(getch() == '|')   /* if | is entered, return, else continue to print char by char*/
        {system("color 07") ; system("cls"); return;}

        if(temp == '>')
        {
            j = count;
            count = 0;
            while((temp = fgetc(filePointer) ) != EOF )
            {
                buffer[count] = temp;
                count++;    
            }
            
            cls();  /* show HACK */
            for(i=0 ; i<count ; i++)
                printf("%c", buffer[i]);    
            system("color 47");
            Sleep(1000);
            
            
            cls(); /* show Codes*/
            system("color 02");
            printAllCodes();
            Sleep(1000);
            
            
            cls();  /* show HACK */
            system("color 47");
            for(i=0 ; i<count ; i++)
                printf("%c", buffer[i]);    
            Sleep(1000);
            
            
            cls(); /* show Codes*/
            system("color 02");
            printAllCodes();
            Sleep(1000);
            
            
            cls();  /* show HACK */
            system("color 47");
            for(i=0 ; i<count ; i++)
                printf("%c", buffer[i]);    
            Sleep(1000);
            
            
            cls();
            return ;
        }
        else
            bufferCodes[count] = temp;
        
        count++;
        printf("%c", temp);
        }
    fclose(filePointer);
    system("color 07") ;
    system("cls");
    }



