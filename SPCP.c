#include<stdio.h>
int main(){
    int cp; //dabba
    printf("Enter cost price:");
    scanf("%d",&cp);
    int sp; //dabba
    printf("Enter selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
    else if(sp<cp){
        printf("Loss");
    }
    else {
        printf("No Profit No Loss");
    }
    return 0;
}