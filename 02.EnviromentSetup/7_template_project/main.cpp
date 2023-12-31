#include <iostream>

int main(){
    constexpr int value = get_value();
    std::cout << "value : " << value << std::endl;
    return 0;
}