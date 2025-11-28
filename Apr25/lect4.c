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

// #include<stdio.h>
// int main(){
//     int rows;
//     system("cls");
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
 
//     for(int i=0;i<rows;i++) // i=0 0<=5=>T
//     //1<=5=>T
//     {
//         for(int j=0;j<(rows-i);j++) 
//         {
//             printf("");
//         }
//         for(int k=0;k<=i;k++) // j=0 0<=0=>T
//         {
//             printf("%d",k+1);
//         }
//         printf("\n");
       
//     }
//     return 0;
// }  


// WAP to print the natural number in reverse order

// input: 5

// output: 5 4 3 2 1

// #include<stdio.h>
// int main(){
//     int n;
//     system("cls");
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     //for (int i=0;i<n;i++)
//     for(int i=n;i>=1;i--) // i=5 5>=1=>T
//     {
//         printf("%d ",i); 
//     }
//     return 0;
// }

// //WAP to print alphabets fron a-z

// #include<stdio.h>
// int main(){ 
//     //char ch;
//     int ch;
//     system("cls");
//     printf("Alphabet a-z: ");
//     // Print alphabets
//     // for(ch='a';ch<='z';ch++) // ch='a' 'a'<='z'=>T
//     // {
//     //     printf("%c ",ch);
//     // }
//     // print alphabets using ASCII values
//     for (ch=97;ch<=122;ch++) // ch=97 97<=122=>T
//     {
//         printf("%c ",ch);
//     }
//     return 0;
// }

// // WAP to print multiplication table of a given number
// #include<stdio.h>
// int main(){     
//     int n;
//     system("cls");
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=20;i++) // i=1 1<=10=>T
//     {
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// number: 45689 no of digits: 5
// WAP to count the number of digits in a given number using loop

