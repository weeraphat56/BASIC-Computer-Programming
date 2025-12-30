#include <stdio.h>

#define FILENAME "output_data.txt"

int main () {
    FILE *fptr;
    int year = 2025;
    const char text[] = "Hello, C File Handling is easy.\n2025" ;

    fptr = fopen( FILENAME , "w" );

    if (fptr == NULL) {
        printf( "ERROR: Could not open file %s for writing.\n" , FILENAME ) ;
    }

    printf( "--- FILE WRITING PROCESS ---\n" ) ;
    printf( "Writing data to %s...\n" , FILENAME ) ;

    fprintf( fptr, text ) ;

    printf( "File writing complete.\n" ) ;
    printf( "\n--- FILE OPERATION REPORT ---\n" ) ;
    printf( "Action: File created and data written successfully.\n" ) ;
    printf( "Filename: %s\n" , FILENAME ) ;

    return 0 ;
}// end main function