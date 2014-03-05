/*
 * complex.cpp
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
#include "complex.h"

using namespace std;

int main(int argc, char **argv)
{
    Complex c1(12.3456, 78.6543);
    Complex c2(76.3482, 90.4828);

    cout << "(" << c1 << ") + (" << c2 << ") = (" << (c1 + c2) << ")" << endl;
    cout << "(" << c1 << ") - (" << c2 << ") = (" << (c1 - c2) << ")" << endl;

	return 0;
}

