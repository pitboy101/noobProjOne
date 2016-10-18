void basicInterface(void)
{
    char buffer[20];
    while(1)
    {
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
