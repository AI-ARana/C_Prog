// String in C Programming

// #include<stdio.h>

// int main(){
//     char str[50];
//     system("cls");
//     printf("Enter a string:  ");
//     scanf("%s",str);

//     printf("You entered: %s\n", str);

//     return 0;

// }

// Handling Strings with Spaces

// #include<stdio.h>

// int main(){
//     char str1[50];
//     system("cls");
//     printf(" Enter the string with space: ");
//     fgets(str1, sizeof(str1),stdin);

//     printf("\nEntered String is: %s", str1);
//     return 0;
// }

// To demonstrate the basic operations:
// Finding the length
// Copying
//Concatenation
// Comparison

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s1[50],s2[50],s3[100];
//     int len,comp;
//     system("cls");
//     printf("Enter the First String: ");
//     scanf("%s",s1);

//     printf("Enter the Second String: ");
//     scanf("%s",s2);

//     // String Length

//     len=strlen(s1);
//     printf("Length of First String (%s): %d\n", s1,len);
//     int len1=strlen(s2);
//     printf("Length of Second String (%s): %d\n", s2,len1);

//     // String Concatenation
//     strcpy(s3,s1);  // Copy s1 into s3
//     strcat(s3, " "); //add space
//     strcat(s3,s2); //append s2 to s3
//     printf("Concatenated string: %s\n",s3);

//     comp=strcmp(s1,s2);
//     if(comp==0){
//         printf("The strings are equal.\n");
//     }else if (comp<0){
//         printf("String 1 is less than string 2.\n");
//     }else{
//         printf("String 1 is greater than String 2.\n");
//     }

//     return 0;
// }

// Reverse of String

#include<stdio.h>
#include<string.h>

int main(){
    char s4[100],rs[100];
    int i, l;
    system("cls");
    printf("Enter a string: ");
    fgets(s4, sizeof(s4),stdin);

    l=strlen(s4);

    for(i=0;i<l;i++){
        rs[i]=s4[l-i-1];
    }
    rs[l]='\0'; // Add Null Character to the end 
    printf("Reversed string: %s\n", rs);

    return 0;
}