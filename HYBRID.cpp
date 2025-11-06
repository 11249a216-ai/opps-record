#include <iostream>
using namespace std;
class Person {
public:
    void getData() {
        cout << "Enter Name and Age: " << endl;
    }
};


class Student : public Person {
public:
    void showStudent() {
        cout << "This is a student." << endl;
    }
};


class Marks {
public:
    void showMarks() {
        cout << "Displaying student marks." << endl;
    }
};


class Result : public Student, public Marks {
public:
    void showResult() {
        cout << "Displaying final result." << endl;
    }
};
int main() {
    Result r;
    r.getData();      
    r.showStudent();
    r.showMarks();     
    r.showResult();    

    return 0;
}
