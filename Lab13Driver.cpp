#include <iostream>
#include <cmath>
using namespace std;

double windChill(double t, double v);

int main()
{
    double temp,wSpeed,result;
    cout << "Enter the temperature:";
    cin >> temp;
    cout << "Enter the wind speed:";
    cin >> wSpeed;
    result = windChill(temp,wSpeed);
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << "The wind chill temperature is " << result << " degrees Fahrenheit";

    return 0;
}

