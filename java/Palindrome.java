/*
 * Palindrome.java
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

public class Palindrome {
	public static void main(String[] args) {
		if(args.length == 0 || args.length > 1) {
			System.out.println("Usage: java Palindrome <text>");
			System.exit(-1);
		}
		
		String revString = new StringBuffer(args[0]).reverse().toString();
		
		if(revString.equals(args[0]))
			System.out.println(args[0] + " is palindrome.");
		else
			System.out.println(args[0] + " is not palindrome.");
	}
}
