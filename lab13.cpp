#include <cmath>

double windChill(double t, double v){
    double W;
    if (t <= 50 and v > 3.0){
        W = 35.74 + (0.6215 * t) - (35.75 * pow(v,0.16)) + (0.4275 * t * pow(v,0.16));
    }
    else{
        W = t;   
    }

    return W;
}
