#include <stdio.h>

int main () {
    int size = 6 ;
    int data[ size ] ;
    int total_sum = 0 ;
    int i ;

    for ( i = 0 ; i < size ; i++ ) {
        printf( "Enter integer number %d: " , i + 1 ) ;
        scanf( "%d" , &data[ i ] ) ;
        total_sum += data[ i ] ;
    }

    printf( "\n--- SUMMATION REPORT ---\n" ) ;
    printf( "Recorded Number: " ) ;

    for ( i = 0 ; i < size ; i++ ) {
        printf( "%d " , data[ i ] ) ;
    }

    printf( "\n" ) ;
    printf( "Total Sum of Number: %d\n" , total_sum ) ;

    return 0 ;
}// end function