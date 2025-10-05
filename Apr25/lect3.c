// To Calculate and output the 
// total cost of numbers of items.

// #include <stdio.h>

// int main()
// {
// int items=50;
// float item_cost=10.25;
// char curr='$';
// system("cls");
// //  printf("Enter the number of items:");
// //  scanf("%d",&items);
// //  printf("Enter the cost per items:");
// //  scanf("%f",&item_cost);

//  float total_cost;

//  total_cost=items * item_cost;

//  printf("Number of items: %d\n",items);
//  printf("Cost per item: %c %.2f\n",curr,item_cost);

//  printf("Total cost= %c %.2f",curr,total_cost);
// return 0;
// }

//  Calculate the sum of five subjects marks and
// also calulate the percentage.

// #include<stdio.h>
// int main(){
//     int C_Prog, Data_Structure, AI, Data_Science, English;
//     int total, max_marks, Subjects;
//     float percentage;

//     system("cls");
//     printf("Enter Total Number of Subjects:");
//     scanf("%d",&Subjects);
//     printf("Enter the marks of C_prog:");
//     scanf("%d",&C_Prog);
//     printf("Enter the marks of Data_Structure, AI: ");
//     scanf("%d %d", &Data_Structure,&AI);
//     printf("Enter the marks of Data_Science, English: ");
//     scanf("%d %d", &Data_Science,&English);
//     printf("Enter Maximum Marks:");
//     scanf("%d",&max_marks);

//     total= C_Prog + Data_Structure + AI + Data_Science + English;
//     printf("Total marks: %d\n",total);

//     percentage=(total*100)/max_marks;
//     printf("The Percentage is: %.2f\n %",percentage);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a=5,b=2;
//     system("cls");
//     float c=(float)a/b;
//     printf("%.1f",c);

//     // Implicit Type Conversion
//     // Automatic Conversion: Int to Float
//     // float f=10;
//     // int i=10.99;
//     // system("cls");
//     // printf("%f\n",f);
//     // printf("%d",i);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int maxSr=1000;
//     int plySr=745;
//     system("cls");

//     float per=(float)plySr/maxSr*100;

//     printf("Player percentage is: %.2f",per);
//     return 0;
// }

// cost constant

// #include<stdio.h>
// int main(){
//     const int x;
//     // x=20;
//     system("cls");

//     printf("%d",x);
//     return 0;
// }


// char ch='A';
// Output= ASCII value of A=65
// Find the value of a character using implicit conversion with format specifier

// #include<stdio.h>
// int main(){
//     char c ='k';
//     system("cls");

//     // %d display the integer value of a charcter
//     // %c displays the actual character
//     printf("The ASCII value of %c is %d",c,c);
//     return 0;   
// }

// ASCII value of a character using explicit conversion (Typecasting)

// #include<stdio.h>
// int main(){
//     char c='k';
//     int ascii;
//     system("cls");

//     ascii=(int)c;

//     printf("The ASCII value of %c is %d",c,ascii);
//     return 0;   
// }


// Decision Making Statements

// #include<stdio.h>
// int main(){
//     int age;
//     int c;
//     system("cls");
//     printf("Enter 1 if you are Indian Citizen:");
//     scanf("%d",&c);
    
//     if(c==1)
//     {
//         printf("You are Indian Citizen.\n");
//         printf("Enter your age:");
//         scanf("%d",&age);
//     if(age>=18){
//         printf("You are eligible to vote.");
//     }
//     else{
//         printf("You are not eligible to vote.");
//     }
//     }
// else{
//     printf("You are not Indian Citizen."); 
//  }
//     return 0;
// }

// if -else -if -Ladder in c

// #include<stdio.h>
// int main(){
//     int marks;
//     system("cls");
//     printf("Enter your marks:");
//     scanf("%d",&marks);

//     if(marks>=90 && marks<=100){
//         printf("Your Grade is A+");
//     }
//     else if(marks>=80 && marks<90){
//         printf("Your Grade is A");
//     }
//     else if(marks>=70 && marks<80){
//         printf("Your Grade is B+");
//     }
//     else if(marks>=60 && marks<70){
//         printf("Your Grade is B");
//     }
//     else if(marks>=50 && marks<60){
//         printf("Your Grade is C");
//     }
//     else if(marks>=40 && marks<50){
//         printf("Your Grade is D");
//     }
//     else if(marks>=0 && marks<40){
//         printf("You are Fail.");
//     }
//     else{
//         printf("Invalid Marks.");
//     }
//     return 0;
// }

// Switch Case Statement
// 

// Conditional Operators

// #include<stdio.h>
// int main(){ 
//     int age;
//     char c;
//     system("cls");
//     printf("Enter your age:");
//     scanf("%d",&age);

//     c=(age>=18)?'Y':'N';

//     if(c=='Y'){
//         printf("You are eligible to vote.");
//     }
//     else{
//         printf("You are not eligible to vote.");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int var;
//     int flag;
//     system("cls");
//     printf("Enter the value of flag (0 or 1):");
//     scanf("%d",&flag);  
//     //var=flag==0?25:-25;   a==1?b:c  a=1 b a=0
//     if(flag==0){
//         var=25;
//     }
//     else{
//         var=-25;
//     }
//     printf("Value of var when flag is %d: %d\n",flag,var);
//     int x=var-10;
//     printf("Value of x is: %d",x);
//     return 0;   
// }


#include<stdio.h>
int main()
{
    char c, vow;

    printf("Enter an alphabet:");
    scanf("%c",&c);
    vow=('a','e','i','o','u','A','E','I','O','U');
    if (vow==c)
    {
        printf("%c is a Vowel",c);
    }
    else
    {
        printf("%c is a Consonant",c);
    }   
    return 0;
}