#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w, int h) (
	width = w;
	height = h;
}

void Rectangle::set_width(int w) {
	width = w;
}

void Rectangle::set_height(int h) {
	height = h;
}

int Rectangle::area() {
	int temp1 = 0;
	
	temp1 = width * height;
	
	return temp1;
}

int Rectangle::perimeter() {
	int temp2 = 0;
	
	temp2 = width + height;

	temp2 = temp2 * 2;
	
	return temp2;
}



