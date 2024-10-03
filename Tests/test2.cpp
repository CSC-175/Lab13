#include <iostream>
#include "../lab13.cpp"

int main(){
std::cout.setf(std::ios::fixed);
std::cout.precision(1);
std::cout << windChill(-10,10) << std::endl;
// result is -28.3
}
