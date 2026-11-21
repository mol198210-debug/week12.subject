#include <stdio.h>

struct Person
{
    char name[30];
    int height;
};
int main(){
    struct Person arr[3];
    for(int i = 0; i<3; i++){
        scanf("%29s %d",arr[i].name,&arr[i].height);
    }
    for(int i = 0;i<3; i++){
        printf("%s : %dcm\n",arr[i].name,arr[i].height);
    }
    return 0;
}
