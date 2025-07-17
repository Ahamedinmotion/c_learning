#include <stdio.h>

typedef struct {
    char name[50];
    int marks;
    int average;
} student;

int c_avg(student p) {
    static int count = 0;
    count ++;
    static int add_avg;
    add_avg = add_avg + p.average;
    static int avg;
    avg = add_avg / count;
    return avg;
}

int top(student p) {
    static int max = 0;
    if (max < p.marks) {
    max = p.marks;
    }
    return max;
}

int main() {
    student s1 = {"Alice", 85, 87};
    student s2 = {"Bob", 90, 92};
    student s3 = {"Charlie", 80, 85};

    printf("Class Average: %d\n", c_avg(s1));
    printf("Highest Marks So Far: %d\n", top(s1));

    printf("Class Average: %d\n", c_avg(s2));
    printf("Highest Marks So Far: %d\n", top(s2));

    printf("Class Average: %d\n", c_avg(s3));
    printf("Highest Marks So Far: %d\n", top(s3));

    return 0;
}