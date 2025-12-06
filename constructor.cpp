#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo()   // default constructor
    {
        x = 10;
        cout << "Default constructor called\n";
    }

    void show() {
        cout << "x = " << x;
    }
};

int main() {
    Demo d;   // object created → constructor runs automatically
    d.show();
    return 0;
}
