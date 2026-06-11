#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
void printArray( int arr[], int start , int len );

int main()
{
    int arr[ MAX_SIZE ];
    int N , i ;

    printf(" Enter ssize of the Array:");
    scanf("%d", &N);

    printf("Enter Elements in the Array:");
    for( i = 0 ; i < N ; i++ )
    {
        scanf("%d" , &arr[i]);
    }

    printf("Element in the Array:");
    printArray( arr , 0 , N );

    return 0;
}


void printArray( int arr[], int start , int len )
{
    if ( start >= len )
    {
        return ;
    }

    printf("%d\t", arr[start]);

    printArray( arr , start + 1 , len );
}
