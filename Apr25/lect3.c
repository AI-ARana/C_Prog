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

#include<stdio.h>
int main(){
    const int x;
    // x=20;
    system("cls");

    printf("%d",x);
    return 0;
}
