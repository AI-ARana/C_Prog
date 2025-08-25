#include <stdio.h>
#include <string.h>

// Define a union named Student
union Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Create a union variable
    union Student student1;

    // Assign and print each value separately (Note: Only one value is valid at a time)
    strcpy(student1.name, "Anurag Rana");
    printf("Student Name: %s\n", student1.name);

    student1.rollNumber = 101;
    printf("Roll Number: %d\n", student1.rollNumber);

    student1.marks = 88.5;
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
