#include <iostream>
#include <map>
int main()
{
    int q, type, y;
    std::string x;
    std::cin >> q;

    std::map<std::string, int> students;

    for (int i = 0; i < q; i++)
    {
        std::cin >> type;
        switch (type)
        {
        case 1:
            std::cin >> x >> y;
            students[x] += y;
            break;
        case 2:
            std::cin >> x;
            students.erase(x);
            break;
        case 3:
            std::cin >> x;
            if (students.find(x) != students.end())
            {
                std::cout << students[x] << std::endl;
            }
            else
            {
                std::cout << 0 << std::endl;
            }
            break;
        }
    }

    return 0;
}