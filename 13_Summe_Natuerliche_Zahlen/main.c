#include <stdio.h>
#include <stdlib.h>
int Su_Na( int lowerLimit , int upperLimit );
int main()
{
    int lowerLimit , upperLimit ;
    int Ergebnis ;
    printf("Bitte die lowerLimit eingeben:");
    scanf("%d", &lowerLimit);

    printf("Bitte die upperLImit eingeben:");
    scanf("%d", &upperLimit );

    Ergebnis = Su_Na( lowerLimit , upperLimit );

    printf("Die Summe alle Natuerliche Zahlen zwischen [%d , %d] ist %d ", lowerLimit , upperLimit , Ergebnis );

    return 0;
}
int Su_Na( int lowerLimit , int upperLimit )
{
  if (lowerLimit > upperLimit)
        return 0;                 // Basisfall

    return lowerLimit + Su_Na(lowerLimit + 1, upperLimit);

    /*
    int Summe  ;
    if( lowerLimit <= upperLimit )
    {
       if( lowerLimit <= upperLimit )
            {
                Summe += lowerLimit ;
            }
        Su_Na( lowerLimit + 1 , upperLimit );
    }

    return Summe ;
    */

}
