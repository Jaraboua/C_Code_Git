#include <stdio.h>
#include <stdlib.h>
void is_G( int lowerLimit , int upperLimit );
int main()
{
    int lowerLimit , upperLimit ;
    printf("Bitte die lowerLimit eingeben:");
    scanf("%d", &lowerLimit );
    printf("Bitte die upperLimit eingeben:");
    scanf("%d", &upperLimit );
    is_G( lowerLimit , upperLimit );

    return 0;
}


void is_G( int lowerLimit , int upperLimit )
{
   if( lowerLimit <= upperLimit )
   {
       if( lowerLimit % 2 == 0 )
        printf(" Die Zahl %d\t ist gerade\n ", lowerLimit );
    else
        printf(" Die Zahl %d\t ist ungerade\n ", lowerLimit );

    is_G( lowerLimit + 1 , upperLimit );
   }




}
