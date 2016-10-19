void ListInstructions(void)
{
    puts("\n\n");
    printf("\tAvailable Instructions:\n\n");
    printf("\tHack  ---  fake hacking in front of your friends to show off\n");
    printf("\tDNA  ---  take a look at this fake DNA\n");
    printf("\tColour  ---  I can show you some nice colours\n");
    printf("\tquit  ---  exit the program\n");
    printf("\th  ---  to show this help manual\n\n");
    getch();
    cls();
    
    }



void basicInterface(void)
{
    char buffer[20];
    while(1)
    {
        system("color 07"); 
        printf(">Enter instruction: ");
        fgets(buffer, 19, stdin);
        if(strcmp(buffer, "h\n") == 0)
        {
            ListInstructions();
            }
        if( strcmp(buffer, "Hack\n" ) == 0)
        {
            fakeHacking();
            }
        if( strcmp(buffer, "DNA\n") == 0)
        {
            showMyDNA();
            }
        if( strcmp(buffer, "Colour\n") == 0)
        {
            giveMeColour();
            }
        if( strcmp(buffer, "quit\n")== 0)
            return;
       
            
    }
    
    }
