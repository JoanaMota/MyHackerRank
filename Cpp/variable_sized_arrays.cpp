#include <iostream>
#include <vector>

int main()
{
    int n, q, size, value, pos1, pos2;
    std::cin >> n >> q;

    std::vector<int> arrays[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> size;
        for (int f = 0; f < size; f++)
        {
            std::cin >> value;
            arrays[i].push_back(value);
        }
    }
    std::vector<int> pos[q];
    for (int i = 0; i < q; i++)
    {
        std::cin >> pos1 >> pos2;
        pos[i].push_back(pos1);
        pos[i].push_back(pos2);
    }
    for (int i = 0; i < q; i++)
    {
        std::cout << arrays[pos[i][0]][pos[i][1]] << std::endl;
    }

    return 0;
}