// WAP Multiplication of Table using for loop
// #include<stdio.h>

// int main(){
//     int n,r;
//     system("cls");
//     printf("Enter a number to print table:");
//     scanf("%d",&n);
//     printf("\nEnter the range of table:");
//     scanf("%d",&r);

//     printf("Table of %d\n",n);
//     for(int i=1;i<=r;i++){
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// WAP Multiplication of Table using Nested For Loop
// #include<stdio.h>

// int main(){
//     int n,r;
//     system("cls");
//     printf("Enter a number to print table:");
//     scanf("%d",&n);
//     printf("\nEnter the range of table:");
//     scanf("%d",&r);

//     printf("Table of %d\n",n);
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=r;j++)
//         {

//         printf("%d x %d = %d\n",n,i,n*i);
//     }
//     printf("\n");
//     }
//     return 0;
// }

// Nested For Loop

// #include <stdio.h>

// int main(){
//     system("cls");
//     for(int i=0;i<=2;i++){
//         printf("Outer for loop\n");
//         printf("\nThe value of i: %d\n",i);
       
//         for(int j=0;j<=2;j++){
//             printf("\nInner for loop\n");
//             printf("\nThe value of j: %d\n",j);
//         }
        
//     }
//     return 0;
// }

// Print a pyramid Pattern

// #include<stdio.h>
// int main(){
//     int r;
//     system("cls");
//     printf("Enter the number of rows:");
//     scanf("%d",&r);

//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=r-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=(2*i-1);k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// WAP to print number Triangle

// #include <stdio.h>

// int main(){
//     int r;
//     system("cls");
//     printf("Enter the number of rows:");
//     scanf("%d",&r);

//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// WAP to Generate the Chessboard Pattern

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
    system("cls");
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if((i+j)%2==0){
                printf("\033[47m   "); // 47=white
            } else{
                printf("\033[40m   "); //40 =black
            }
        }
        printf("\033[0m\n");
    }
    return 0;
}