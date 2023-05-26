#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    int age;
    std::string id;
};

extern std::vector<Student> students;

void addStudent();
void deleteStudent();
void searchStudent();
void modifyStudent();
bool compareStudents(const Student& student1, const Student& student2);
void sortStudents();
void printMenu();

