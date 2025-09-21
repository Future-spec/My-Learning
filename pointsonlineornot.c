#include<stdio.h>
int main(){
    int x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%d %d", &x3, &y3);
    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);
    if (m1==m2){
        printf("The given points lie on a straight line.");
    }
    else {
        printf("The given points do not lie on a straight line.");
    }
    return 0;
}