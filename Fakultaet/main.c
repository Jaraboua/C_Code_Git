#include <stdio.h>
#include <stdlib.h>
 int Fakultaet( int Var );
 int Digit( int var );

int main()
{
    int Var , Ergebnnis ;
    printf("Bitte eine Zahl eingeben:");
    scanf("%d", &Var );

    Ergebnnis = Fakultaet( Var );
    printf("%d", Ergebnnis );


}

int Fakultaet( int Var )
{
    int i ;
    int  Fakultaet_1 = Var  ;


    for ( i =  1 ; i < Var ; i++ )
    {
      Fakultaet_1 *= ( Var - i );

    }

    return  Fakultaet_1 ;
}
