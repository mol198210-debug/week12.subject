#include <stdio.h>

struct point
{
    int x;
    int y;
};
int main(){
    float sumX = 0;
    float sumY = 0;
    struct point arr[2];
    for(int i = 0;i<2;i++){
        scanf("%d %d",&arr[i].x,&arr[i].y);
        sumX += arr[i].x;
        sumY += arr[i].y;
    }
    printf("Center point = (%.1f, %.1f)",sumX/2,sumY/2);
}