#include <iostream>
#include <string>
using namespace std;

class Slip
{
private:
    int ENO;
    string name, dept, design, bank_no, PAN, IFSC, UAN;
    float basicpay, DA, HRA, EPF, gpay, totded, netpay, ptax;

public:
    void getdetails()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter employee number: ";
        cin >> ENO;
        cout << "Enter department: ";
        cin >> dept;
        cout << "Enter designation: ";
        cin >> design;
        cout << "Enter PAN: ";
        cin >> PAN;
        cout << "Enter UAN: ";
        cin >> UAN;
        cout << "Enter bank account number: ";
        cin >> bank_no;
        cout << "Enter IFSC code: ";
        cin >> IFSC;
        cout << "Enter basic pay: ";
        cin >> basicpay;
    }

    void calculate()
    {
        DA = basicpay * 0.80;            
        HRA = basicpay * 0.10;           
        EPF = (basicpay + DA) * 0.12;    
        ptax = basicpay * 0.02;           

        gpay = basicpay + DA + HRA;
        totded = EPF + ptax;
        netpay = gpay - totded;
    }

    void display()
    {
        cout << "\n=========== PAYSLIP ===========" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << ENO << endl;
        cout << "Department: " << dept << endl;
        cout << "Designation: " << design << endl;
        cout << "PAN: " << PAN << endl;
        cout << "UAN: " << UAN << endl;
        cout << "Bank A/C No: " << bank_no << endl;
        cout << "IFSC Code: " << IFSC << endl;
        cout << "--------------------------------" << endl;
        cout << "Basic Pay: " << basicpay << endl;
        cout << "Dearness Allowance (DA): " << DA << endl;
        cout << "House Rent Allowance (HRA): " << HRA << endl;
        cout << "Employee Provident Fund (EPF): " << EPF << endl;
        cout << "Professional Tax: " << ptax << endl;
        cout << "--------------------------------" << endl;
        cout << "Gross Pay: " << gpay << endl;
        cout << "Total Deductions: " << totded << endl;
        cout << "Net Pay: " << netpay << endl;
        cout << "================================" << endl;
    }
};

int main()
{
    Slip s;
    s.getdetails();
    s.calculate();
    s.display();
    return 0;
}