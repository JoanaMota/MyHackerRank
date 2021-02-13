#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> numbers;
    numbers[1] = "one";
    numbers[2] = "two";
    numbers[3] = "three";
    numbers[4] = "four";
    numbers[5] = "five";
    numbers[6] = "six";
    numbers[7] = "seven";
    numbers[8] = "eight";
    numbers[9] = "nine";
    int number;
    std::cin >> number;

    if (number > 9)
    {
        std::cout << "Greater than 9" << std::endl;
    }
    else
    {
        std::cout << numbers[number] << std::endl;
    }

    return 0;
}