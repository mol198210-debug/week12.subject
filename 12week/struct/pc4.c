#include <stdio.h>

struct Person
{
    char name[30];
    int score;
};
int main(){
    struct Person arr[5];
    for(int i = 0;i<5;i++){
        scanf("%29s %d",arr[i].name,&arr[i].score);
    }
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4-i;j++){
            if(arr[j].score < arr[j+1].score){ 
                struct Person temp = arr[j]; // 이름과 점수가 같이 움직이도록 구조체 통째로 스왑
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%s %d",arr[0].name,arr[0].score);
    return 0;
}