#include <stdio.h>

int main () {
    const int STUDENTS = 5 ;

    int score[ STUDENTS ] ;
    int sum = 0 ;
    float average = 0.0 ;
    int above_average_count = 0 ;
    int i ;

    for ( i = 0 ; i < STUDENTS ; i++ ) {
        printf( "Enter score for student %d: " , i + 1 ) ;
        
        if ( scanf( "%d" , &score[ i ] ) != 1 ) {
            return 1 ;
        }

        if ( score[ i ] < 0 ) {
            return 1 ;
        }

        sum += score[ i ] ;
    }

    average = (float)sum / STUDENTS ;

    for ( i = 0 ; i < STUDENTS ; i++ ) {
        if ( score[ i ] > average ) {
            above_average_count++ ;
        }
    }

    printf( "\n--- STUDENTS SCORE ANALYSIS REPORT ---\n" ) ;
    printf( "Recorded Score: " ) ;

    for ( i = 0 ; i < STUDENTS ; i++ ) {
        printf( "%d ", score[ i ] ) ;
    }

    printf( "\nTotal Sum: %d\n" , sum ) ;
    printf( "Average Score: %.2f\n" , average ) ;
    printf( "Number of Score Above Average: %d\n" , above_average_count ) ;

    return 0 ;
}// end function