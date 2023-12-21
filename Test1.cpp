#include <iostream>
using namespace std;

double windChill(double t, double v);

int main() {
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << windChill(17,28);
    return 0;
}
