// If Statement
// Syntax

// if (condition){
//     // Block of If Statemnets
// }

// WAP to check the number is positive or negative or Zero.

// #include<stdio.h>

// int main()
// {
//     int n;
//     system("cls");
//     printf("Enter the any number:");
//     scanf("%d",&n);

//     if(n>0){
//         printf("Control in Inside if Block");
//         printf("\n %d is positive number",n);
//     }
//     else if(n==0){
//         printf("Control in Inside else-if Block");
//         printf("\n %d is Zero Value number",n);
//     }
//     else{
//         printf("Control in Inside else Block");
//         printf("\n %d is negative number",n);
//     }
//     printf("\n Outside if-else Block");
// }

//WAP to print the day of week.

// #include<stdio.h>
// int main(){
//     int day_no;
//     system("cls");

//     printf("Enter the day_no b/w 1 to 7:");
//     scanf("%d",&day_no);

//     if(day_no==1){
//         printf(" Day %d is Monday", day_no);
//     }
//     else if(day_no==2){
//         printf(" Day %d is Tuesday",day_no);
//     }
//     else if(day_no==3){
//         printf(" Day %d is Wednesday",day_no);
//     }
//     else if(day_no==4){
//         printf(" Day %d is Thursday",day_no);
//     }
//     else if(day_no==5){
//         printf(" Day %d is Friday",day_no);
//     }
//     else if(day_no==6){
//         printf(" Day %d is Saturday",day_no);
//     }
//     else if(day_no==7){
//         printf(" Day %d is Sunday",day_no);
//     }
//     else{
//         printf("You entered wrong Day_no");
//     }
// }

// Ternary Operator

// variable=(condition)?ExpressionTrue:ExpressionFalse

#include<stdio.h>
int main(){
    int age=18;
//     int time=20;
    system("cls");
//     // if(time<18){
//     //     printf("Good Day");
//     // }
//     // else{
//     //     printf("Good Night");
//     // }
//     (time<18)?printf("Good Day"):printf("Good Night");
        (age>=18)?printf("Eligble for voting"): printf("Not Eligble for voting");
}

// Nested if

// #include<stdio.h>
// int main(){
//     int n=0;
//     system("cls");
//     if(n>0){
//         printf("%d is natural number",n);
//     }
//     if(n%2==0){
//             printf("\n%d is enen number",n);
//         }
//     else{
//             printf("\n%d is odd number",n);
//     }
    
    
// }

// Switch

// #include<stdio.h>
// int main(){
//     int day_no;
//     system("cls");

//     printf("Enter the day_no b/w 1 to 7:");
//     scanf("%d",&day_no);
//     switch (day_no){

//     case 1:
//         printf(" Day %d is Monday", day_no);
//         break;
//     case 2:
//         printf(" Day %d is Tuesday",day_no);
//         break;
//     case 3:
//         printf(" Day %d is Wednesday",day_no);
//         break;
//     case 4:
//         printf(" Day %d is Thursday",day_no);
//         break;
//     case 5:
//         printf(" Day %d is Friday",day_no);
//         break;
//     case 6:
//         printf(" Day %d is Saturday",day_no);
//         break;
//     case 7:
//         printf(" Day %d is Sunday",day_no);
//         break;
//     default:
//         printf("You entered wrong Day_no");
    
// }
    
// }