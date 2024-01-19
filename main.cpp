#include <iostream>
consteval int get_value(){
    return 3;
}
int main(){
    constexpr int value = get_value();
    std::cout << "Value : " << value << std::endl;
    return 0;
}