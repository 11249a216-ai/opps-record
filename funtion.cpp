#include<iostream>
using namespace std;
class Time {
    private:
    int hours;
    int minutes;
    int seconds;
    public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    Time addTime(Time t) {
        Time temp;
        temp.seconds = seconds+t.seconds;
        temp.minutes = minutes+t.minutes+temp.seconds /60;
        temp.seconds = temp.seconds % 60;
        temp.hours = hours+t.hours+temp.minutes / 60;
        temp.minutes = temp.minutes % 60;
        return temp;
    }
    void displayTime() {
        cout << hours << "h:" << minutes << "m:" << seconds << "s" << endl;
    }
};
int main() {
    Time t1(2, 45, 50);
    Time t2(1, 20, 35);
    Time t3 = t1.addTime(t2);
    cout << "Time 1:";
    t1.displayTime();
    cout << "Time 2:";
    t1.displayTime();
    cout << "Sum of time 1 and time 2: ";
     return 0;
}