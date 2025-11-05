#include<iostream>
using namespace std;
class Books
private:
char ISB no[50],Book name[50],Author[50];
int pages;Acc no;
float price;
public:
void getdetails ()
{
    cout<<"enter ISB no:"
    cin>>ISBN no;
    cout<<"enter book name:"
    cin>>book name;
    cout<<"enter Author name:"
    cin>>Author name;
    cout<<"enter no.of pages:"
    cin>>pages;
    cout<<"enter Acc no:"
    cin>>Acc no;
    cout<<"enter price:"
    cin>>price;
}
void display()
{
    cout<<"ISB no:"<<ISB no<< endl;
    cout<<"book name:"<<book name << endl;
    cout<<"Author name:"<< Author name << endl;
    cout<<" no.of pages:"<<no.of pages << endl;
    cout<<"Acc no:"<<Acc no << endl;
    cout<"price:"<< price << endl;
}