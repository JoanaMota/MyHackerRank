#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    std::stringstream ss;
    vector<int> numbers;
    ss.str(str);
    char ch;
    int a;
    do
    {
        ss >> a;
        numbers.push_back(a);
    } while (ss >> ch); // returns false if invalid read
    return numbers;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}