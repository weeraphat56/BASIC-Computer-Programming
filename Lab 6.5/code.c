#include <stdio.h>

#define MAX_SIZE 50

int count_vowels_with_pointer( char *str ) ;

int main() {
    char sentence[ MAX_SIZE ] ;
    int vowel_count ;

    printf( "Enter a sentence: " ) ;

    if ( fgets( sentence , MAX_SIZE , stdin ) == NULL) {
        return 1 ;
    }// end if

    sentence[ strcspn( sentence , "\n" ) ] = '\0' ;

    vowel_count = 0 ;
    char *char_ptr = sentence ;

    vowel_count = count_vowels_with_pointer( char_ptr ) ;

    printf( "\n--- STRING ANALYSIS REPORT ---\n" ) ;
    printf( "Input String: \"%s\"\n" , sentence ) ;
    printf( "Total Vowel Count: %d\n" , vowel_count ) ;

    return 0 ;
}// end main function

int count_vowels_with_pointer( char *str ) {
    int counter = 0 ;
    int i = 0 ;
    
    while ( *(str + i) != '\0' ) {
        if ( *(str+i) == 'a' || *(str+i) == 'e' || *(str+i) == 'i' || *(str+i) == 'o' || *(str+i) == 'u' ) {
            counter++ ;
        }
        else if ( *(str+i) == 'A' || *(str+i) == 'E' || *(str+i) == 'I' || *(str+i) == 'O' || *(str+i) == 'U' ) {
            counter++ ;
        }// end if else
        i++ ;
    }// end while loop

    return counter ;
}// end count_vowels_with_pointer function