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
    int number1, number2;
    std::cin >> number1;
    std::cin >> number2;

    for (int num = number1; num < number2 + 1; num++)
    {
        if (num > 9)
        {
            if (0 == num % 2)
            {
                std::cout << "even" << std::endl;
            }
            else
            {
                std::cout << "odd" << std::endl;
            }
        }
        else
        {
            std::cout << numbers[num] << std::endl;
        }
    }

    return 0;
}