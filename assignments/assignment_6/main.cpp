#include <iostream>
#include <string>


int main(){

    int input_number;

    std::cout << "Which day is today [1:Monday,...,  7:Sunday] : ";
    std::cin >> input_number;

    switch (input_number) {
        case 1 : {
             std::cout << "Today is Monday. Let's have some fun." << std::endl;
        }
        break;

        case 2 : {
             std::cout << "Today is Tuesday. Let's have some fun." << std::endl;
        }
        break;

        case 3 : {
             std::cout << "Today is Wednesday. Let's have some fun." << std::endl;
        }
        break;

        case 4 : {
             std::cout << "Today is Thursday. Let's have some fun." << std::endl;
        }
        break;

        case 5 : {
             std::cout << "Today is Friday. Let's have some fun." << std::endl;
        }
        break;

        case 6 : {
             std::cout << "Today is Saturtday. Let's have some fun." << std::endl;
        }
        break;

        case 7 : {
             std::cout << "Today is Sunday. Let's have some fun." << std::endl;
        }
        break;

        default: {
            std::cout << input_number << " is not valid day. Bye!" << std::endl;
        }
            break;
    }

    return 0;
}