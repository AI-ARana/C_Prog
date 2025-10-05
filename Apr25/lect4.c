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

// #include<stdio.h>
// int main()
// {
//     int x, y, z;
//     x=5,y=10;
//     system("cls");

//     // AND (&&)

//     //printf("%d", x>3 && x<5);

//     // OR (||)

//     //printf("%d", x>3 || x<5);

//     // NOT (!)

//     printf("%d", !(x>3 || x<5));
//     return 0;
// }

//Switch Case in C Programming

// #include<stdio.h>
// int main(){
//     int day;
//     system("cls");
//     printf("Enter the day number (1-7): ");
//     scanf("%d",&day);
//     if(day==1){
//         printf("Monday");
//     }
//     else if(day==2){
//         printf("Tuesday");
//     }
//     else if(day==3){
//         printf("Wednesday");
//     }
//     else if(day==4){
//         printf("Thursday");
//     }
//     else if(day==5){
//         printf("Friday");
//     }
//     else if(day==6){
//         printf("Saturday");
//     }
//     else if(day==7){
//         printf("Sunday");
//     }
//     else{
//         printf("Invalid Input");
//     }
//     return 0;
// }

// Syntax of Switch Case
// switch(expression){
//     case constant1:
//         // code to be executed if expression matches constant1
//         break;
//     case constant2:
//         // code to be executed if expression matches constant2
//         break;
//     ...
//     default:
//         // code to be executed if expression doesn't match any case
// }


// #include<stdio.h>
// int main(){
//     int day;
//     system("cls");
//     printf("Enter the day number (1-7): ");
//     scanf("%d",&day);
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
//             printf("Invalid Input");

//     }
//     return 0;
// }


// WAP-> To Calculate the Employee salary which is calculate as:
// Total_Salary = Basic_salary + DA + TA -HRA
// if Basic_salary <35000 then DA is 4 % of Basic_Salary
// and TA is 3% of Basic_Salary
// and HRA is 5% of Basic_Salary
// if Basic_salary >=35000 and <80000 then DA is 6 % of Basic_Salary
// and TA is 5% of Basic_Salary
// and HRA is 7% of Basic_Salary
// if Basic_salary >=80000 then DA is 8 % of Basic_Salary
// and TA is 7% of Basic_Salary 
// and HRA is 10% of Basic_Salary

// So, Calculate the Total_Salary and Also Display the Complete Information of Employee

// #include<stdio.h>
// int main()
// {
//     float ts,bs,da,ta,hra;
//     system("cls");  
//     printf("Enter the Basic Salary: ");
//     scanf("%f",&bs);

//     if(bs<35000){
//         da=0.04*bs; // da=4/100*bs; // bs=bs*4/100;
//         ta=0.03*bs;
//         hra=0.05*bs;
//         ts=bs+da+ta-hra;
//     printf("The Basic Salary is=%.2f.\n The DA is 4%%:%.2f.\n The TA is 3%%: %.2f.\n The HRA is 5%%:%.2f.\n The Total Salary is: %.2f",bs,da,ta,hra,ts);
//     }
//     else if(bs>=35000 && bs<80000){ // Logical AND Operator
//         da=0.06*bs;
//         ta=0.05*bs;
//         hra=0.07*bs;
//         ts=bs+da+ta-hra;
//     printf("The Basic Salary is=%.2f.\n The DA is 6%%:%.2f.\n The TA is 5%%: %.2f.\n The HRA is 7%%:%.2f.\n The Total Salary is: %.2f",bs,da,ta,hra,ts);
//     }
//     else{
//         da=0.08*bs;
//         ta=0.07*bs;
//         hra=0.10*bs;
//         ts=bs+da+ta-hra;
//     printf("The Basic Salary is=%.2f.\n The DA is 8%%:%.2f.\n The TA is 7%%: %.2f.\n The HRA is 10%%:%.2f.\n The Total Salary is: %.2f",bs,da,ta,hra,ts);
//     }

    
// return 0;
// }  


// Iterative Statements in C Programming
// 1. While Loop
// 2. Do While Loop     
// 3. For Loop  

// Syntax while(condition){     }

// #include<stdio.h>
// int main(){
//     int counter=10;
//     system("cls");
//     while(counter>0){
//         printf("%d\n",counter);
//         counter--;   //i=i+1; //i+=1;  
//         //break;   
//     }
//     printf("Welcome in Shoolini University !\n");
//     printf("You Sucessfully Completed the Admission Process !");
//     return 0;
// }
// WAP to print 1,2,3,4,5,6
// 

// Syntax for(initialization; condition; increment/decrement){    }

// #include<stdio.h>
// int main(){
//     int rows;
//     system("cls");
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);

//     for(int i=0;i<rows;i++) // i=0 0<=5=>T
//     //1<=5=>T
//     {
//         for(int j=0;j<=i;j++) // j=0 0<=0=>T
//         {
//             printf("%d ",i+1);
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int rows;
    system("cls");
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
 
    for(int i=0;i<rows;i++) // i=0 0<=5=>T
    //1<=5=>T
    {
        for(int j=0;j<(rows-i);j++) 
        {
            printf("");
        }
        for(int k=0;k<=i;k++) // j=0 0<=0=>T
        {
            printf("%d",k+1);
        }
        printf("\n");
       
    }
    return 0;
}  