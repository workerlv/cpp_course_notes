#include <iostream>
#include <string>

int main() {

    int input_number;

    std::cout << "Please type in an integral value : ";
    std::cin >> input_number;

    auto odd_even = (input_number % 2 == 0) ? "even" : "odd";
    std::cout << input_number << " is " << odd_even << std::endl;

    return 0;

}