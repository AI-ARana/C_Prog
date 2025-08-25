// If : single condition
// if Else : two conditions
// else if : 

#include <stdio.h>

// int main() {
//   int x = 20;
//   system("cls");
//   if (x > 0) {  // -20>0
//     printf("x is positive number");
//   }
//   else if(x==0){
//     printf("x is Zero");
//   }
//   else{
//     printf("x is negative number");
//   }  
//   return 0;
// }

// Ternary Operator: short hand of if else
// variable =(condition)?expressionTrue:expressionFalse
// int main(){
// int time=18;
// system("cls");
// if (time<20){
//     printf("Day Time");
// }
// else
//     printf("Night Time ");

// (time<20)?printf("Day Time"):printf("Night Time");

// }

// Switch Statement:
// switch(expression){
//     case x:
//         code
//     break;
//     case y:
//         code
//     break;

//     default:
//         code
// }

// int main(){
//     int day=8;
//     //char a='A';
//     system("cls");
//     switch(day){
//         case 1:
//             printf("Monday");
//             break;
//         case 2:
//             printf("Tuesday");
//             break;
//         case 3:
//             printf("Wednesday");
//             break;
//         case 4:
//             printf("Thursday");
//             break;
//         case 5:
//             printf("Friday");
//             break;
//         case 6:
//             printf("Saturday");
//             break;
//         case 7:
//             printf("Sunday");
//             break;
//         default:
//             printf("Enter value between 1 to 7");
        
//         return 0;
//     }
// }

// Loop: while loop:
// while(condition){
//     code
// }

int main(){
    int i=0;
    system("cls");
    while(i<10){
        printf("%d\n",i);
        i++; //i=i+1;
    }
    printf("Outside while %d\n",i);
}