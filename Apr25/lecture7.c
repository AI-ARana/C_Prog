// Arrays in C Programming
// Syntax:
// int stdMarks[]={25,50.47};
// int a[10];
// int a1[15];

// #include<stdio.h>
// int main(){
//     int a[]={10,20,30,40,50};
//     system("cls");
//     a[1]=55; // Change of value at specific index.

//     printf("%d",a[1]);

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a1[]={1,2,3,4,5};
//     system("cls");

//     for(int i=0;i<=4;i++){
//         printf("At %d index the Array element is: %d\n",i,a1[i]);
//     }
//     return 0;
// }

// int main(){
//     int a2[5];
//     system("cls");

//     a2[0]=25;
//     a2[1]=35.25;
//     a2[2]=45;
//     a2[3]=55.256;
//     a2[4]=65;
//     for(int j=0;j<=4;j++){

//         printf("At %d index the value of array is:%d\n",j,a2[j]);
//     }

//     return 0;
// }

// int main()
// {
//     int a3[]={9,8,7,6,5};
//     system("cls");
//     int tsize=sizeof(a3);
//     printf("Total Size:%d\n",tsize);
//     int osize =sizeof(a3[0]);
//     printf("One Element size: %d\n",osize);
//     int len=tsize/osize;
//     printf("The length of array is:%d",len);
//     return 0;
// }

// int main(){
//     int a1[]={1,2,3,4,5};
//     system("cls");
//     //int len = sizeof(a1) / sizeof(a1[0]);
//     for(int i=0;i<(sizeof(a1)/sizeof(a1[0]));i++){
//         printf("At %d index the Array element is: %d\n",i,a1[i]);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int cMarks[]={65,75,87,94,54,85,73,65,64,86,94};
    float avg;
    int sum=0;
    int i;
    system("cls");
    
    int len=sizeof(cMarks) / sizeof(cMarks[0]);

    for(i=0; i<len;i++){
        sum+=cMarks[i]; // sum =sum + cMarks[i]
    }

    avg=sum/len;
    printf("The average marks of C Programming class is:%.2f\n",avg);
    int min=cMarks[0];
    for(int j=0;j<len;j++){
        if(min>cMarks[i]){
            min=cMarks[i];
        }
    }
    printf("The Minimum marks in C Programming class is: %d",min);
    
    return 0;
}