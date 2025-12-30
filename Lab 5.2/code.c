#include <stdio.h>

struct Employee {
    int id;
    int gross_salary;
    int bonus;
    int total_income;
};

int calculate_net_salary( int total_income ) ;

int main () {
    struct Employee emp;
    int net_salary;

    printf( "Enter Employee ID: " ) ;
    if ( scanf("%d", &emp.id) != 1 ) {
        return 1 ;
    }

    printf( "Enter Gross Salary: " ) ;
    if ( scanf("%d", &emp.gross_salary) != 1 ) {
        return 1 ;
    }

    printf("Enter Bonus: ");
    if ( scanf( "%d" , &emp.bonus ) != 1 ) {
        return 1 ;
    }

    emp.total_income = emp.gross_salary + emp.bonus;
    net_salary = calculate_net_salary( emp.total_income ) ;


    printf( "\n--- EMPLOYEE SALARY REPORT ---\n" ) ;
    printf( "ID: %d\n" , emp.id ) ;
    printf( "Gross Salary: %d\n" , emp.gross_salary ) ;
    printf( "Bonus: %d\n" , emp.bonus ) ;
    printf( "Total Income: %d\n" , emp.total_income ) ;
    printf( "Net Salary: %d\n" , net_salary ) ;

    return 0 ;
}// end main function

int calculate_net_salary( int total_income ) {
    if ( total_income > 30000 ) {
        return total_income - ( total_income * 0.1 ) ;
    }
    else {
        return total_income - ( total_income * 0.05 ) ;
    }
}// end calculate_net_salary function