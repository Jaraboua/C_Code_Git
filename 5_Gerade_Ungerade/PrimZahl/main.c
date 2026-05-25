#include <stdio.h>
#include <stdlib.h>
int Prim_Zahl( int Var );
int main()
{
    int Variable ;
    int Ergebnis ;

    printf("Bitte geben Sie eine Zahl ein:");
    scanf("%d" , Variable );

    Ergebnis = Prim_Zahl( Variable );
    if( Ergebnis == 1 )
        printf(" Die Variable %d ist eine Primzahl", Variable );
    else
        printf(" Die Variable %d ist keine Primzahl", Variable );

    return 0;
}

int Prim_Zahl( int Var )
{
    for( int i = 2 ; i < Var ; Var++ )
    {
        if( Var % i == 0 )
            return 0 ;
        else
            return 1 ;
    }


}
