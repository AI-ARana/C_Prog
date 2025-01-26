// Function in C Programming

// Syntax

// return_type functionName (parameters){}
// void myFun(){
//     code to be execute
 //   return value;
// }

// myFun()
// l=strlen(s4);

#include<stdio.h>

// int main(){
//     int a=5,b=7,c;
//     system("cls");
//     c=a+b;
//     printf("%d",c);
// }

// int add(int a, int b);

// int main(){
//     int n1,n2,sum;
//     system("cls");

//     printf("Enter two numbers: ");
//     scanf("%d %d", &n1,&n2);
//     sum=add(n1,n2);

//     printf("The sum of %d and %d is: %d\n",n1,n2,sum);

//     return 0;
// }

// int add(int a, int b){
//     return a+b;
// }

// #include<stdio.h>
// void greet(); // Declaration

// int main(){
//     system("cls");
//     greet(); // Calling
//     return 0;
// }
// //definition
// void greet(){
//     printf("Hello! Welcome in Shoolini University");
// }

// Average of numbers

// #include<stdio.h>

// float avg(int a, int b, int c);

// int main(){
//     int n1, n2,n3;
//     float ag;
//     system("cls");

//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&n1,&n2,&n3);

//     ag=avg(n1,n2,n3);

//     printf("The average of %d, %d and %d is: %.2f\n",n1,n2,n3,ag);

//     return 0;
// }

// float avg(int a, int b, int c){
//     return (a+b+c)/3.0;
// }

// Recursive Function (Factorial)

#include<stdio.h>

int fact(int a);

int main(){
    int n;
    system("cls");
    printf("Enter a positive number: ");
    scanf("%d",&n);


    printf("Factorial of %d is: %d\n",n,fact(n));

    return 0;
}

int fact(int a){
    if(a==0 ||a==1){
        return 1;
    }else
        return a*fact(a-1); // Recursive call
}