#include <bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
private:
    int l, b, h;

public:
    Box() : l{0}, b{0}, h{0} {};
    Box(int f_l, int f_b, int f_h)
    {
        l = f_l;
        b = f_b;
        h = f_h;
    }
    Box(const Box &f_box)
    {
        l = f_box.l;
        b = f_box.b;
        h = f_box.h;
    }
    ~Box(){};

    int getLength(void)
    {
        return l;
    }
    int getBreadth(void)
    {
        return b;
    }
    int getHeight(void)
    {
        return h;
    }
    long long CalculateVolume(void)
    {
        return l * b * h;
    }

    bool operator<(const Box &f_box) const
    {
        if (l < f_box.l)
        {
            return true;
        }
        else if (b < f_box.b && l == f_box.l)
        {
            return true;
        }
        else if (h < f_box.h && l == f_box.l && b == f_box.b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &f_out, const Box &f_box)
    {
        f_out << f_box.l << " " << f_box.b << " " << f_box.h;
        return f_out;
    }
};

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}