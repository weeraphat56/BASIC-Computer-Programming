#include <stdio.h>

int main () {
    int N_MONTHS ;
    int month ;
    int successCount = 0 ;
    float dailyDeposit ;
    float monthlyTotal ;

    if( scanf( "%d" , &N_MONTHS ) != 1 ) {
        return 1 ;
    }//end if

    for( month = 1 ; month <= N_MONTHS ; month++ ) {
        monthlyTotal = 0.0 ;

        if( scanf( "%f" , &dailyDeposit ) != 1 ) {
            break ;
        }//end if

        while( dailyDeposit != 0.00 ) {

            monthlyTotal += dailyDeposit ;

            if( scanf( "%f" , &dailyDeposit ) != 1 ) {
                break ;
            }//end if
        }//end while loop

        printf( "Month %d Total: %.2f\n" , month , monthlyTotal ) ;

        if( monthlyTotal >= 500 ) {
            successCount += 1 ;
        }//end if
    }//end for loop

    printf( "Success Count: %d\n" , successCount ) ;
    return 0 ;
}//end main function