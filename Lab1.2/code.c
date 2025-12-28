#include <stdio.h>

int main() {
  int score ;

  // Get score input and varidate
  if ( scanf ( "%d" , &score ) != 1 ) {
    printf ( " Error" ) ;
    return 1 ;
  }//end if

  // Grading from score
  if ( score >= 80 ) 
    printf ( "Grade A" ) ;
  else if ( score >= 70 && score < 80 )
    printf ( "Grade B" ) ;
  else if ( score >= 60 && score < 70 )
    printf ( "Grade C" ) ;
  else if ( score >= 50 && score < 60 )
    printf ( "Grade D" ) ;
  else
    printf ( "Grade F" ) ;

  return 0 ;
}//end main function