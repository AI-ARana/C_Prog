#include <stdio.h>
#include <string.h>

// Define a structure named Student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to display student details
void display(struct Student s) {
    printf("Student Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    // Create a structure variable
    struct Student student1;

    // Assign values
    strcpy(student1.name, "Anurag Rana");
    student1.rollNumber = 101;
    student1.marks = 88.5;

    // Display student details
    display(student1);

    return 0;
}
