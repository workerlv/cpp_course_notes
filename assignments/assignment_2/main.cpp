#include <iostream>
#include <string>

int main() {

    std::cout << "Please enter degrees in celsius : " << std::endl;

    float degrees_celsius;
    std::cin >> degrees_celsius;

    float fahrenheit = (9.0 / 5) * degrees_celsius + 32;

    std::cout << degrees_celsius << " Celsius is  "<< fahrenheit <<" Fahrenheit" << std::endl;

    return 0;

}