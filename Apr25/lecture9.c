// #include<stdio.h>
// int main()
// {
//     int a=23;
//     system("cls");
//     printf("%d\n",a);
//     printf("%p",&a);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int marks=93;
    
//     system("cls");
//     int * ptr= &marks;
//     // printf("Marks:%d\n",marks);

//     // printf("Memory address of Marks : %p\n",&marks);

//     printf("Memory address of Marks with pointer: %p\n",ptr);
//     printf("The Value of Marks using Dereferencing: %d",*ptr);

//     return 0;
// }

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    system("cls");
    printf("First Element address:%d\n",*arr);
    // for(int i=0;i<5;i++){
    //     printf("%p\n",&arr[i]);
    // }
    return 0;
}
