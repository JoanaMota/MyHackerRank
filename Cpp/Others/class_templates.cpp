#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
// I don't think this is a very good example for template specialization
template <class T>
class AddElements
{
private:
    T m_element;

public:
    AddElements(const T &f_element)
    {
        m_element = f_element;
    }
    ~AddElements(){};
    T add(const T &f_elment)
    {
        return m_element + f_elment;
    }
};
template <>
class AddElements<std::string>
{
private:
    std::string m_element;

public:
    AddElements(const std::string &f_element)
    {
        m_element = f_element;
    }
    ~AddElements(){};
    std::string concatenate(const std::string &f_elment)
    {
        return m_element + f_elment;
    }
};

// The only way to make this pass all the tests
int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
#define endl '\n';

int main()
{
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if (type == "float")
        {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string")
        {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
