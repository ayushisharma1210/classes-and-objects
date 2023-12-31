#include<iostream>

using namespace std;


class Rectangle 
{
protected:
    double length = 5.000;
    double breadth = 10.000; 

public:
    Rectangle(double l, double w) : length(l), breadth(w) {}

    double getArea() {
        return length * breadth;
    }

    double getPerimeter() {
        return 2 * (length + breadth);
    }
};


class Cuboid : public Rectangle {
private:
    double height = 4.000;

public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}

    double getVolume() {
        return length * breadth * height;
    }
};

int main() 
{
    double length = 5.0;
    double breadth = 3.0;
    double height = 2.0;
    Cuboid cuboid(length, breadth, height);
    Rectangle rectangle(length, breadth);
    cout << "Dimensions:" << endl;
    cout << "Length: " <<length<<endl;
    cout << "Breadth: " <<breadth<<endl;
    cout << "Height: " <<height <<endl;
    cout<<"Area of rectangle: "<<rectangle.getArea()<<endl;
    cout<<"Perimeter of rectangle: "<<rectangle.getPerimeter()<<endl;
    cout << "Cuboid Volume: " <<cuboid.getVolume() <<endl;
    return 0;
}