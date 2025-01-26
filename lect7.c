// Array

// #include<stdio.h>

// int main(){
//     int arr[5]; // Declare an array of size 5
//     int i, sum=0;
//     system("cls");

//     // Input: 5 integer values
//     printf("Enter 5 integers: \n");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     //Output
//     printf("\n The Elements of the array are:\n");
//     for(i=0;i<5;i++)
//     {
//         printf("%d  ",arr[i]);
//     }
//     // Calculate the sum of array

//     for(i=0;i<5;i++){
//         sum+=arr[i];
//     }
//     printf("\n The sum of the array elements is:%d\n",sum);

//     // Find the largest element
//     int lgt=arr[0];
//     for(i=1;i<5;i++){
//         if(arr[i]>lgt){
//             lgt=arr[i];
//         }
//     }
//     printf("\n The largest element in the array is:%d\n",lgt);
// }

// Searching for an Array elementrs in an Array

#include<stdio.h>

int main(){
    int arr[5],i,n, s, found=0;
    system("cls");
    // Input
    printf("Enter 5 integers:\n");
    for(i=0;i<5;i++){
        printf("Element %d:   ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the number you want to search: ");
    scanf("%d",&s);

    //Searching 

    for(i=0;i<5;i++){
        if(arr[i]==s){
            printf("\n Element %d found at position %d (index %d).\n", s,i+1,i);
            found=1; // Mark as found
            break;
        }
    }
    if(!found){
        printf("\n The Element %d not found in the array", s);
    }
    return 0;
}