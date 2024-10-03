#include <iostream>
#include "../lab13.cpp"

int main(){
std::cout.setf(std::ios::fixed);
std::cout.precision(1);
std::cout << windChill(12,2) << std::endl;
// result is 12.0
}
