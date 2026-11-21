#include <stdio.h>

struct Person
{
    char name[20];
    int age;
};
int main(){
    for(int i = 0;i<3;i++){
        struct Person i;
        scanf("%19s %d",i.name,&i.age);
        printf("Name : %s\n",i.name);
        printf("Age : %d\n",i.age);
    }
    return 0;
}
