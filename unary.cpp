#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}
    void display() {
        cout << "Value: " << value << endl;
    }
    Number operator++() {
        ++value;  
        return *this;
    }
    Number operator++(int) {
        Number temp = *this; 
        value++;             
        return temp;        
    }
    Number operator--() {
        --value;
        return *this;
    }
    Number operator--(int) {
        Number temp = *this;
        value--;
        return temp;
    }
};

int main() {
    Number n1(10);

    cout << "Initial value:" << endl;
    n1.display();

    cout << "\nApplying prefix increment (++n1):" << endl;
    ++n1;
    n1.display();

    cout << "\nApplying postfix increment (n1++):" << endl;
    n1++;
    n1.display();

    cout << "\nApplying prefix decrement (--n1):" << endl;
    --n1;
    n1.display();

    cout << "\nApplying postfix decrement (n1--):" << endl;
    n1--;
    n1.display();

    return 0;
}
