#include <iostream>
using namespace std;
enum class Fruit
{
    apple,
    orange,
    pear
};
enum class Color
{
    red,
    green,
    orange
};
template <typename T>
struct Traits;
template <>
struct Traits<Color>
{
    static std::string name(int f_index)
    {
        std::string temp;
        switch (Color(f_index))
        {
        case Color::red:
            temp = "red";
            break;
        case Color::green:
            temp = "green";
            break;
        case Color::orange:
            temp = "orange";
            break;
        default:
            temp = "unknown";
            break;
        }

        return temp;
    }
};
template <>
struct Traits<Fruit>
{
    static std::string name(int f_index)
    {
        std::string temp;
        switch (Fruit(f_index))
        {
        case Fruit::apple:
            temp = "apple";
            break;
        case Fruit::orange:
            temp = "orange";
            break;
        case Fruit::pear:
            temp = "pear";
            break;
        default:
            temp = "unknown";
            break;
        }

        return temp;
    }
};

// Define specializations for the Traits class template here.

int main()
{
    int t = 0;
    std::cin >> t;

    for (int i = 0; i != t; ++i)
    {
        int index1;
        std::cin >> index1;
        int index2;
        std::cin >> index2;
        Color color;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
