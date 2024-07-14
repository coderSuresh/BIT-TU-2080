#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(10) << "Sno." 
              << setw(20) << "City" 
              << setw(20) << "District" 
              << setw(15) << "Province" 
              << setw(12) << "Population" << endl;

    cout << left << setw(10) << "1." 
              << setw(20) << "Kathmandu" 
              << setw(20) << "Kathmandu" 
              << setw(15) << "Bagmati" 
              << setw(12) << "500000" << endl;
              
    cout << left << setw(10) << "2." 
              << setw(20) << "Pokhara" 
              << setw(20) << "Gandaki" 
              << setw(15) << "Kaski" 
              << setw(12) << "50000" << endl;
              
    cout << left << setw(10) << "3." 
              << setw(20) << "Butwal" 
              << setw(20) << "Rupandehi" 
              << setw(15) << "Lumbini" 
              << setw(12) << "100000" << endl;
              
    cout << left << setw(10) << "4." 
              << setw(20) << "Dharan" 
              << setw(20) << "Sunsari" 
              << setw(15) << "Prov 1" 
              << setw(12) << "80000" << endl;

    return 0;
}

