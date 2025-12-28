#include <stdio.h>

void ShowStatus( int , int ) ;
int main() {
    int dayCode , hour ;

    if ( scanf("%d %d" , &dayCode , &hour ) != 2 ) {
        printf( "Error: Input integer only" ) ;
        return 1 ;
    }//end if

    if ( dayCode < 0 || dayCode > 7 ) {
        printf( "Invalid Day Code" ) ;
        return 1 ; 
    }//end if

    if ( hour < 0 ) {
        printf( "Error: Time can not be negative" ) ; 
        return 1 ;
    }//end if
    
    ShowStatus( dayCode , hour) ;

    return 0 ;
}

void ShowStatus( int dayCode , int hour ) {
    if ( dayCode < 6 ) {
        if( hour >= 8 && hour <= 17 ) {
            printf( "System Running(Workday)" ) ;
        }
        else{
            printf( "System Idle(Off-hours)" ) ;
        }// end if else
    }
    else if ( dayCode < 7 ) {
        printf( "Weekend Relax Mode" ) ;
    }// end if else
}// end ShowStatus