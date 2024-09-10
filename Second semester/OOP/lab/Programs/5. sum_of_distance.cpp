#include <iostream>
using namespace std;

struct Distance {
    int meter;
    int centimeter;

    void inputDistance() {
        cout << "Enter meter: ";
        cin >> meter;
        cout << "Enter centimeter: ";
        cin >> centimeter;
    }

    void outputDistance() {
        cout << "Distance: " << meter << " meters and " << centimeter << " centimeters" << endl;
    }

    Distance addDistance(Distance d2) {
        Distance sum;
        sum.meter = meter + d2.meter;
        sum.centimeter = centimeter + d2.centimeter;

        if (sum.centimeter >= 100) {
            sum.meter += sum.centimeter / 100;
            sum.centimeter = sum.centimeter % 100;
        }

        return sum;
    }
};

int main() {
    Distance distance1, distance2, sum;

    cout << "Enter details for Distance 1:" << endl;
    distance1.inputDistance();

    cout << "Enter details for Distance 2:" << endl;
    distance2.inputDistance();

    sum = distance1.addDistance(distance2);

    cout << "Sum of Distance 1 and Distance 2:" << endl;
    sum.outputDistance();

    return 0;
}

