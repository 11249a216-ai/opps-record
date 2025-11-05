#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display() const {
        cout << hours << "h : " << minutes << "m : " << seconds << "s";
    }
    bool operator==(const Time& t) const {
        return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
    }

    bool operator<(const Time& t) const {
        if (hours < t.hours)
            return true;
        else if (hours == t.hours && minutes < t.minutes)
            return true;
        else if (hours == t.hours && minutes == t.minutes && seconds < t.seconds)
            return true;
        else
            return false;
    }

    bool operator>(const Time& t) const {
        return !(*this < t || *this == t);
    }
};

int main() {
    Time t1(10, 30, 25);
    Time t2(12, 15, 10);

    cout << "Time 1: ";
    t1.display();
    cout << endl;

    cout << "Time 2: ";
    t2.display();
    cout << endl << endl;

    if (t1 == t2)
        cout << "Both times are equal." << endl;
    else if (t1 < t2)
        cout << "Time 1 is earlier than Time 2." << endl;
    else
        cout << "Time 1 is later than Time 2." << endl;

    return 0;
}
