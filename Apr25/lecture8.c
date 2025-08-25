// int arr[]={1,2,3,4}
// int mat[2][3]={{1,4,5},{4,7,8}}
// arr[0]=5
// mat[0][2]
// Access of element from 2D array
//#include <stdio.h>
// int main()
// {
//     int mat[2][3]={{1,4,5},{4,7,8}};
//     system("cls");
//     mat[0][0]=9;
//     printf("%d",mat[0][0]);
//     return 0;
// }

// Loop through a 2D Array

// int main(){
//     int mat2[2][3]={{1,2,3},{4,8,6}};
//     system("cls");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d\t", mat2[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Strings
// #include<stdio.h>
// int main(){
//     char s[]="Hello Shoolini";
//     char s1[]={'A','n','u','r','a','g','\0'};
//     system("cls");
//     int n=sizeof(s)/sizeof(s[0]);
//     //s[0]='A';
//     printf("%d\n",n);
//     for(int i=0;i<n;i++)
//         printf("%c\n", s[i]);
//     printf("%s",s1);
//     return 0;

// }

//Hello! Anurag Welcome Here

// #include<stdio.h>
// int main()
// {
//     char s11[]="Hello!";
//     char name[]="Anurag";
//     char wel[]="Welcome Here";
//     system("cls");

//     printf("%s %s %s", s11, name, wel);
//     return 0;
// }
#include<stdio.h>
int main()
{

char a[]= "I am \"Anurag\" working as Associate Professor.";
system("cls");
printf("%s",a);
printf("\n%d",strlen(a));
printf("\n%d",sizeof(a));
return 0;
}

// strcat(s1,s2);
// s1