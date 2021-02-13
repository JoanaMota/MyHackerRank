#include <iostream>
#include <set>
int main()
{
    int q, y, x;
    std::cin >> q;

    std::set<int> numbers;

    for (int i = 0; i < q; i++)
    {
        std::cin >> y >> x;
        switch (y)
        {
        case 1:
            numbers.insert(x);
            break;
        case 2:
            numbers.erase(x);
            break;
        case 3:
            std::set<int>::iterator indexFind = numbers.find(x);
            if (indexFind != numbers.end())
            {
                std::cout << "Yes" << std::endl;
            }
            else
            {
                std::cout << "No" << std::endl;
            }
            break;
        }
    }

    return 0;
}