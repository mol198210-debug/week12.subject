#include <stdio.h>

struct Score {
    char name[20];
    int kor;
    int eng;
};
struct Score plus(struct Score x, struct Score y){
    struct Score sum;
    strcpy(sum.name, "total");
    sum.kor = x.kor + y.kor;
    sum.eng = x.eng + y.eng;
    return sum;
}

int main(){
    struct Score a, b;
    scanf("%19s %d %d", a.name, &a.kor, &a.eng);
    scanf("%19s %d %d", b.name, &b.kor, &b.eng);
    
    struct Score result = plus(a, b);
    
    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", result.name, result.kor, result.eng);
    
    return 0;
}