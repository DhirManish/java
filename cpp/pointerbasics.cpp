/*
 * pointerbasics.cpp
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
	int a = 10;
	
	int *ptr = &a;
	
	cout << "Adrress of a: " << &a << endl;
	cout << "Adrress of ptr: " << &ptr << endl << endl;
	cout << "Value of a: " << a << endl;
	cout << "Value of ptr: " << ptr << endl << endl;
	cout << "Pointer location value: " << *ptr << endl;
	
	a = 20;
	cout << "Pointer location value: " << *ptr << endl;
	
	*ptr = 30;
	cout << "Pointer location value: " << *ptr << endl;
	cout << "Value of a: " << a << endl;
	
	int **ptr2 = &ptr;
	a = 100;
	cout << "Pointer location value: " << **ptr2 << endl;
	cout << "Adrress of ptr2: " << &ptr2 << endl;
	cout << "Value of ptr2: " << ptr2 << endl;
	
	**ptr2 = 190;
	cout << "Value of a: " << a << endl;
	cout << "Pointer location value: " << *ptr << endl;
	cout << "Pointer location value: " << **ptr2 << endl;
	
	return 0;
}

