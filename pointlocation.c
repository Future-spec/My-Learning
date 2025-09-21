#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates :");
    //scanf("%d",&x);
    //scanf("%d",&y);
    scanf("%d %d", &x, &y);
    if (x==0 && y==0){
        printf("The point lies on origin");
    }
    else if (x==0){
        printf("The point lies on y-axis");
    }
    else if(y==0){
        printf("The point lies on x-axis");
    }
    else{
        printf("The point does not lie on x-axis or y-axis or origin");
    }
    return 0;
}