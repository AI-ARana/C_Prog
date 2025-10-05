// Data Type in case
// int number;
// number is variable name that can store integer values.
// 1. Primitive Data Type: 
//     int, char, float, double,void
// 2. Derived Type:
//     array, pointers, function

//     int array[50];
// 3. User Defined Data Type:
//     stucture, union, enum

//     struct str{int a, char c}

// Primitive Data type

// Integer

// # include<stdio.h>

// int main(){
//     short int a=32767;
//     int b=1;
//     system("cls");
//     // printf("The value of b:%d",b);
//     short int c=a+b;
//     int x=sizeof(float);
//     printf("Size of float: %d", x);
//     // printf("\nSum of a and b:32768");
//     // printf("\nSum of a and b:%d",c);
//     return 0;
// }

// Unsigned int: 
// short int:
// long int
// Chatacter Data Type

// #include<stdio.h>

// int main(){
//     char ch='A';
//     system("cls");

//     printf("Character ch: %c",ch);
//     return 0;
// }

//Float Data Type - Double Data Type
// #include<stdio.h>

// int main(){
//     double val=12.456666666666666666;
//     system("cls");

//     printf("Double Value: %lf",val);
//     return 0;
// }



// #include<stdio.h>

// void main()
// {
//     short a;
//     long b;
//     long long c;
//     system("cls");
//     printf("Size of short: %d\n", sizeof(a));
//     printf("Size of long: %d\n", sizeof(b));
//     printf("Size of long long: %d\n", sizeof(c));
//     // return 0;

// }

// int regID, age, salary, phoneNo;
// float salary1;
// double price;
// char grade='A';

// #include<stdio.h>

// int main()
// {
//     unsigned int x=35;
//     int y=-35;
//     int z=36;
//     unsigned int a=42;
//     system("cls");
//     printf("x=%u, y=%d, z=%d, a=%u",x,y,z,a);
//     return 0;
// }

// Aruthmetic Operators

// #include<stdio.h>
// int main()
// {

//     float a=10, b=3;
//     float sum, sub, mul, div, mod;
//     system("cls");
//     sum=a+b;
//     sub=a-b;
//     mul=a*b;
//     div=a/b;
//     // mod=a%b;

//     printf("Sum: %.2f\n",sum);
//     printf("Sub: %f\n",sub);
//     printf("Mul: %f\n",mul);
//     printf("Div: %.1f\n",div);
//     // printf("Mod: %f\n",mod);

//     return 0;
// }

#include<stdio.h>
int main()
{
   int a=10, b=100;
   float x=10.5, y=100.5;
   system("cls");   
   
   printf("++a=%d\n", ++a);
   printf("a++=%d\n",a++);
   printf("a=%d\n",a);// a=a+1
   printf("--b=%d\n",--b);// b=b-1
   printf("++x=%f\n",++x);
    printf("--y=%f\n",--y);
    return 0;

}
