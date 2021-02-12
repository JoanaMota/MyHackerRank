#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int m_age;
    int m_standard;
    std::string m_first_name;
    std::string m_last_name;

public:
    Student(){};
    ~Student(){};
    void set_age(int f_age)
    {
        m_age = f_age;
    }
    void set_standard(int f_standard)
    {
        m_standard = f_standard;
    }
    void set_first_name(std::string f_first_name)
    {
        m_first_name = f_first_name;
    }
    void set_last_name(std::string f_last_name)
    {
        m_last_name = f_last_name;
    }
    int get_age()
    {
        return m_age;
    }
    int get_standard()
    {
        return m_standard;
    }
    std::string get_first_name()
    {
        return m_first_name;
    }
    std::string get_last_name()
    {
        return m_last_name;
    }
    std::string to_string()
    {
        std::string temp;
        temp = std::to_string(m_age) + "," + m_first_name + "," + m_last_name + "," + std::to_string(m_standard);
        return temp;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}