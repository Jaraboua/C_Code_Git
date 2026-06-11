#include <stdio.h>
#include <stdlib.h>
void printNaturalNummer( int lowerLimit , int upperLimit );
int main()
{
    int lowerLimit , upperLimit ;

    printf("Enter lower limit:");
    scanf("%d", &lowerLimit );
    printf("Enter upper limit:");
    scanf("%d", &upperLimit );

    printf("All natural numbers from %d to %d are:\ ", lowerLimit ,upperLimit );
    printNaturalNummer( lowerLimit , upperLimit );
    return 0;
}

void printNaturalNummer( int lowerLimit , int upperLimmit )
{
    if( lowerLimit >= upperLimmit )
        return ;
    printf("LowerLimit ist %d:\n", lowerLimit );
    //Recursively call the funktion to print next number;

    printNaturalNummer( lowerLimit + 1 , upperLimmit );
}
