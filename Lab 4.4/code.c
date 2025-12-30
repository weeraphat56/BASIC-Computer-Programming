#include <stdio.h>

int main () {
    int SIZE = 5 ;
    int numbers[ 5 ] ;
    int even_count = 0 ;
    int odd_count = 0 ;
    int i ;

    for ( i = 0 ; i < SIZE ; i++ ) {
        printf( "Enter integer number %d: " , i + 1 ) ;
        if ( scanf( "%d" , &numbers[ i ] ) != 1 ) {
            return 0 ;
        }
    }

    for ( i = 0 ; i < SIZE ; i++ ) {
        if ( numbers[ i ] % 2 == 0 ) {
            even_count++ ;
        }
        else {
            odd_count++ ;
        }
    }

    printf( "\n--- NUMBER CLASSIFICATION REPORT ---\n" ) ;
    printf( "Recorded Numbers: " ) ;

    for ( i = 0 ; i < SIZE ; i++ ) {
        printf( "%d " , numbers[ i ] ) ;
    }

    printf( "\nTotal Even Numbers Found: %d\n" , even_count ) ;
    printf( "Total Odd Numbers Found: %d\n" , odd_count ) ;

    return 0 ;
}// end function