// #include<stdio.h>
// int main(){
//     int n;
//     int count=0;
//     system("cls");
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     while(n!=0){ // 45689!=0=>T
//         n=n/10; // n=4568 4568!=0=>T
//         count++; // count=1 2 3 4 5
//     }
//     printf("The number of digits is: %d",count);
//     return 0;
// }

// number: 45689 no of digits: 5
// WAP to count the number of digits in a given number without using loop

// #include<stdio.h>
// #include<math.h>
// int main(){ 
//     long long n;
//     int count;
//     system("cls");
//     printf("Enter the number: ");
//     scanf("%lld",&n);
//     //count=log10(n)+1; // count= log10(45689)+1=4.65+1=5.65=5
//     //count=(n==0)?1:log10(n)+1; // if n=0 then count=1 else count=log10(n)+1
//    if(n==0){
//     count=1;
//     }
//     else{
//         count=log10(n)+1;
//     }
//     printf("The number of digits is: %d",count);
//     return 0;
// }

// WAP to print reverse of a given number

// 123==>321

// #include<stdio.h>
// int main(){
//     int n,rev=0,rem;
//     system("cls");
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     while(n!=0){ // 123!=0=>T
//         rem=n%10; // rem=3 2 1
//         rev=rev*10+rem; // rev=0*10+3=3 3*10+2=32 32*10+1=321
//         n=n/10; // n=12 1 0
//     }
//     printf("The reverse of the number is: %d",rev);
//     return 0;
// }

// Math.h library Functions in C Programming
// #include<stdio.h>
// #include<math.h>    
// int main()
// {
//     int a=5,b=2,c,d;
//     system("cls");
//     d=sqrt(50); // d=sqrt(5)=2.236=2
//     printf("The value of d is: %d\n",d);
//     c=pow(a,b); // c=5^2=25
//     printf("The value of c is: %d",c);  
//     return 0;
// }


// Functions in C Programming

// return_type function_name (parameterslist){function bodt}

// Calling of Function   function_name(arguments list);

// // WAP to input two number from user and find sum

// #include<stdio.h>
// int sum(int n1, int n2); // Function Declaration
// int main(){
//     int n1, n2, sum_res;
//     system("cls");
//     printf("Enter two numbers: ");
//     scanf("%d %d",&n1,&n2); 

//     sum_res=sum(n1,n2); // Function Calling
//     printf("The sum of %d and %d is: %d",n1,n2,sum_res);
//     return 0;   

// }

// int sum(int n1, int n2){ // Function Definition
//     return n1+n2;
// }   


// // Call by Value

// #include<stdio.h>
// void swap(int a, int b){
//     printf("Before swapping: a=%d, b=%d\n",a,b);
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("After swapping: a=%d, b=%d\n",a,b);

// } 

// int main(){
//     int x=5,y=10;
//     system("cls");
//     printf("Before swapping: x=%d, y=%d\n",x,y);
//     swap(x,y); // Call by Value
//     printf("After swapping: x=%d, y=%d",x,y);
//     return 0;
// }

// Call by Reference

// #include<stdio.h>
// void swap(int *a, int *b){
//     printf("Before swapping: a=%d, b=%d\n",*a,*b);
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     printf("After swapping: a=%d, b=%d\n",*a,*b);

// } 

// int main(){
//     int x=5,y=10;
//     system("cls");
//     printf("Before swapping: x=%d, y=%d\n",x,y);
//     swap(&x,&y); // Call by Value
//     printf("After swapping: x=%d, y=%d",x,y);
//     return 0;
// }


// Return Statement in C Programming

// Syntax : return expression;

// // WAP to find maximum number among two numbers using function

// #include<stdio.h>

// int max(int num1, int num2); // Function Declaration

// int main(){
//     int num1, num2, maximum;
//     system("cls");

//     printf("Enter two numbers: ");
//     scanf("%d %d",&num1,&num2);

//     maximum=max(num1,num2); // Function Calling
//     printf("The maximum number between %d and %d is: %d",num1,num2,maximum);
//     return 0;
// }

// int max(int num1, int num2){ // Function Definition
//     if(num1>num2){
//         return num1;
//     }
//     else{
//         return num2;
//     }
// }   


// Function Categories in C Programming
//1. Library Functions
//2. User Defined Functions

//User Defined functions categories in four types
//1. Function with no argument and no return type
//2. Function with argument and no return type
//3. Function with no argument and return type
//4. Function with argument and return type

// 1. Function with no argument and no return type

// Syantx: void function_name(void){function body}

// WAP tp print fibonacci series using function with no argument and no return type

// #include<stdio.h>
// void generateFib();

// int main()
// {
//     generateFib();
//     return 0;
// }

// void generateFib()
// {
//     int n1=0,n2=1,n3,number;
//     system("cls");
//     printf("Enter the number of terms: ");
//     scanf("%d",&number);
//     printf("Fibonacci Series: %d %d ",n1,n2);
//     for(int i=2;i<number;i++) // i=2 2<=10=>T
//     {
//         n3=n1+n2; // n3=0+1=1 1+1=2 1+2=3 2+3=5 3+5=8 5+8=13
//         printf("%d ",n3);
//         n1=n2; // n1=1 1 2 3 5
//         n2=n3; // n2=1 2 3 5 8
//     }
// }   

//2. Function with argument and no return type

// Syntax: void function_name(data_type parameter1, data_type parameter2,....)
//{function body}

// // WAP to print natural number using function with argument and no return type

// #include<stdio.h>
// void printNatural(int start, int end);

// int main()
// {
//     int s,e;
//     system("cls");
//     printf("Enter lower range to print the natural numbers:");
//     scanf("%d",&s);
//     printf("Enter upper limit to print the natural numbers:");  
//     scanf("%d",&e);
//     printNatural(s,e);

//     return 0;

// }

// // Function Definition
// void printNatural(int start, int end)
// {
//     printf("Natural numbers from %d to %d are:\n",start,end);
//     // for(int i=start;i<=end;i++) // i=1 1<=10=>T
//     // {
//     //     printf("%d ",i);        
//     // }

//     while(start<=end) // 1<=10=>T
//     {
//         printf("%d ",start);
//         start++; // start=start+1;
//     }
// }


// // 3. Function with no argument and return type

// // Syntax: return_type function_name(void)
// //{function body}

// // WAP to print random prime number using function with no argument and return type

// #include<stdio.h>
// #include<stdlib.h>  // used for rand() function

// // Declaration of Function

// int randomPrime();

// int main()
// {
//     int i;
//     system("cls");
//     printf("Random 5 prime numbers are:\n");
//     for(i=1;i<=5;i++) // i=1 1<=5=>T
//     {
//         printf("%d ",randomPrime()); // Function Calling
//     }
//     return 0;
// }

// // Definition of Function

// int randomPrime()
// {
//     int i,n,isPrime;
//     while(!isPrime) // Loop until a prime number is found
//     {
//       n=rand(); // Generate a random number
//         isPrime=1; // Assume n is prime

//         for(i=2;i<=n/2;i++) // Check for factors from 2 to n/2
//         {
//             if(n%i==0) // If n is divisible by i, it's not prime
//             {
//                 isPrime=0; // Set isPrime to false
//                 break; // Exit the loop
//             }
//         }
//         if(isPrime==1) // If n is prime is equal to 1
//         {
//             return n; // Return the prime number
//         }
//     }
// }

// 4. Function with argument and return type

// Syntax: return_type function_name(data_type parameter1, data_type parameter2,...)

// {function body}

// WAP to check even odd using function with argument and return type

// # include<stdio.h>
// int checkEvenOdd(int num); // Function Declaration

// int main()
// {
//     int number, result;
//     system("cls");
//     printf("Enter an integer: ");
//     scanf("%d",&number);

//     result=checkEvenOdd(number); // Function Calling

//     if(result==1)
//     {
//         printf("%d is even number.",number);
//     }
//     else
//     {
//         printf("%d is odd number.",number);
//     }
//     return 0;
// }

// // Function Definition
// int checkEvenOdd(int num)
// {
//     if(num%2==0)
//     {
//         return 1; // Even
//     }
//     else
//     {
//         return 0; // Odd
//     }
// }


// Recursive functions in C Programming

// void rec_fun()
//{
    // some code
    // rec_fun(); // Function Calling itself
    // unreachable code
// }
// int main()
// {
//     rec_fun();
// }


// // WAP to print n natural number in reverse order using recursive function

// #include<stdio.h>

// void print(int n); // Function Declaration

// int main()
// {
//     system("cls");
//     print(5);

//     return 0;
// }

// void print(int n){
//     printf("%d ",n);  // print the current value of n

//     // Base condition to terminate the recursion
//     if(n<=1)
//     {
//         return ; // Return and make no further recursive calls
//     }
//     print(n-1); // Recursive call with decremented value of n-1
// }

// // WAP to calculate factorial of a number using recursive function

// #include<stdio.h>

// unsigned long long factorial(int n); // Function Declaration

// int main()
// {
//     int number;
//     unsigned long long fact;
//     system("cls");
//     printf("Enter a positive integer: ");
//     scanf("%d",&number);

//     fact=factorial(number); // Function Calling

//     printf("Factorial of %d = %llu",number,fact);
//     return 0;
// }

// unsigned long long factorial(int n) // Function Definition
// {
//     // if(n>=1)
//     //     return n*factorial(n-1); // Recursive call
//     // else
//     //     return 1; // Base condition

//     if(n==0)
//         return 1; // Base condition
//     else        
//          return n*factorial(n-1); // Recursive call
// }


// int main () {} vs int main (void) {} 


// # include<stdio.h>
// int main (void) 
// {
//     system("cls");

//     int a=10;
//     int b=20;

//     int sum = a + b;
//     printf("The sum of %d and %d is: %d", a, b, sum);
//     return 0;
// }


// Array: same type of data multiple values

// int array_name [size];
// One Dimentional Array  1 rows and multiple columns 1 * n
// Multi Dimentional Array  multiple rows and multiple columns m * n

// // WAP to find largest and second largest elements in array.

// #include<stdio.h>
// #include<limits.h>  // for INT_MIN
// #define MAX_SIZE 1000  // Maximum size of the array

// int main()
// {
//     int arr[MAX_SIZE], size,i;
//     int max1, max2;
//     system("cls");

//     /* input size of array*/

//     printf("Enter size of array (1-1000): ");
//     scanf("%d",&size);

//     /* Input array elements*/

//     printf("Enter elements in array: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     max1=max2=INT_MIN; // Initialize max1 and max2 to the smallest integer value

//     /* Check for first largest and Second Largest element   */

//     for(i=0;i<size;i++)
//     {
//         if(arr[i]>max1)
//         {
//             /* If current elements of the array is first largest
//             then make current max as second max and then max as current array 
//             element */

//             max2=max1;
//             max1=arr[i];
//         }
//         else if(arr[i]>max2 && arr[i]!=max1)
//         {
//             max2=arr[i];
//         }
//     }

//     printf("The first largest element is %d\n",max1);
//     printf("The second largest element is %d\n",max2);
//     return 0;
// }

// # include<stdio.h>
// int main()  
// {
//     float arr[5]; // Declaration of Array
//     system("cls");
 
//     // Input values in array
//     printf("Enter 5 Floating point values: \n");
//     for(int i=1;i<=5;i++) // i=0 0<=4=>T
//     {
//         printf("Enter element %d: ",i);
//         scanf("%f",&arr[i]);
//     }
 
//     // Print values of array
//     printf("You entered following floating point values: \n");
//     for(int i=0;i<5;i++) // i=0 0<=4=>T
//     {
//         printf("Element %d: %.2f\n",i+1,arr[i]);
//     }
 
//     return 0;
// }


// // WAP to count total even and odd numbers in an array
// #include<stdio.h>
// #define MAX_SIZE 1000  // Maximum size of the array
// int main()
// {
//     int arr[MAX_SIZE], size,i;
//     int even, odd;
//     system("cls");

//     /* input size of array*/

//     printf("Enter size of array (1-1000): ");
//     scanf("%d",&size);

//     /* Input array elements*/

//     printf("Enter elements in array: \n");
//     for(i=0;i<size;i++)
//     {
        
//         scanf("%d",&arr[i]);
//     }

//     /* Assuming that 0 even and odd number*/

//     even=odd=0;
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]%2==0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     printf("Total even numbers: %d\n",even);
//     printf("Total odd numbers: %d\n",odd);
//     return 0;
// }


// Multi Dimentional Array in C Programming

// WAP to add two matrices

// #include<stdio.h>
// #define MAX_ROWS 2 // Maximum number of rows       
// #define MAX_COLS  3// Maximum number of columns

// //#define SIZE 3 // Size of the matrices

// int main()
// {
//     int A[MAX_ROWS][MAX_COLS], B[MAX_ROWS][MAX_COLS], sum[MAX_ROWS][MAX_COLS];
//     int i,j;    // i : rows , j : columns
//     system("cls");

//     // Input elements of first matrix A
//     printf("Enter elements of first matrix A (%dx%d): \n",MAX_ROWS,MAX_COLS);
//     for(i=0;i<MAX_ROWS;i++) // i=0 0<=2=>   
//     {
//         for(j=0;j<MAX_COLS;j++) // j=0 0<=2=>
//         {
//            // printf("A[%d][%d]: ",i,j);
//             scanf("%d",&A[i][j]);
//         }
//     }
//     // Input elements of second matrix B
//     printf("Enter elements of second matrix B (%dx%d): \n",MAX_ROWS,MAX_COLS);
//     for(i=0;i<MAX_ROWS;i++) // i=0 0<=2=        
//     {
//         for(j=0;j<MAX_COLS;j++) // j=0 0<=2=>
//         {
//            // printf("B[%d][%d]: ",i,j);
//             scanf("%d",&B[i][j]);
//         }
//     }

//     // Adding two matrices A and B and storing the result in sum matrix
//     for(i=0;i<MAX_ROWS;i++) // i=0 0<=2=        
//     {
//         for(j=0;j<MAX_COLS;j++) // j=0 0<=2=>
//         {
//             sum[i][j]=A[i][j]-B[i][j];
//         }
//     }
//     // Displaying the sum matrix
//     printf("Sub of two matrices A and B is: \n");   
//     for(i=0;i<MAX_ROWS;i++) // i=0 0<=2=        
//     {
//         for(j=0;j<MAX_COLS;j++) // j=0 0<=2=>
//         {
//             printf("%d ",sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // WAP to copy the array elemets into another array

// #include<stdio.h>
// #define MAX_SIZE 100  // Maximum size of the array

// int main()
// {
//     int source[MAX_SIZE], destination[MAX_SIZE];
//     int size,i;
//     system("cls");

//     /* input size of array*/

//     printf("Enter size of array (1-100): ");
//     scanf("%d",&size);

//     /* Input array elements*/

//     printf("Enter elements in source array: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: ",i+1);
//         scanf("%d",&source[i]);
//     }

//     // Copying elements from source array to destination array
//     for(i=0;i<size;i++)
//     {
//         destination[i]=source[i];
//     }

//     // Displaying the destination array
//     printf("Elements in destination array: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: %d\n",i+1,destination[i]);
//     }
//     return 0;
// }


// // WAP to insert an element in array at specified position

// #include<stdio.h>
// #define MAX_SIZE 5  // Maximum size of the array      

// int main()
// {
//     int arr[MAX_SIZE];
//     int size, i, element, position;
//     system("cls");

//     /* input size of array*/

//     printf("Enter size of array (1-100): ");
//     scanf("%d",&size);

//     /* Input array elements*/

//     printf("Enter elements in array: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     // Input element to be inserted and its position
//     printf("Enter element to be inserted: ");
//     scanf("%d",&element);
//     printf("Enter position to insert the element (1 to %d): ",size+1);
//     scanf("%d",&position);

//     // Check if the position is valid
//     if(position<1 || position>size+1)
//     {
//         printf("Invalid position!\n");
//         return 1;
//     }

//     // Shift elements to the right to make space for the new element
//     for(i=size;i>=position;i--)
//     {
//         arr[i]=arr[i-1];
//     }

//     // Insert the new element at the specified position
//     arr[position-1]=element;
//     size++; // Increase the size of the array

//     // Displaying the updated array
//     printf("Array after insertion: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: %d\n",i+1,arr[i]);
//     }
//     return 0;
// }



// // WAP to replace the array element at specified position
// #include<stdio.h>
// #define MAX_SIZE 5    // Maximum size of the array

// int main()
// {
//     int arr[MAX_SIZE];
//     int size, i, element, position;
//     system("cls");

//     /* input size of array*/

//     printf("Enter size of array (1-100): ");
//     scanf("%d",&size);

//     /* Input array elements*/

//     printf("Enter elements in array: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     // Input element to be replaced and its position
//     printf("Enter element to be replaced: ");
//     scanf("%d",&element);
//     printf("Enter position to replace the element (1 to %d): ",size);
//     scanf("%d",&position);

//     // Check if the position is valid
//     if(position<1 || position>size)
//     {
//         printf("Invalid position!\n");
//         return 1;
//     }

//     // Replace the element at the specified position
//     arr[position-1]=element;

//     // Displaying the updated array
//     printf("Array after replacement: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: %d\n",i+1,arr[i]);
//     }
//     return 0;
// }  

// // WAP to delete the array element at specified position

// #include<stdio.h>   
// #define MAX_SIZE 5    // Maximum size of the array

// int main()
// {
//     int arr[MAX_SIZE];
//     int size, i, position;
//     system("cls");

//     /* input size of array*/

//     printf("Enter size of array (1-100): ");
//     scanf("%d",&size);

//     /* Input array elements*/

//     printf("Enter elements in array: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     // Input position to be deleted
//     printf("Enter position to delete the element (1 to %d): ",size);
//     scanf("%d",&position);

//     // Check if the position is valid
//     if(position<1 || position>size)
//     {
//         printf("Invalid position!\n");
//         return 1;
//     }

//     // Shift elements to the left to delete the element at the specified position
//     for(i=position-1;i<size-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     size--; // Decrease the size of the array

//     // Displaying the updated array
//     printf("Array after deletion: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: %d\n",i+1,arr[i]);
//     }
//     return 0;
// }   


// // WAP to search an element in an array
// #include<stdio.h>
// #define MAX_SIZE 5    // Maximum size of the array

// int main()
// {
//     int arr[MAX_SIZE];
//     int size, i, element, found;
//     system("cls");

//     /* input size of array*/

//     printf("Enter size of array (1-100): ");
//     scanf("%d",&size);

//     /* Input array elements*/

//     printf("Enter elements in array: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     // Input element to be searched
//     printf("Enter element to be searched: ");
//     scanf("%d",&element);

//     // Search for the element in the array
//     found=0; // Initialize found to false
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]==element)
//         {
//             found=1; // Element found
//             break;
//         }
//     }

