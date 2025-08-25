// Looping / Iterative Statements
// Syntax:
// while (condition){
//     //code block 
// }

// # include<stdio.h>
// int main(){
//     int i=0;
//     system("cls");

//     while(i<5){
//         printf("Inside While loop\n");
//         printf("%d\n",i);
//         i++;
//     }
//     printf("\nOutside While Loop");
//     return 0;
// }

// Syntax:
// do{
//     code block
// }
// while(condition)

// #include<stdio.h>
// int main(){
//     int i=0;
//     system("cls");

//     do{
//         printf("Inside do block\n");
//         printf("%d\n",i);
//         i++;
//     }
//     while(i<5);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int countdown=10;
//     system("cls");

//     while(countdown>0)
//     {
//         printf("%d\n",countdown);
//         countdown--;
//     }
//     printf("Happy New Year !");

//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int i=0;
//     system("cls");
//     while(i<=10){
//         printf("%d\n",i);
//         i+=2; //i=i+2
//     }
//     return 0;
// }

// WAP to reverse the number

// #include<stdio.h>
// int main(){
//     int n=12345;
//     int r=0;
//     system("cls");
//     while(n){
        
//         r=r*10+n%10;
//         n/=10;
        
//     }
//     printf("%d",r);
//     return 0;
    

// }

// Syntax
//for(expression1;Expression2;expression3){
// code block
//}
// for(initilization; condition; increment/decrement){
// code block
//}

#include<stdio.h>
int main(){
    int i;
    system("cls");
    for(i=0;i<5;i++){
        printf("%d",i);
        for(int j=0;j<=i;j++)
        {
            printf("\tShoolini University\n");
        }
    }
    return 0;
}