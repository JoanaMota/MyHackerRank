#include <iostream>

int main()
{
    std::string str1, str2;

    std::cin >> str1;
    std::cin >> str2;

    std::cout << str1.size() << " " << str2.size() << std::endl;
    std::cout << str1 + str2 << std::endl;

    char a = str1[0];
    char b = str2[0];

    str1[0] = b;
    str2[0] = a;

    std::cout << str1 << " " << str2 << std::endl;
    return 0;
}