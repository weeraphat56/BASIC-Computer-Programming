#include <stdio.h>
#include <string.h>

int main () {
    char text[ 101 ] ;
    int countUpper = 0 ;
    int countLower = 0 ;
    int countDigit = 0 ;
    int countOther = 0 ;
    int i = 0 ;

    if ( scanf( "%s" , text ) != 1 ) {
        return 1 ;
    }

    for ( i = 0 ; i < strlen(text) ; i++ ) {
        int currentChar = ( int )text[ i ] ;

        if ( text[ i ] >= 'A' && text[ i ] <= 'Z' ) {
            countUpper++ ;
        }
        else if ( text[ i ] >= 'a' && text[ i ] <= 'z' ) {
            countLower++ ;
        }
        else if ( text[ i ] >= '0' && text[ i ] <= '9' ) {
            countDigit++ ;
        }
        else {
            countOther++ ;
        }
    }

    printf( "Uppercase : %d\n" , countUpper ) ;
    printf( "Lowercase : %d\n" , countLower ) ;
    printf( "Digit : %d\n" , countDigit ) ;
    printf( "Soecial/Other : %d\n" , countOther ) ;
}// end function