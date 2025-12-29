#include <stdio.h>

struct Student {
    char name[ 50 ] ;
    int studentId ;
    float score ;
};

int main () {
    int N ;
    int i ;
    float average_score = 0.0 ;

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

        average_score += students[ i ].score ;

    }

    average_score = average_score / N ;
    printf( "Acerage Score: %.2f\n" , average_score ) ;
    
    return 0 ;
}// end function