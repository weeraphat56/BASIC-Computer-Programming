#include <stdio.h>

#define MONTHS 3

int analyze_profitability( int *rev_ptr , int *exp_ptr , int size , int *status_ptr ) ;
void get_monthly_data(int array[] , int size , const char *type ) ;
void print_monthly_data( int array[] , int size , const char *type ) ;

int main() {
    int monthly_revenue[ MONTHS ] ;
    int monthly_expense[ MONTHS ] ;
    int net_profit ;
    int business_status ;

    get_monthly_data( monthly_revenue , MONTHS , "REVENUE" ) ;
    get_monthly_data( monthly_expense , MONTHS , "EXPENSE" ) ;

    printf( "\n--- 3 MONTH FINANCIAL ANALYSIS REPORT ---\n" ) ;
    print_monthly_data( monthly_revenue , MONTHS , "REVENUE" ) ;
    print_monthly_data( monthly_expense , MONTHS , "EXPENSE" ) ;

    net_profit = analyze_profitability( monthly_revenue , monthly_expense , MONTHS , &business_status ) ;

    printf( "\nNET PROFIT: %d\n" , net_profit ) ;
    printf( "BUSINESS STATUS: " ) ;

    if ( business_status == 1 ) {
        printf( "PROJECT IS PROFITABLE" ) ;
    }
    else {
        printf( "PROJECT IS UNPROFITABLE" ) ;
    }

    return 0 ;
}// end main function

int analyze_profitability( int *rev_ptr , int *exp_ptr , int size , int *status_ptr ) {
    int profit = 0 ;
    int i = 0 ;

    for ( i = 0 ; i < size ; i++ ) {
        profit += *( rev_ptr + i ) ;
    }

    for ( i = 0 ; i < size ; i++ ) {
        profit -= *( exp_ptr + i ) ;
    }

    if ( profit < 0 ) {
        *status_ptr = 0 ;
    }
    else {
        *status_ptr = 1 ;
    }

    return profit ;
}//end analyze_profitability function

void get_monthly_data( int array[] , int size , const char *type ) {
    int i = 0 ;
    
    printf( "\nEnter %d months of %s values:\n" , size , type ) ;
    
    for ( i = 0; i < size; i++ ) {
        printf( "Month %d %s: " , i + 1 , type ) ;
        if ( scanf( "%d" , &array[i] ) != 1 ) {
            return ;
        }
    }
}// end get_monthly_data function

void print_monthly_data(int array[], int size, const char *type) {
    long total = 0;
    int i = 0 ;
    for ( i = 0 ; i < size ; i++ ) {
        total += array[ i ] ;
    }
    printf( "TOTAL %s: %ld\n" , type , total ) ;
}// end int_monthly_data function