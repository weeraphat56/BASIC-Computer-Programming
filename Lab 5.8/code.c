#include <stdio.h>

struct Student {
    int id ;
    int math_score ;
    int science_score ;
    int english_score ;
    int total_score ;
} ;

char calculate_grade( int total_score ) ;
void calculate_average( int total_score , float *avg ) ;

int main() {
    struct Student student_info ;
    char final_grade ;
    float final_average ;

    printf( "Enter Student ID: " ) ;
    if ( scanf( "%d" , &student_info.id ) != 1 ) {
        return 1 ;
    }

    printf( "Enter Math Score (out of 100): " ) ;
    if ( scanf( "%d" , &student_info.math_score ) != 1 ) {
        return 1 ;
    }

    printf( "Enter Science Score (out of 100): " ) ;
    if ( scanf( "%d" , &student_info.science_score ) != 1 ) {
        return 1 ;
    }

    printf( "Enter English Score (out of 100): " ) ;
    if ( scanf( "%d" , &student_info.english_score ) != 1 ) {
        return 1 ;
    }

    student_info.total_score = student_info.math_score + student_info.science_score + student_info.english_score ;
    if ( student_info.total_score < 0 ) {
        return 1 ;
    }
    
    final_grade = calculate_grade( student_info.total_score ) ;
    calculate_average( student_info.total_score , &final_average ) ;

    printf( "\n--- STUDENT ACADEMIC REPORT ---\n" ) ;
    printf( "Student ID: %d\n" , student_info.id ) ;
    printf( "Math Score: %d, Science Score: %d, English Score: %d\n" , student_info.math_score , student_info.science_score , student_info.english_score ) ;
    printf( "Total Score: %d\n" , student_info.total_score ) ;
    printf( "Average Score: %.2f\n" , final_average ) ;
    printf( "Final Grade: %c\n" , final_grade ) ;

    return 0 ;
}

char calculate_grade( int total_score ) {
    if ( total_score >= 250 ) {
        return 'A' ;
    }
    else if ( total_score >= 200 && total_score < 250 ) {
        return 'B' ;
    }
    return 'C' ;
}

void calculate_average( int total_score , float *avg ) {
    *avg = total_score / 3 ;
}