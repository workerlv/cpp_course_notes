#include <iostream>
#include <string>

int main() {

float length;
float width;
float height;

std::cout << "Welcome to box calculator. Please type in length, width and height information : " << std::endl;

std::cout << "length : ";
std::cin >> length;

std::cout << "width : ";
std::cin >> width;

std::cout << "height : ";
std::cin >> height;

auto base_area = width * length;
auto volume = base_area * height;

std::cout << "The base area is : " << base_area << std::endl;
std::cout << "The volume is : " << volume << std::endl;

return 0;

}