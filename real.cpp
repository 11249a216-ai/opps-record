#include<iostream>
using namespace std;
Classs Complex {
    private:
    float real;
    float imag;
    public:
    void getData(){
        cout << "Enter real part:";
        cin >> real;
        cout << "Enter imaginary part:";
        cin >> imag;
    }
    void display() {
        cout << real;
        if(imag >=0)
        cout <<"+" << imag << "i" << endl;
    else
    cout << "-" << -imag << "i" << endl;
    }
    complex add(Compelx c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main() {
    complex c1,c2,sum;
    cout << "Enter first complex number:" << endl;
    c1.getData();
    cout <<"Enter second complex number:" << endl;
    c2.getData();
    sum = c1.add(c2);
    cout <<"sum of the two complex numbers is:";
    sum.display();
    return 0;
}