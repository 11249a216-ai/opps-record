#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString() {}
    MyString(string s) {
        str = s;
    }
    MyString operator+(const MyString& obj) {
        MyString temp;
        temp.str = str + obj.str;  
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello ");
    MyString s2("World!");
    MyString s3;

    
    s3 = s1 + s2;

    cout << "String 1: ";
    s1.display();

    cout << "String 2: ";
    s2.display();

    cout << "Concatenated String: ";
    s3.display();

    return 0;
}
