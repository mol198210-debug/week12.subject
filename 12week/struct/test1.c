#include <stdio.h>

struct Person
{
    char name[100];
    char phone[100];
    char addr[100];
};
int main(){
    struct Person me;
    scanf("%99s %99s %99s",me.name,me.phone,me.addr);
    printf("name : %s\n",me.name);
    printf("tel : %s\n",me.phone);
    printf("addr : %s\n",me.addr);
    return 0;
}