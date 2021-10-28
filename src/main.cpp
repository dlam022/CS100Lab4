#include <iostream> 
#include "../header/rectangle.hpp"

using namespace std;

int main() {
	Rectangle rect1
	rect1.set_width(2);
	rect1.set_height(8);

	cout << "Rectangle's perimeter is " << rect1.perimeter() << endl;
	cout << "Rectangle's area is " << rect1.area() << endl;
	return 0;
}


	
