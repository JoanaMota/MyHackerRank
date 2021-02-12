#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int max = a;
    vector<int> numbers = {a, b, c, d};
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}