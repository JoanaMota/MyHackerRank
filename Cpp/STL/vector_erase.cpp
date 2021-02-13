#include <iostream>
#include <vector>

int main()
{
    int size, val, x, a, b;
    std::cin >> size;

    std::vector<int> vec;

    for (int i = 0; i < size; i++)
    {
        std::cin >> val;
        vec.push_back(val);
    }

    std::cin >> x;
    vec.erase(vec.begin() + x - 1);
    std::cin >> a >> b;
    vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);

    std::cout << vec.size() << std::endl;
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

    return 0;
}