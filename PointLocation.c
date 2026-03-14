#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinator : ");
    // scanf("%d",&a);
    // scanf("%d",&b);
    scanf("%d %d",&x,&y);
    if(y==0){
        printf("x-axis");
    }
    else if(x==0){
        printf("y-axis");
    }
    else{
        printf("The point is origin");
    }

    
   
    return 0;
}