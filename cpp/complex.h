/*
 * complex.h
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

#include <cmath>

#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class Complex
{
    private:
        double real;
        double img;

	public:
        Complex();
        Complex(double, double);
        Complex(const Complex&);
        friend Complex operator +(const Complex&, const Complex&);
        friend Complex operator -(const Complex&, const Complex&);
        friend ostream& operator <<(ostream&, const Complex&);
};

Complex::Complex()
{
    real = img = 0.0;
}

Complex::Complex(double real, double img)
{
    this->real = real;
    this->img = img;
}

Complex::Complex(const Complex &obj)
{
    real = obj.real;
    img = obj.img;
}

Complex operator +(const Complex &obj1, const Complex &obj2)
{
    return Complex(obj1.real + obj2.real, obj1.img + obj2.img);
}

Complex operator -(const Complex &obj1, const Complex &obj2)
{
    return Complex(obj1.real - obj2.real, obj1.img - obj2.img);
}

ostream& operator <<(ostream &out, const Complex &obj)
{
    out << obj.real << ((obj.img >= 0) ? " + " : " - ") << abs(obj.img) << "i";
    return out;
}

#endif
