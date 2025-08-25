// ARRAYS

// Arrays are used to store multiple values in a single 
// variable, instead of declaring separate variables 
// for each value.

// To create an array, define the 
// data type (like int) and 
// specify the name of the array followed by 
// square brackets [].

// Syntax:
// <dataType> <variable_Name> [100];
// int myArray[5]= {1,2,3,4,5};

// myArray[0];

// #include<stdio.h>
// int main(){
//     int myArray[]={25,50,75,100};
//     system("cls");
//     printf("%d the previous value\n",myArray[2]);
//     myArray[2]=33;
//     printf("%d the new value",myArray[2]);

//     return 0;
// }

#include<stdio.h>
// int main(){
//     int i;
//     int myA[]={25,50,75,100};
//     system("cls");

//     for(i=0;i<4;i++){
//         printf("%d\n",myA[i]);
//     }
//     return 0;
// }

// int main(){
//     int arr[4];
//     arr[0]=25;
//     arr[1]=50;
//     arr[2]=75;
//     arr[3]=100;
//     system("cls");

//     printf("%d\n",arr[0]);

//     return 0;
// }

// int main(){
//     int arr1[]={25,50,75,3.15,5.99};
//     int length;
//     system("cls");
//     printf("%lu the size of array elements in bytes\n",sizeof(arr1));
//     length=sizeof(arr1)/sizeof(int);
//     printf("%d the length of array\n",length);
//     for(int i=0;i<length;i++){
//         printf("%d\n",arr1[i]);
//     }
    
//     return 0;
// }

int main(){
    int age[]={20,22,18,35,48,26,87,70};
    float avg, sum=0;
    int i;
    system("cls");

    int length=sizeof(age)/sizeof(age[0]);
    // int length=sizeof(age)/sizeof(int);

    for(i=0;i<length;i++){
        sum+=age[i];
    }
    avg=sum/length;
    printf("The average age is:%.1f",avg);

    return 0;
}
