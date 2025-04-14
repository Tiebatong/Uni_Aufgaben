#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int eingabe;
    printf("1 für Rotfront, 0 für Klassnfeind\n");
    scanf("%d",&eingabe);
    
    if (eingabe)
    {
        printf("Rotfront lieber genosse!\n");
    }
    else
    {
        printf("Klassenfeind erkannt\n");
    }
    system("pause");
    return 0;
}