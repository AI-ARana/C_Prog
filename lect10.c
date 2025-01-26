// Structure

// A structure is a user-defined data type that 
// can be used to group items of possibly different
//  types into a single type. 
//  The struct keyword is used to define a 
//  structure. 
//  The items in the structure are called 
//  its member and they can be of any valid 
//  data type.

// Syntax:
// struct MyStructure{
//     int myNum;
//     char myLetter;
// };
#include<stdio.h>

// Create a structure
// struct myStruct{
//     int n;
//     char c;
// };

// int main(){
//     struct myStruct s;
//     // Assign values to member of s
//     s.n=20;
//     s.c='A';
//     system("cls");

//     printf("The number is:%d\n",s.n);
//     printf("The Letter is:%c\n",s.c);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// struct Student{
//     int rid;
//     char name[50];
//     float grade;
// };

// int main(){
//     struct Student std;
//     system("cls");
//     std.rid=101;
//     strcpy(std.name, "Anurag");
//     std.grade=90.5;
    

//     printf("Student Details\n");
//     printf("Student Registration ID: %d\n",std.rid);
//     printf("Student Name: %s\n",std.name);
//     printf("Student Grade: %.2f\n",std.grade);

//     return 0;
// }

// Union

// #include<stdio.h>

// union Data{
//     int v;
//     float f;
//     char c;
// };

// int main(){
//     union Data d;
//     system("cls");
//     d.v=20;
//     printf("Integer: %d\n",d.v);
//     d.f=20.45;
//     printf("Float: %.2f\n",d.f);
//     d.c='S';

    
    
//     printf("Character: %c\n",d.c);

//     return 0;
// }

// Array of Structure

// #include<stdio.h>
// #include<string.h>

// struct Student{
//     int id;
//     char name[50];
//     float grade;
// };

// int main(){
//     struct Student std[3];
//     system("cls");

//     for(int i=0;i<3;i++){
//         std[i].id=i+1;
//         sprintf(std[i].name,"Student%d",i+1);
//         std[i].grade=75.0+(i*5);
//     }

//     for(int i=0; i<3;i++){
//         printf("Student ID: %d, Name: %s, Grade: %.2f\n",std[i].id,std[i].name,std[i].grade);

//     }
//     return 0;
// }

//Pointers

#include<stdio.h>

int main(){
    int n=50;
    int *ptr; // Declare a pointer to an integer
    system("cls");
    ptr=&n;// Assign the address of n to ptr

    printf("Address of n: %p\n",&n);
    printf("Address stored in ptr: %p\n", ptr);

    return 0;

}
