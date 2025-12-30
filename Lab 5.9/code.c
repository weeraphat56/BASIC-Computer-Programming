#include <stdio.h>
#include <stdlib.h>

struct Product {
    int item_id ;
    float cost_price ;
    float sell_price ;
    int stock_quantity ;
} ;

float calculate_total_profit( float cost , float sell , int qty ) ;
float calculate_profit_percentage( float cost , float sell ) ;

int main () {
    struct Product item ;
    float total_profit ;
    float profit_percent ;
    char prefix ; // ใช้เก็บตัวอักษร 'P'

    // อ่านค่า P และตัวเลขต่อท้าย เช่น P004 จะได้ item_id = 4
    if ( scanf( " %c%d" , &prefix , &item.item_id ) != 2 ) return 1 ;
    if ( scanf( "%f" , &item.cost_price ) != 1 ) return 1 ;
    if ( scanf( "%f" , &item.sell_price ) != 1 ) return 1 ;
    if ( scanf( "%d" , &item.stock_quantity ) != 1 ) return 1 ;

    total_profit = calculate_total_profit( item.cost_price , item.sell_price , item.stock_quantity ) ;
    profit_percent = calculate_profit_percentage( item.cost_price , item.sell_price ) ;

    printf( "--- INVENTORY PROFIT REPORT ---\n" ) ;
    printf( "Item ID: %d\n" , item.item_id ) ;
    printf( "Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n" , item.cost_price , item.sell_price , item.stock_quantity ) ;
    printf( "Total Profit: %.2f\n" , total_profit ) ;
    printf( "Profit Percentage: %.2f%%\n" , profit_percent ) ;

    if ( total_profit < 0 ) {
        printf( "Status: Loss!\n" ) ;
    }
    else if ( total_profit == 0 ) {
        printf( "Status: Break Even.\n" ) ;
    }
    else {
        printf( "Status: Profit!\n" ) ;
    }

    return 0 ;
}

float calculate_total_profit( float cost , float sell , int qty ) {
    if ( cost < 0 || sell < 0 || qty < 0 ) return 0 ;
    return ( sell - cost ) * qty ;
}

float calculate_profit_percentage( float cost , float sell ) {
    if ( cost <= 0 ) return 0 ;
    return ( ( sell - cost ) / cost ) * 100 ;
}