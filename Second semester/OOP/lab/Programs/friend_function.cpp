#include<iostream>
using namespace std;

class Time {
    private:
	int hour, minute;
    public:
	Time() {
	    hour = 0;
	    minute = 0;
	}
	Time(int hour, int minute) {
	    this->hour = hour;
	    this->minute = minute;
	}
	friend Time addTime(Time t1, Time t2);
	void display() {
	     cout<<"Hour: "<<hour<<endl<<"Minute: "<<minute<<endl;
	}
};

Time addTime(Time t1, Time t2) {
    Time temp;
    temp.hour = t1.hour + t2.hour;
    temp.minute = t1.minute + t2.minute;
    if (temp.minute >= 60) {
		temp.hour += temp.minute / 60;
		temp.minute %= 60;
    }
    return temp;
}

int main() {
    Time t1(10, 50), t2(1, 11), t3;
    t3 = addTime(t1, t2);
    cout<<"Time 1: "<<endl;
    t1.display();
    cout<<"Time 2: "<<endl;
    t2.display();
    cout<<"Time 3: "<<endl;
    t3.display();
    return 0;
}
