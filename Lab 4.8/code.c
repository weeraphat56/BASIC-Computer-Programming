#include <stdio.h>

int main () {
    const int MAX_SIZE = 10 ;
    const int UNVISITED = 0 ;
    const int VISITED = -1 ;

    int data[ MAX_SIZE ] ;
    int status[ MAX_SIZE ] ;
    int N ;
    int i ;
    int j ;
    int count ;

    for ( i = 0 ; i < MAX_SIZE ; i++ ) {
        status[ i ] = UNVISITED ;
    }//end for

    printf( "Enter the number of elements (N, max %d): " , MAX_SIZE ) ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }//end if

    for ( i = 0 ; i < N ; i++ ) {
        printf( "Element %d: " , i + 1 ) ;
        scanf( "%d" , &data[ i ]) ;
    }//end for

    printf( "\n--- FREQUENCY ANALYSIS REPORT ---\n" ) ;
    printf( "Total elements recorded (N): %d\n" , N ) ;
    printf( "Recorded Numbers: " ) ;
    
    for( i = 0 ; i < N ; i++ ) {
        printf( "%d " , data[ i ] ) ;
    }//end for

    printf( "\n--- FREQUENCY TABLR ---\n" ) ;
    printf( "Number | Frequency\n" ) ;

    printf( "-------|----------\n" ) ;

    for ( i = 0 ; i < N ; i++ ) {
        int selected = -1 ;
        int counter = 0 ;
        for ( j = 0 ; j < N ; j++ ) {
            if ( status[ j ] == UNVISITED ) {
                if ( selected == -1 ) {
                    selected = data[ j ] ;
                }
                if ( data[ j ] == selected ) {
                    status[ j ] = VISITED ;
                    counter++ ;
                }//end if
            }//end if
        }//end for loop

        if ( selected != -1 ) {
            printf( "%d | %d" , selected , counter ) ;
            printf( "\n" ) ;
        }//end if
    }//end for loop

    return 0 ;
}//end function