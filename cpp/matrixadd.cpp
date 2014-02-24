/*
 * matrixadd.cpp
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
	int r1, c1;
	int r2, c2;
	
	cout << "Enter rows and columns for Matrix A: ";
	cin >> r1 >> c1;
	
	cout << "Enter rows and columns for Matrix B: ";
	cin >> r2 >> c2;
	
	if (r1 != r2 || c1 != c2)
	{
		cout << "Matrices Addition not possible for disordered matrix." << endl;
		return 0;
	}
	
	int a[r1][c1];
	int b[r2][c2];
	
	cout << "Enter " << r1 * c1 << " elements of Matrix A: " << endl;
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			cin >> a[i][j];
			
	cout << "Enter " << r2 * c2 << " elements of Matrix B: " << endl;
	for (int i = 0; i < r2; i++)
		for (int j = 0; j < c2; j++)
			cin >> b[i][j];
	
	int c[r1][c1];
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			c[i][j] = a[i][j] + b[i][j];
	
	cout << "Resultant Matrix is: " << endl;
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++)
			cout << c[i][j] << " ";
		
		cout << endl;
	}
	
	return 0;
}

