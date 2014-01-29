/*
 * fibonacci.cpp
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

using namespace std;

int main()
{
	int limit;
	
	cout << "Enter the limit: ";
	cin >> limit;
	
	int a = 0, b = 1, c = 0;
	
	if (limit <= 0) 
		cout << "Limit cannot be negative or zero. Try again with new value." << endl;	
	else if (limit == 1)
		cout << a << endl;
	else if (limit == 2)
		cout << a << " " << b << endl;
	else
	{
		cout << a << " " << b << " ";
		for (int i = 3; i <= limit; i++)
		{
			c = a + b;
			cout << c << " ";
			a = b;
			b = c;
		}
		
		cout << endl;
	}
	
	return 0;
}

