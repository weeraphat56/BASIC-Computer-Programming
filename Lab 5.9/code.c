#include <stdio.h>

struct Product {
    int item_id ;
    float cost_price ;
    float sell_price ;
    int stock_quantity ;
} ;

float calculate_total_profit( float cost , float sell , int qty ) ;
float calculate_profit_percentage( float cost , float sell ) ;

int main() {
    struct Product item ;
    float total_profit ;
    float profit_percent ;

    printf( "Enter Item ID: " ) ;
    if ( scanf( "%d" , &item.item_id ) != 1 ) {
        return 1 ;
    }

    printf( "Enter Cost Price per unit: " ) ;
    if ( scanf( "%f" , &item.cost_price ) != 1 ) {
        return 1 ;
    }

    printf( "Enter Sell Price per unit: " ) ;
    if ( scanf( "%f" , &item.sell_price ) != 1 ) {
        return 1 ;
    }

    printf( "Enter Stock Quantity: " ) ;
    if ( scanf( "%d" , &item.stock_quantity ) != 1 ) {
        return 1 ;
    }

    total_profit = calculate_total_profit( item.cost_price , item.sell_price , item.stock_quantity ) ;
    profit_percent = calculate_profit_percentage( item.cost_price , item.sell_price ) ;

    printf( "\n--- INVENTORY PROFIT REPORT ---\n" ) ;
    printf( "Item ID: %d\n" , item.item_id ) ;
    printf( "Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n" , item.cost_price , item.sell_price , item.stock_quantity ) ;
    printf( "Total Profit: %.2f\n" , total_profit ) ;
    printf( "Profit Percentage: %.2f%%\n" , profit_percent ) ;

    if ( total_profit < 0 ) {
        printf( "Status: Loss!" ) ;
    }
    else if ( total_profit == 0 ) {
        printf( "Status: Break Even." ) ;
    }
    else {
        printf( "Status: Profit!" ) ;
    }

    return 0 ;
}
float calculate_total_profit( float cost , float sell , int qty ) {
    if ( cost < 0 || sell < 0 || qty < 0 ) {
        return 0 ;
    }
    return ( sell * qty ) - ( cost * qty ) ;
}

float calculate_profit_percentage( float cost , float sell ) {
    if ( cost < 0 || sell < 0 ) {
        return 0 ;
    }
    return ( ( sell - cost ) / cost ) * 100 ;
}