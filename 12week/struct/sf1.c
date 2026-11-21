#include <stdio.h>

int main(){
    struct Person{
        char name[20];
        char school[20];
        int grade;
    };
    struct Person p;
    scanf("%19s %19s %d",p.name,p.school,&p.grade);
    printf("Name : %s\n",p.name);
    printf("School : %s\n",p.school);
    printf("Grade : %d\n",p.grade);
    return 0;
}