#include <stdio.h>
#include <string.h>

struct Person
{
    char name[30];
    char phone[30];
    char addr[30];
};
int main(){
    struct Person arr[3];
    for(int i = 0;i<3;i++){
        scanf("%29s %29s %29s",arr[i].name,arr[i].phone,arr[i].addr);
    }
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2-i;j++){
            if(strcmp(arr[j].name,arr[j+1].name)>0){
                struct Person temp = arr[j];{
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    printf("name : %s\n",arr[0].name);
    printf("tel : %s\n",arr[0].phone);
    printf("addr : %s\n",arr[0].addr);
    return 0;
}
