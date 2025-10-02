//NAME:RIGAN NYAGETA
//REG NO:PA106/G/28833/25
/*a programme that displays data bundle offers and request user to enter their choiceand uses switch statementto displsy bundle selected and its cost*/

#include <stdio.h>

int main()
{
    int offer;
    printf("please select data bundle \n");
    printf("1.100MB @ 50 KES\n");
    printf("2.500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");
    
    printf("enter your choice(1-4):");
    scanf("%d",&offer);
    
    switch(offer)
    {
    case 1:
    	    printf("\nyou selected 100MB @ 50 KES");
    	    break;
 	case 2:
 	        printf("\nyou selected 2.500MB @ 200 KES");
 	        break;
    case 3:
            printf("\nyou selected 1GB @ 350 KES");
            break;
    case 4:
    	    printf("\nyou selected 2GB @ 600 KES" );
    	    break;
 	default:
 		    printf(
"\ninvalid choice.please pick a number between 1-4.");
            break;
	}
    
    return 0;
}