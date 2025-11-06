#include <iostream>

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int number;
    std::cout<<"enter the number to check"<<std::endl;
    std::cin>>number;

    if (isEven(number)) {
        std::cout<<"the number is even"<<std::endl;
    }
    else {
        std::cout<<"the number is odd"<<std::endl;
    }

    return 0;
}