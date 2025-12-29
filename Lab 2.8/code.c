#include <stdio.h>

int main () {
    int N ;
    int i ;
    int studentId ; 
    int score ;
    int totalClasses ; 
    int absentClasses ;
    float attendanceParcent ;
    int passCount = 0 ;
    int failCount = 0 ;

    if ( scanf( "%d" , &N ) !=  1 ) {
        return 1 ;
    }

    for ( i = 0 ; i < N ; i++ ) {
        if ( scanf( "%d %d %d %d"  , &studentId , &score , &totalClasses , &absentClasses ) != 4 ) {
            break ;
        }

        attendanceParcent = ( float )( totalClasses - absentClasses ) / totalClasses * 100.00 ;
        
        if ( score < 50 && attendanceParcent < 75 ) {
            printf( "Student %d: FAIL - Both Score and Attendance\n" , studentId ) ;
            failCount += 1 ;
            continue ;
        }
        if ( score < 50 ) {
            printf( "Student %d: FAIL - Low Score\n" , studentId ) ;
            failCount += 1 ;
            continue ;
        }
        if ( attendanceParcent < 75 ) {
            printf( "Student %d: FAIL - Low Attendance (%.2f%)\n" , studentId , attendanceParcent ) ;
            failCount += 1 ;
            continue ;
        }

        passCount += 1 ;
        printf( "Student %d: PASS\n" , studentId ) ;
    }

    printf( "--- Summary ---\n" ) ;
    printf( "Total PASS: %d\n" , passCount ) ;
    printf( "Total FAIL: %d\n" , failCount ) ;
}// end main function