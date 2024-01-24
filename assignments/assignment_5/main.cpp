#include <iostream>
#include <string>

int main() {

    int input_number;
    std::string deny_msg = "Sorry, you are too young for the treatment";
    std::string allow_msg = "You are eligible for the treatment";

    std::cout << "Please type in your age : ";
    std::cin >> input_number;

    if (input_number < 21) {
        std::cout << deny_msg << std::endl;
    } else if (input_number > 39) {
        std::cout << deny_msg << std::endl;
    } else {
        std::cout << allow_msg << std::endl;
    }
    
    return 0;
}