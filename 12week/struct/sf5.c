#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int height;
    float weight;
};
int main(){
    struct Person arr[5];
    for(int i = 0;i<5;i++){
        scanf("%19s %d %f",arr[i].name,&arr[i].height,&arr[i].weight);
    }
    for (int i = 0; i<5; i++)
    {
        for(int j = 0;j<4-i;j++){
            if(strcmp(arr[j].name, arr[j+1].name)>0){
                struct Person temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0;i<5;i++){
        printf("%s %d %.1f\n",arr[i].name,arr[i].height,arr[i].weight);
    }
}