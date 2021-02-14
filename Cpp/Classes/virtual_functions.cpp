#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
protected:
    std::string name;
    int age;

public:
    Person() : name{""}, age{0} {};
    ~Person(){};
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};
class Professor : public Person
{
private:
    int publications;
    int cur_id;

public:
    Professor() : publications{0}
    {
        cur_id += ++id;
    };
    ~Professor(){};
    void getdata(void)
    {
        std::cin >> name >> age >> publications;
    }
    void putdata(void)
    {
        std::cout << name << " " << age << " " << publications << " " << cur_id << std::endl;
    }
    static int id;
};
class Student : public Person
{
private:
    int marks[6];
    int cur_id;

public:
    Student() : marks{0}
    {
        cur_id += ++id;
    };
    ~Student(){};
    int sumMarks(void)
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        return sum;
    }
    void getdata(void)
    {
        std::cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            std::cin >> marks[i];
        }
    }
    void putdata(void)
    {
        std::cout << name << " " << age << " " << sumMarks() << " " << cur_id << std::endl;
    }
    static int id;
};
int Student::id = 0;
int Professor::id = 0;

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
