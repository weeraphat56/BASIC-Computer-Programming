#include <stdio.h>

int main () {
    int N_PERIODS ;
    int cmdCode ;
    int i ;
    float initialBalance ;
    float PENALTY_FEE ;
    float amount ;
    float currentBalance ;
    float APR ;
    float interest ;
    float totalPenalties = 0.0 ;

    if ( scanf( "%f %f %d" , &initialBalance , &PENALTY_FEE , &N_PERIODS ) != 3 ) {
        return 1 ;
    }
    currentBalance = initialBalance ;

    printf( "Starting Balance: %.2f\n" , initialBalance ) ;

    for ( i = 1 ; i <= N_PERIODS ; i++ ) {
        printf( "--- Month %d ---\n" , i ) ;

        if ( scanf( "%d %f" ,&cmdCode , &amount ) != 2 ) {
            break ;
        }

        switch(cmdCode) {
            case 1: {
                currentBalance += amount ;
                printf( "Deposit: %.2f\n" , amount ) ;
                break ;
            }
            case 2: {
                if ( amount <= currentBalance ) {
                    currentBalance -= amount ;
                    printf( "Withdrawal: %.2f\n" , amount ) ;
                    break ;
                }
                if ( amount > currentBalance ) {
                    totalPenalties += PENALTY_FEE ;
                    printf( "WITHDRAWAL FAILED. Penalty %.2f applied.\n" , PENALTY_FEE ) ;
                    break ;
                }
            }
            case 3: {
                if ( currentBalance < 1000 ) {
                    APR = 1 ;
                }
                else {
                    APR = 2.5 ;
                }
                interest = currentBalance * ( ( APR / 100 ) / 12.0 ) ;
                currentBalance += interest ;
                printf( "Interest: %.2f(Rate: %.2f%)\n" , interest , APR ) ;
                break ;
            }
            default : {
                printf( "Error: Invalid Command.\n" ) ;
            }
        }
    }

    printf( "Final Balance: %.2f\n" , currentBalance ) ;
    printf( "Total Penalties: %.2f\n" , totalPenalties ) ;
}// end function