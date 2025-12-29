#include <stdio.h>

struct Student {
    char name[ 50 ] ;
    int studentId ;
    float score ;
};

int main () {
    int N ;
    int i ;
    int passCount = 0 ;
    int failCount = 0 ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }

    struct Student students[ N ] ;

    for ( i = 0 ; i < N ; i++ ) {

        if ( scanf( "%d %f %s" , &students[ i ].studentId , &students[ i ].score , students[ i ].name ) != 3 ) {
            return 0 ;
        }

        if ( students[ i ].score < 0 ) {
            return 0 ;
        }

    }

    for ( i = 0 ; i < N ; i++ ) {
        if ( students[i].score >= 60 ) {
            passCount++ ;
        }
        else {
            failCount++ ;
        }
    }

    printf( "Pass Count: %d\nFail Count: %d" , passCount , failCount ) ;
    
    return 0 ;
}// end main function