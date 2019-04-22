#include <iostream>
#include <memory>
using namespace std;

class Shape
{
    private:
        int length, breadth;
    public:
        virtual int area(int length, int breadth)
        {
            cout << "Area of Shape" << endl;
            int finalArea = length * breadth;
            return finalArea;
        }
};

class Rectangle: public Shape
{
    public:
        int area(int length, int breadth)
        {
            cout << "Area of Rectangle" << endl;
            int finalArea = length * breadth;
            return finalArea;
        }

};
int main()
{
    shared_ptr<Shape> ptr = make_shared<Rectangle>();
    int area = ptr->area(10,20);
    cout << area << endl;
    return 0;
}