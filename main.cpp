// COMSC-210 | Lab16: Color Class w/Constructors | Nina Tsao

#include <iostream>
using namespace std;

// Color class
class Color {
// private member variables
private:
    int red;
    int green;
    int blue;

// public setter & getter member functions
public:
    Color()                    {red = 0; green = 0; blue = 0;}  // default constructor
    Color(int g)               {red = 0; green = g; blue = 0;}  // partial constructor
    Color(int r, int g, int b) {red = r; green = g; blue = b;}  // full parameter constructor

    // print() method to print the object data
    void print() {
        cout << "Color:" << endl;
        cout << "\tRed: " << red << endl;
        cout << "\tGreen: " << green << endl;
        cout << "\tBlue: " << blue << endl;
    }
};

// create Color objects, populate with data, and output the values
int main() {
    cout << "The values of colors:" << endl << endl;

    // default constructor
    Color c1;
    c1.print();
    
    // partial constructor
    Color c2(255);      // green = 255
    c2.print();

    // full parameter constructor
    Color c3(255, 255, 255);
    c3.print();

    return 0;
}