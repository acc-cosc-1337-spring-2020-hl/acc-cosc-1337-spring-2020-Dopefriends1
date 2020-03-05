/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/
#include <iostream>
using namespace std;

class Box {
public:

	Box() {}

	
	explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
	{}

	
	Box(int width, int length, int height)
		: m_width(width), m_length(length), m_height(height)
	{}

	int Volume() { return m_width * m_length * m_height; }

private:
	
	int m_width{ 0 };
	int m_length{ 0 };
	int m_height{ 0 };
};