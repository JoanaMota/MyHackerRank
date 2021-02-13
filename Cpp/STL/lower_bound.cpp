#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int size, val;
    std::cin >> size;

    std::vector<int> vec;

    for (int i = 0; i < size; i++)
    {
        std::cin >> val;
        vec.push_back(val);
    }
    int nrQ, q;
    std::vector<int>::iterator low;
    std::cin >> nrQ;
    for (int i = 0; i < nrQ; i++)
    {
        std::cin >> q;
        low = std::lower_bound(vec.begin(), vec.end(), q);
        if (*low == q)
        {
            printf("Yes %ld \n", (low - vec.begin() + 1));
        }
        else
        {
            printf("No %ld \n", (low - vec.begin() + 1));
        }
    }

    return 0;
}