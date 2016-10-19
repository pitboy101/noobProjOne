
void showMyDNA(void)
{

    printf("*****************************\nInstruction: press q to quit\
     \nor any other key to start\n*****************************\n");
    if ( _getch() == 'q') {puts("Bye!"); getch(); system("cls");return ;}
    else cls();
    int line_A[] = {1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1}; /*19*/
    int line_B[] = {9,8,7,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8,9}; /*19*/
    char DNA[] = "                                          ";
    char key = 'A';
    int count = 0, countTemp = 0;
    int flag = 0;
    int tempA=0, tempB = 0, OperA=0, OperB=0;
    while(1) 
    {

        if (_kbhit())
        {
            key =_getch();
            if (key == 'q')
            { system("cls"); return;}
        }
        for(count = 0 ;count<19 ; count++)
        {
            OperA = tempA = line_A[count] + 10;
            OperB = tempB = line_B[count] + 10;
            DNA[ tempA ] = '0';
            DNA[ tempB ] = '0';
            
            /*add the lines in between*/
            countTemp = 0;
            if(OperA < OperB)
            {
              OperA = OperA^OperB; OperB = OperA^OperB ; OperA = OperA^OperB;
            }
            for(countTemp= OperB+1 ; countTemp<OperA ; countTemp++)
            {
               DNA[countTemp] = '_';
            }
       
            printf("%s\n", DNA);
            countTemp = 0;
            for(countTemp= OperB ; countTemp<OperA ; countTemp++)
            {
               DNA[countTemp] = ' ';
            }
            Sleep(32);
            DNA[ tempA ] = ' ';
            DNA[ tempB ] = ' ';
        }

    }
    
    cls();
    
}



void giveMeColour(void)
{
    printf("*****************************\nInstruction: press q to quit\
     \nor any other key to start\n*****************************\n");
    if ( _getch() == 'q') {puts("Bye!"); getch(); system("cls");return ;}
    else cls();
    char temp = 'A';
    int count = 0;
    char buffer[10];
    while(1)
    {
        if (getch() == 'q')
        {  system("color 07") ;cls(); return ;}
        strcpy(buffer, " ");
        sprintf(buffer, "color %d3", count, count);
        system(buffer);
        count++;
        if(count == 10)
            count = 0;
            
        
        }

    cls();
    
    }



