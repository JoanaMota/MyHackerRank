#include <iostream>
using namespace std;

struct Student
{
    int age;
    int standard;
    std::string first_name;
    std::string last_name;
};

int main()
{
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}