#include <stdio.h>
#include <stdlib.h>
int Fakul( int N );

int main()
{
    int zahl ;
    printf("Bitte eine Zahl Eingeben:");
    scanf("%d", &zahl );

    int Ergebnis = Fakul( zahl );
    printf("Bitte die Ergebnis zeigen=\t %d" , Ergebnis );
    return 0;
}
int Fakul( int Zahl )
{
   if( Zahl < 0 )
   {
       printf("Fehler: Negative Zahl!\n");
       return -1 ;
   }

   if( Zahl == 0 || Zahl == 1 )
   {
       return 1 ;
   }

   return Zahl * Fakul( Zahl - 1 ) ;

}
