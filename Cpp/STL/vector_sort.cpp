#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int n, num;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        vec.push_back(num);
    }
    std::sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        std::cout << vec[i] << " ";
    }

    return 0;
}
