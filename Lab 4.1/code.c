#include <stdio.h>

int main() {
    int N ;
    int i ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }

    int score[ N ] ;

    for ( i = 0 ; i < N ; i++ ) {
        if ( scanf( "%d" , &score[ i ] ) !=  1 ) {
            break ;
        }
    }

    for ( i = 0 ; i < N ; i++ ) {
        printf( "%d\n" , score[ N - i - 1 ] ) ;
    }
}// end function