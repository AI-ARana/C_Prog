#include <stdio.h>
#include <conio.h>

// int main() {
//   // Create variables
//   system("cls");
//   int myNum = 5;               // Integer (whole number)
//   float myFloatNum = 5.99;     // Floating point number
//   char myLetter = 'D';         // Character
  
//   // Print variables
//   printf("%d\n", myNum);
//   printf("%f\n", myFloatNum);
//   printf("%c\n", myLetter);
//   return 0;
// }

// Data Type   size            Example         Format Specifiers
// int         2 or 4 bytes        1               %d, %i
// float       4 bytes             1.99            %f, %F
// double      8 bytes             1.99            %lf
// char        1 byte              'A' , 'a'       %c

// int main()
// {
//     system("cls");
// char a =97,b=98,c=99;
// printf("%c\n", a);
// printf("%c\n", b);
// printf("%c\n", c);
// return 0;
// }

// 

// 

// sizeof: size of data type (in bytes)

// 

// int main(){
//     int items=100;
//     float price_per_item=7.25;
//     float total_cost= items * price_per_item;
//     char currency='$';
//     system("cls");
//     printf("The Total number of items: %d\n", items);
//     printf(" The Price of each item: %.2f %c\n", price_per_item, currency);
//     printf(" The total Cost of items: %.2f %c\n",total_cost,currency);
//     return 0;
// }

// The Farmer store 20 apples , 20 orange and 10 mangoes in basket.
// The price of each piece of apple is 5.56 , orange is 7.85 and mango is 4.23
// The farmer travel from home town to city which approx 5 km and paid Rs 2per kilometer

// Calculate the total price of basket so the farmer earn 10% profit.

// int main() {
//     // Given data
//     int apples = 20, oranges = 20, mangoes = 10;
//     double price_apple = 5.56, price_orange = 7.85, price_mango = 4.23;
//     double travel_distance = 5, travel_cost_per_km = 2;
//     system("cls");
    
//     // Calculate total cost of fruits
//     double total_fruit_cost = (apples * price_apple) + (oranges * price_orange) + (mangoes * price_mango);
    
//     // Calculate total travel cost
//     double total_travel_cost = travel_distance * travel_cost_per_km;
    
//     // Calculate total cost
//     double total_cost = total_fruit_cost + total_travel_cost;
    
//     // Calculate selling price with 10% profit
//     double selling_price = total_cost * 1.10;
    
//     printf( "Total cost of basket: Rs %lf ", total_cost);
//     printf("\n \nSelling price with profit: Rs %lf",selling_price);
    
//     return 0;
// }
