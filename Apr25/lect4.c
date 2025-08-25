// #include<stdio.h>
// int main()
// {
//     int a=100+50;
//     system("cls");
    
//     printf("The value of a is :%d",a);
//     int b=a+100;
//     printf("\nThe value of b is :%d",b);
//     int c=a+b;
//     printf("\nThe value of c is :%d",c);
//     return 0;
// }

// Arithmetic Operators

// #include<stdio.h>
// int main()
// {
//     int a, b, sum, sub, mul, div, mod, inc,dcr;
//     system("cls");

//     a=10, b=3;
//     // Addition (+)
//     sum=a+b;
//     printf("The value of sum is: %d",sum);
//      // Subtraction (-)
//      sub=a-b;
//      printf("\nThe value of sub is: %d",sub);
//     // Multiplication (*)
//     mul=a*b;
//     printf("\nThe value of mul is: %d",mul);
//     // Division (/)
//     div=a/b;
//     printf("\nThe value of div is: %d",div);
//     // Modulus (%)
//     mod=a%b;
//     printf("\nThe value of mod is: %d",mod);
//     // Increment (++x/y++)
//     printf("\nThe value of a: %d and The value of b: %d",a,b);
//     inc=++a; //inc= a+1;
//     int inc1=b++;
//     printf("\nThe value of inc is: %d",inc);
//     printf("\nThe value of inc1 is: %d",inc1);
//     printf("\nThe value of b is: %d",b);

//     Decrement (--x/y--)
//     printf("\nThe value of a: %d and The value of b: %d",a,b);
//     dcr=--a; //inc= a-1;
//     int dcr1=b--;
//     printf("\nThe value of dcr is: %d",dcr);
//     printf("\nThe value of dcr1 is: %d",dcr1);
//     printf("\nThe value of b is: %d",b);

//     return 0;

// }

// Comparision Operators

// #include<stdio.h>
// int main(){
//     int x, y, z;
//     x=10,y=5,z=10;
//     system("cls");
//     // Equal to (==)
//     printf("Equal to: %d",x==z);
//     // Not Equal (!=)
//     printf("%d",x!=y);
//     // Greater than (>)
//     printf("%d",x>y);
//     // Greater than or Equal to (>=)
//     printf("%d",x>=y);

//     // less than (<)
//     printf("%d",y<z);
//     // less than or Equal to (<=)
//     printf("%d",y<=z);
//     return 0;
// }

//Logical Operators

// x   y   and(&)   OR(||)
// 0   0   0           0
// 0   1   0           1
// 1   0   0           1
// 1   1   1           1

#include<stdio.h>
int main()
{
    int x, y, z;
    x=5,y=10;
    system("cls");

    // AND (&&)

    //printf("%d", x>3 && x<5);

    // OR (||)

    //printf("%d", x>3 || x<5);

    // NOT (!)

    printf("%d", !(x>3 || x<5));
    return 0;
}