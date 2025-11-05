#include <iostream>
#include <cstring>
using namespace std;

class student {
    int rollno;
    char name[50];

public:
    student() {
        rollno = 0;
        strcpy(name, "rishitha");
    }
    student(int r, const char* n) {
        rollno = r;
        strcpy(name, n);
    }
    void display() {
        cout << "Rollno: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    student s1;
    student s2(101, "Hari"); 
    student s3 = s2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}