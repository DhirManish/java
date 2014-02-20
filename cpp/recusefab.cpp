/*
 * recusefab.cpp
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

/*
f(0) = 1  -> Base condition
f(x) = x * f(x - 1) { x >= 1 } -> Recursive condition

f(5) = 5 * f(4)
	= 5 * 4 * f(3)
	= 20 * 3 * f(2)
	= 60 * 2 * f(1)
	= 120 * 1 * f(0)
	= 120 * 1 = 120
*/

#include <iostream>

using namespace std;

unsigned int factorial(unsigned int x)
{
	if (x == 0)
		return 1;
	else
		return x * factorial(x - 1);
}

int main(int argc, char **argv)
{
	int num;
	
	cout << "Enter any number: ";
	cin >> num;
	
	cout << "Factorial of " << num << " is " << factorial(num) << endl;
	
	return 0;
}

