#include <iostream>
#include <memory> // for unique_ptr
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    // Using unique_ptr to manage the lifetime of the Rectangle object
    unique_ptr<Rectangle> p1(new Rectangle(10, 5));
    cout << p1->area() << endl;
    return 0;
}
