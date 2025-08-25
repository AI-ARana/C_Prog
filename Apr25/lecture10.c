// Functions in C Programming

// void <funName>(){

// }

// #include<stdio.h>
// void testFun(){
//        printf("This is my function\n"); 
//     }
// int main()
// {
//     system("cls");
//     testFun(); // Call the function
//     testFun(); // Call the function
//     testFun(); // Call the function
//     return 0;
// }

// #include<stdio.h>
// void add(int a, int b){
//     int x=a;
//     int y=b;
//     int sum=x+y;
//     printf("The sum of two numbers is: %d\n",sum);
// }
// void add1(int a, int b,int c){
//     int x=a;
//     int y=b;
//     int z=c;
//     int sum=x+y+z;
//     printf("The sum of two numbers is: %d\n",sum);
// }
// int main()
// {
//     system("cls");
//     add(10,20);
//     add(20,20);
//     add1(100,20,30);
//     return 0;
// }


// #include<stdio.h>

// void arrayFun(int arr[5]){
//     for(int i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
// }

// int main()
// {
//     int arr[5]={5,6,7,8,9};
//     system("cls");
//     arrayFun(arr);
//     return 0;
// }

// #include<stdio.h>
// int test(int x,int y){
//     return y +x;
// }

// int main()
// {
//     system("cls");
//     printf("Result is : %d",test(10,20));
//     return 0;
// }

// WAP to convert Fahrenheit to Celsius

float temp(float f){
    return ((5.0/9.0)*(f-32.0));
}

int main()
{
    float f_val=98.8;
    system("cls");

    float res=temp(f_val);

    printf("Convert Fahrenheit to Celsius: %.2f\n",res);

    return 0;
}