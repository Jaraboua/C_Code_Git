#include <stdio.h>
#include <stdlib.h>
int iS_PrimZahl( int Var1 , int Var2 );
int main( )
{
    int Un_G , Ob_G ;
    printf("Bitte die UN_G und OB_G eingeben:");
    scanf("%d %d", &Un_G, &Ob_G );
    iS_PrimZahl( Un_G , Ob_G );


    return 0;
}


int iS_PrimZahl( int Un_G , int Ob_G )
{
   int i ;
   for( i = Un_G ; i < Ob_G ; i++ )
   {
       int j ;
       int prim = 1 ;
                for( j = 2 ; j < i ; j++ )
                {
                    if( i % j == 0 )
                        prim = 0 ;
                        break ;

                }
                if( prim )
                {
                  printf("Die %d Zahl ist eine Primzahl:\n ", i);
                }

   }
}
