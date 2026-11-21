#include <stdio.h>

struct Person
{
    char name[30];
    int height;
};
int main(){
    struct Person arr[5];
    for(int i = 0;i<5;i++){
        scanf("%29s %d",arr[i].name,&arr[i].height);
    }
    for(int i = 0; i<4;i++){
        for(int j = 0;j<4-i;j++){
            if(arr[j].height<arr[j+1].height){
                struct Person temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%s %d",arr[4].name,arr[4].height);
    return 0;
}
