#include<iostream.h>

#include<conio.h>

#include<stdio.h>

class student

{

private:

char name[20];

int rno;

public:

void getstudent()

{

cout<<”enter name of the student=”;

cin>>name;

cout<<”enter roll number of the student=”;

cin>>rno;

}

void displaystudent()

{

cout<<”name of the student=”<<name;

cout<<”\nroll number of the student=”<<rno;

}

};

class test: public student

{

protected:

int math,eng,sci;

public:

void gettest()

{

getstudent();

cout<<”enter math marks=”;

cin>>math;

cout<<”enter english marks=”;

cin>>eng;

cout<<”enter science marks=”;

cin>>sci;

}

void displaytest()

{

displaystudent();

cout<<”\n math marks=”<<math;

cout<<”\n english marks=”<<eng;

cout<<”\nscience marks=”<<sci;

}

};

class result : public test

{

private:

int total,avg;

public:

void getresult()

{

gettest();

total=math+eng+sci;

avg=total/3;

}

void displayresult()

{

displaytest();

cout<<”\nTotal Marks=”<<total;

cout<<”\n Average marks=”<<avg;
}
};
void main()

{

result r1;

clrscr();

r1.getresult();

clrscr();

r1.displayresult();

getch();

}