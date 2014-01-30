/*
 * ArmstrongGenerator.java
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

class ArmstrongGenerator {
	public static void main(String[] args) {
		
		System.out.println("Armstrong numbers between 100 and 1000 are:");
		for (int i = 100; i < 1000; i++) {
			int number = i;
			int sum = 0;
			
			while (number > 0) {
				int rem = number % 10;
				sum += rem * rem * rem;
				number = number / 10;
			}
			
			if (sum == i)
				System.out.println(i);
		}
	}
}
