#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle
{
protected:
    int width;
    int height;

public:
    Rectangle(){};
    ~Rectangle(){};
    virtual void display(void)
    {
        std::cout << width << " " << height << std::endl;
    }
};
class RectangleArea : public Rectangle
{
private:
public:
    RectangleArea(){};
    ~RectangleArea(){};
    void read_input()
    {
        std::cin >> width >> height;
    }
    void display(void) override
    {
        std::cout << width * height << std::endl;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}