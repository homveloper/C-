#include <iostream>
using namespace std;

class Box {
    int data; 
public:
    Box() {  }
    void set(int value) {
        data = value;
    }
    int get() {
        return data;
    }
};

int main()
{
	Box box;
	box.set(100);
	cout << box.get() << endl;
	return 0;
}
