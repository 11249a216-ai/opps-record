#include<iostream>
using namespace std;
class Time {
    private:
    int hours, minutes, seconds;
    public:
    void input(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds  s;
    }
    void display() {
        cout<<hours<<"h :"<<minutes<<"m :"<<seconds<<"s"<<endl;
    }
    void add(Time t1, Time t2) {
        seconds = t2.seconds + t2.seconds;
        minutes = t1.minutes + t2. minutes + seconds /60;
        hours = t1.hours + t2.hours + minutes / 60;
        seconds = seconds % 60;
        minutes = minutes % 60;
    }
};
int main() {
    Time t1.t2.t3;
    t1.input(2,45,50);
    t2.input(1,20,30);
    cout<<"First time:";
    t1.display();
    cout<<"second time:";
    t2.displai();
    t3.add(t1,t2);
    cout<<"sum of times:";
    t3.dispaly();
    return 0;
}