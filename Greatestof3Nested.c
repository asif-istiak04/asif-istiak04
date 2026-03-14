#include<stdio.h>
int main(){
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int c;
    printf("Enter 3rd number: ");
    scanf("%d",&c);
   if(a>b){ // b is out is race
    if(a>c)
        printf("%d is greatest",a);
        else // a<c -> b<a<c
            printf("%d is greatest",c);
     }
     else{ // b > a -> a is not greatest now
        if(b>c)
            printf("%d is greatest",b);
        else // c>b -> a<b<c
            printf("%d is greatest",c);
     }
   
    return 0;

    
}