#include"student.h"
std::vector<Student> students;
void addStudent() {
    Student student;
    std::cout << "Enter student name: ";
    std::cin >> student.name;
    std::cout << "Enter student age: ";
    std::cin >> student.age;
    std::cout << "Enter student ID: ";
    std::cin >> student.id;
    students.push_back(student);
    std::cout << "Student added successfully!" << std::endl;
}

void deleteStudent() {
    std::string id;
    std::cout << "Enter student ID to delete: ";
    std::cin >> id;

    auto it = std::find_if(students.begin(), students.end(), [&](const Student& student) {
        return student.id == id;
        });

    if (it != students.end()) {
        students.erase(it);
        std::cout << "Student deleted successfully!" << std::endl;
    }
    else {
        std::cout << "Student not found!" << std::endl;
    }
}

void searchStudent() {
    std::string id;
    std::cout << "Enter student ID to search: ";
    std::cin >> id;

    auto it = std::find_if(students.begin(), students.end(), [&](const Student& student) {
        return student.id == id;
        });

    if (it != students.end()) {
        std::cout << "Student found!" << std::endl;
        std::cout << "Name: " << it->name << std::endl;
        std::cout << "Age: " << it->age << std::endl;
        std::cout << "ID: " << it->id << std::endl;
    }
    else {
        std::cout << "Student not found!" << std::endl;
    }
}

void modifyStudent() {
    std::string id;
    std::cout << "Enter student ID to modify: ";
    std::cin >> id;

    auto it = std::find_if(students.begin(), students.end(), [&](const Student& student) {
        return student.id == id;
        });

    if (it != students.end()) {
        std::cout << "Enter new name: ";
        std::cin >> it->name;
        std::cout << "Enter new age: ";
        std::cin >> it->age;
        std::cout << "Student modified successfully!" << std::endl;
    }
    else {
        std::cout << "Student not found!" << std::endl;
    }
}

bool compareStudents(const Student& student1, const Student& student2) {
    return student1.name < student2.name;
}

void sortStudents() {
    std::sort(students.begin(), students.end(), compareStudents);
    std::cout << "Students sorted successfully!" << std::endl;
}

void printMenu() {
    std::cout << "-------------------------" << std::endl;
    std::cout << "Student Management System" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "1. Add Student" << std::endl;
    std::cout << "2. Delete Student" << std::endl;
    std::cout << "4. Modify Student" << std::endl;
    std::cout << "5. Sort Students" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Enter your choice: ";
}
