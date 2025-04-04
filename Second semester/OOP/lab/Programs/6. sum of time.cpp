#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:

    void readTime() {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    void displayTime() {
        cout << "Time: " << hour << " hours " << minute << " minutes " << second << " seconds" << endl;
    }

    Time addByValue(Time t) {
        Time sum;
        sum.hour = hour + t.hour;
        sum.minute = minute + t.minute;
        sum.second = second + t.second;

        if (sum.second >= 60) {
            sum.minute += sum.second / 60;
            sum.second = sum.second % 60;
        }

        if (sum.minute >= 60) {
            sum.hour += sum.minute / 60;
            sum.minute = sum.minute % 60;
        }

        return sum;
    }

    void addByReference(Time &t) {
        hour += t.hour;
        minute += t.minute;
        second += t.second;

        if (second >= 60) {
            minute += second / 60;
            second = second % 60;
        }

        if (minute >= 60) {
            hour += minute / 60;
            minute = minute % 60;
        }
    }
};

int main() {
    Time time1, time2;

    cout << "Enter details for Time 1:" << endl;
    time1.readTime();

    cout << "Enter details for Time 2:" << endl;
    time2.readTime();

    cout << "\nTime 1:" << endl;
    time1.displayTime();
    cout << "\nTime 2:" << endl;
    time2.displayTime();

    Time sumByValue = time1.addByValue(time2);
    cout << "\nSum of Time 1 and Time 2 (using pass by value):" << endl;
    sumByValue.displayTime();

    time1.addByReference(time2);
    cout << "\nSum of Time 1 and Time 2 (using pass by reference):" << endl;
    time1.displayTime();

    return 0;
}

