#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s = {"Rahul", 101, 85.5};

    struct Student *ptr = &s; 

    ptr->roll = 202;
    ptr->marks = 92.75;

    printf("Student Details:\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
