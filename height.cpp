#include <iostream>
using namespace std;

class Student {
    string name;
    float height; 

public:
    Student(string n = "", float h = 0.0) {
        name = n;
        height = h;
    }

    void display() const {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }

    bool operator<(const Student& s) const {
        return height < s.height;
    }

    bool operator>(const Student& s) const {
        return height > s.height;
    }

    bool operator==(const Student& s) const {
        return height == s.height;
    }
};

int main() {
    string name1, name2;
    float h1, h2;

    cout << "Enter first student's name: ";
    cin >> name1;
    cout << "Enter " << name1 << "'s height (in cm): ";
    cin >> h1;

    cout << "\nEnter second student's name: ";
    cin >> name2;
    cout << "Enter " << name2 << "'s height (in cm): ";
    cin >> h2;

    Student s1(name1, h1);
    Student s2(name2, h2);

    cout << "\n--- Student Details ---\n";
    s1.display();
    s2.display();
    cout << endl;

    if (s1 == s2)
        cout << "Both students have the same height." << endl;
    else if (s1 > s2)
        cout << name1 << " is taller than " << name2 << "." << endl;
    else
        cout << name2 << " is taller than " << name1 << "." << endl;

    return 0;
}
