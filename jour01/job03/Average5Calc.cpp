#include <iostream>

int average5Calc(int numbers[5]) {
    int sum = 0;
    for (int i =0; i < 5; i++) {
        sum+=numbers[i];
    }

    return sum/5;
}

int main() {
    int numbers[5];

    std::cout<<"please insert 5 numbers: ";
    std::cin>>numbers[0];
    std::cin>>numbers[1];
    std::cin>>numbers[2];
    std::cin>>numbers[3];
    std::cin>>numbers[4];

    std::cout<<"the average of the numbers is: "<<average5Calc(numbers)<<std::endl;


    return 0;
}