#include <stdio.h>
#include <math.h>

struct Body {
    int height;
    double weight;
};

struct Body makeStudent(struct Body f,struct Body m) {
    struct Body s;
    s.height = (f.height + m.height) / 2.0 + 5;
    s.weight = (f.weight + m.weight) / 2.0 - 4.5;
    return s;
} 

int main()
{
    struct Body father, mother;
    scanf("%d %lf", &father.height, &father.weight);
    scanf("%d %lf", &mother.height, &mother.weight);

    struct Body student = makeStudent(father, mother);

    printf("height : %dcm\n", student.height);
    printf("weight : %.1fkg\n", student.weight);

    return 0;
}