#include <stdio.h>

#define NUM_STUDENTS 3

struct Student {
    int id ;
    int score ;
};

int find_max_score_id( struct Student students[] , int size ) ;

int main () {
    struct Student class_data[ NUM_STUDENTS ] ;
    int top_student_id ;
    int i = 0 ;

    printf( "Enter data for %d students:\n" , NUM_STUDENTS ) ;
    for ( i = 0 ; i < NUM_STUDENTS ; i++ ) {
        printf( "--- Student %d ---\n" , i + 1 );
        printf( "Enter ID: " ) ;
        if ( scanf( "%d" , &class_data[i].id ) != 1 ) {
            return 1 ;
        }

        printf( "Enter Score: " ) ;
        if ( scanf( "%d" , &class_data[i].score ) != 1 ) {
            return 1 ;
        }
    }

    top_student_id = find_max_score_id( class_data , NUM_STUDENTS ) ;

    printf( "\n--- STUDENT SCORE REPORT ---\n" ) ;
    printf( "ID      | Score\n" ) ;
    printf( "-------|-------\n" ) ;
    for ( i = 0 ; i < NUM_STUDENTS ; i++ ) {
        printf( "%-6d | %d\n" , class_data[ i ].id , class_data[ i ].score ) ;
    }
    printf( "\nTOP PERFORMER ID: %d\n" , top_student_id ) ;

    return 0 ;
}// end main function

int find_max_score_id( struct Student students[] , int size ) {
    int top_score = students[ 0 ].score ;
    int top_id = students[ 0 ].id ;
    int i = 0 ;

    for ( i = 0 ; i < size ; i++ ) {
        if( students[ i ].score > top_score ) {
            top_score = students[ i ].score ;
            top_id = students[ i ].id ;
        }
    }

    return top_id ;
}// end find_max_score_id function