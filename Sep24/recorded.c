// Opertors
# include<stdio.h>

int main(){
    int a, b;
    a=10;
    b=4;
    system("cls");
    // printf("Arithmetic Operators");
    // int add=a+b;
    // printf("\nAddition of %d and %d is: %d",a,b,add);
    // int sub=a-b;
    // printf("\nSubtraction of %d and %d is: %d",a,b,sub);

    // int mul =a*b;
    // printf("\nMultiplication of %d and %d is: %d",a,b,mul);

    // int div=a/b;
    // printf("\nDivision of %d and %d is: %d",a,b,div);

    // int mod=a%b;
    // printf("\nModulus of %d and %d is: %d",a,b,mod);

    // printf("\n Assignment Operators");

    // int x;
    // x=15;
    // printf("\nValue of x: %d",x);
    // x+=20;  // x=x+20;  x=15+20; x=35;
    // printf("\nValue of x+=20: %d",x);
    // x-=10;
    // printf("\nValue of x-=10: %d",x);
    // x*=3;
    // printf("\nValue of x*=3: %d",x);

    // printf("\n Comparision Operators");
    // int x=10;
    // printf("\nEqual to:%d",a==b);
    // printf("\nNot Equal to:%d", a!=b);
    // printf("\nGreater than:%d",a>b);
    // printf("\nLess Than: %d",a<b);
    // printf("\nGreater then or Equal to: %d",a>=x);
    // printf("\nLess then or Equal to: %d",a<=b);


    printf("\nLogical Operators");
    printf("\nLogical AND:%d", a>5&&a<15);
    printf("\nLogical OR:%d", a>5||a<10); 
    printf("\n Logical Not:%d",!(a>5 && a<15));
    return 0;
}