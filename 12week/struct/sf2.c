#include <stdio.h>

struct Person
{
    char school[30];
    int grade;
};
int main(){
    struct Person basic = {"Jejuelementary",6};
    struct Person other;
    scanf("%29s %d",other.school,&other.grade);
    printf("%d grade in %s School\n",basic.grade,basic.school);
    printf("%d grade in %s School\n",other.grade,other.school);
    return 0;
}