#include <iostream>
#include <string>


int main(){

    int x_coord;
    int y_coord;

    std::cout << "Type in your x location : ";
    std::cin >> x_coord;

    std::cout << "Type in your y location : ";
    std::cin >> y_coord;

    int min_x = -10;
    int max_x = 10;
    int min_y = -5;
    int max_y = 5;

    if (x_coord < min_x || x_coord > max_x || y_coord < min_y || y_coord > max_y) {
        std::cout << "You're out of reach!" << std::endl;
    } else {
        std::cout << "You are completely surrounded. Don't move!" << std::endl;
    }

    return 0;
}