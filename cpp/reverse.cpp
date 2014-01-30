/*
 * reverse.cpp
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
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	long num;
	
	cout << "Enter any number: ";
	cin >> num;
	
	string strnum;
	stringstream temp;
	
	// Conversion from number to string using string stream
	temp << num;
	temp >> strnum;
	
	int len = strnum.length() - 1;
	long rev = 0;
	
	while (num > 0)
	{
		int digit = num % 10;
		num /= 10;
		rev += digit * (int)pow(10, len--);
	}
	
	cout << rev << endl;
	
	return 0;
}
