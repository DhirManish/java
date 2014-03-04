/*
 * circle.cpp
 * 
 * Copyright 2014 Ajay Bhatia <ajay@dumb-box>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#define PIE 3.1415

using namespace std;

class Circle
{
	float radius;

	public:
		Circle()
		{
			radius = 1.0;
		}
	
		Circle(float radius)
		{
			this->radius = radius;
		}
		
		float circumference(void);
		float area(void);
		
		~Circle() {}
};

float Circle::circumference(void)
{
	return 2 * PIE * radius;
}

float Circle::area(void)
{
	return PIE * radius * radius;
}

int main(int argc, char **argv)
{
	Circle c1 = 12.5;
	Circle c2 = 3.5;
	Circle c3;
	
	cout << "Circumference of circle 1 = " << c1.circumference() << endl;
	cout << "Circumference of circle 2 = " << c2.circumference() << endl;
	cout << "Circumference of circle 3 = " << c3.circumference() << endl;
	
	cout << "Area of circle 1 = " << c1.area() << endl;
	cout << "Area of circle 2 = " << c2.area() << endl;
	cout << "Area of circle 3 = " << c3.area() << endl;
		
	return 0;
}

