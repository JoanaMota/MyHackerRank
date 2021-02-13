#include <iostream>
#include <vector>

int main()
{
    int size = 0;
    int a, b, c, d;
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> a;
        arr[i] = a;
    }
    for (int i = size - 1; i > -1; i--)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}