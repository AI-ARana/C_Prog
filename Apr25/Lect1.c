// #include <stdio.h>

// // int main(){
// //   int a;
// //   float b;
// //   system("cls");
// //   a=5;
// //   b=6.5;
// //   float c=a+b;
  
//   printf("Welcome in Shoolini University");
//   printf("\tHello!");
//   printf("\t%.2f",c);
//   return 0;
// }


// #include <stdio.h>
// int main(){
//   printf("Hello Shoolini");
//   return 0;
// }

#include <stdio.h>

int main()
{
  int x;
  int y;
  float z;
  system("cls"); // Previous output Screen
  printf("Enter two integers:");
  scanf("%d %d",&x,&y);
  z= (70.0/100)*x + (30.0/100)*y;
  printf("The sum of %d and %d = %f",x,y,z);  return 0;
}

/*  x is marks of C, 
y is marks of IT,

weighted total such that c marks are given 70%
weightage and it Marks are give 30%
weighted total = (x*70/100)+(y*30/100)
*/