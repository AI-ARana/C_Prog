// Conditions Statements
// if statements

// Sysntax
// if(condition){
//     Block of code to be executed if the 
//     condition is true.
// }

// WAP to check the number is Positive or Negative
// # include <stdio.h>
// int main(){
//     int n;
//     system("cls");
//     printf("Enter the value of n:");
//     scanf("%d",&n);

//     if(n>0){
//         printf("The number %d is positive",n);
//     }
//     else if (n>0)
//     {
//         printf("The number %d is negative",n);
//     }
//     else{
//         printf("The number %d is Zero",n);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int time;
//     system("cls");
//     printf("Enter the time:");
//     scanf("%d",&time);

//     if(time>5 && time< 12)
//         printf("%d Good Morning",time);
//     else if(time>12&&time<16)
//         printf("%d Good Afternoon",time);
//     else if(time>16 && time<17)
//         printf("%d Good Evening",time);
//     else 
//         printf("%d Good Night",time);
//     return 0;

// }

// switch Statement
// Syntax Switch
// switch (expression){
//     case x:
//         block of code
//         break;
//     case y:
//         block of code
//         break;
//     default:
//         code block
// }

// WAP to print day name using if elseif else statement
// WAP to print day name using switch statement
// #include<stdio.h>
// int main(){
//     int day;
//     system("cls");
//     printf("Enter the day number:");
//     scanf("%d",&day);

//     // Switch Statement
//     switch(day){
//         case 1:
//         // if(day==1)
//            printf("%d Monday", day);
//            break;
//         case 2:
//         // else if (day==2)
//             printf("%d Tuesday",day);
//             break;
//         case 3:
//         // else if (day==3)
//             printf("%d Wednesday",day);
//             break;
//         case 4:
//         // else if (day==4)
//             printf("%d Thursday",day);
//             break;
//         case 5:
//         // else if (day==5)
//             printf("%d Friday",day);
//             break;
//         case 6:
//         // else if (day==6)
//             printf("%d Saturday",day);
//             break;
//         case 7:
//         // else if (day==7)
//             printf("%d Sunday",day);
//             break;
//         default:
//         // else
//             printf("You entered wrong choice");
//     }
//     return 0;
// }

// Looping 
// While loop
// Syntax:
//  while(condition){
//     code block
//  }

//do-while loop

// Syntax:
// do{
//     code block
// }while (condition)

// #include<stdio.h>
// int main(){
//     int i=7;
//     system("cls");

//     do{
//         printf("%d\n",i);
//         i++; //i=i+1 || i+=1
//     }while(i<=5);
//     return 0;
// }

// Real life example of While loop

#include<stdio.h>
// int main(){
//     int counter=3;
//     system("cls");

//     while(counter>0)
//     {
//         printf("%d\n",counter);
//         counter--;
//     }
//     printf("Happy Holi!\n");
//     return 0;
// }

// WAP to print even number between 0 to 10
// int main(){
//     int i=0;
//     while(i<=10){
//         printf("%d\n",i);
//         i+=2;
//     }
//     return 0;
// }

// WAP to reverse the number

// int main(){
//     int n, r=0, x; 
//     system("cls");
//     printf("Enter the number:");
//     scanf("%d", &n);
//     x=n;
//     while(n){
//         r=r*10+n%10;
//         n/=10;
//     }
//     printf("The reverse of %d is %d",x,r);
//     return 0;
// }

// for loop
// syntax:
// for(exp1;exp2;exp3){

// }
// for(initilization;condition;increment/decrement){

// }
// for(;condition;)

// WAP to print number between 0 to 10
// int main(){
//     int i;
//     system("cls");
//     // while(i<=10)
//     for(i=0;i<=10;i++)
//     {
//         printf("%d\n",i);
//         //i+=2;
//     }
//     return 0;
// }

// int main(){
//     int i,j;
//     system("cls");

//     //outer loop
//     for(i=1;i<=2;i++){
//         printf("Outer Loop: %d\n",i);

//         for(j=1;j<=3;j++){
//             printf("Inner Loop: %d\n",j);
//         }
//     }
//     return 0;
// }

