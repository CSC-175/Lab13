#include <iostream>
using namespace std;

double windChill(double t, double v);

int main() {
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << windChill(-10,10);
    return 0;
}
