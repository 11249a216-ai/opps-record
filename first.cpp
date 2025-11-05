#include<iostream>
using namespace std;
class car{
    public:
     string make;
     string modle;
    int year;
    string color;
   
    void displaydetails ()
    {
    cout<<"Make:"<<
    make<<endl;
    cout<<"Modle:"<<
    modle<<endl;
    cout<<"year:"<<year
    <<endl;
    cout<<"color:"<<
    color<<endl;
    }
};
int main(){
    car myCar;
    myCar.make="Toyota";
    myCar.model="camry";
    myCar.year=2023;
    myCar.color="silver";
    myCar.display Details();
    car anotherCar;
    anotherCar.make="Honda";
    anotherCar.modle="civic";
    anotherCar.year=2024;
    anotherCar.color="Blue";
    cout<<"\nDetails of anotherCar:"<<endl;
    anotherCar.display Details();
    return 0;
}