//     if(found)
//     {
//         printf("Element %d found in the array at position %d and it is element %d.\n",element,i,i+1);
//     }
//     else
//     {
//         printf("Element %d not found in the array.\n",element);
//     }
//     return 0;
// }


// // WAP to count the duplicate elements in an array

// #include<stdio.h>
// #define MAX_SIZE 10     // Maximum size of the array

// int main()
// {
//     int arr[MAX_SIZE];
//     int size, i, j, count;
//     system("cls");

//     /* input size of array*/

//     printf("Enter size of array (1-10): ");
//     scanf("%d",&size);

//     /* Input array elements*/

//     printf("Enter elements in array: \n");
//     for(i=0;i<size;i++)
//     {
//         printf("Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     // Count duplicate elements in the array
//     printf("Duplicate elements in the array: \n");
//     for(i=0;i<size;i++)
//     {
//         count=1; // Initialize count for each element
//         for(j=i+1;j<size;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 // Mark duplicate element as -1 to avoid counting again
//                 arr[j]=-1;
//             }
//         }
//         if(count>1 && arr[i]!=-1)
//         {
//             printf("Element %d occurs %d times\n",arr[i],count);
//         }
//     }
//     return 0;
// }  


// WAP to delete the duplicate elements in an array

#include<stdio.h>
#define MAX_SIZE 10     // Maximum size of the array    

int main()
{
    int arr[MAX_SIZE];
    int size, i, j, k;
    system("cls");

    /* input size of array*/

    printf("Enter size of array (1-10): ");
    scanf("%d",&size);

    /* Input array elements*/

    printf("Enter elements in array: \n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    // Delete duplicate elements in the array
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                // Shift elements to the left to delete duplicate
                for(k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--; // Decrease size of array
                j--;
            }
        
        }
    }

    // Displaying the updated array
    printf("Array after deleting duplicate elements: \n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: %d\n",i+1,arr[i]);
    }
    return 0;
}   