#include <stdio.h>

int main () {
    int N ;
    int i = 0 ;
    int passSum = 0 ;
    int failSum = 0 ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }

    int scores[ N ] ;

    for ( i = 0 ; i < N ; i++ ) {
        if ( scanf( "%d" , &scores[ i ] ) != 1 ) {
            return 1 ;
        }

        if ( scores[ i ] >= 50 ) {
            passSum += scores[ i ] ;
        }
        else {
            failSum++ ;
        }
    }

    printf( "Passing Score Sum: %d\n" , passSum ) ;
    printf( "Fail Students Count: %d\n" , failSum) ;

    return 0 ;
}// end function