/*
 * armstrong.cpp
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

int main(int argc, char **argv)
{
	for (int num = 100; num <= 999; num++)
	{
		int d3 = num / 100;
		int d2 = (num / 10) % 10;
		int d1 = num % 10;
		
		int res = d3 * d3 * d3 + d2 * d2 * d2 + d1 * d1 * d1;
		
		if (res == num)
			cout << num << endl;
	}
	 
	return 0;
}
