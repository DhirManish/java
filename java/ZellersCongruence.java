/*
 * ZellersCongruence.java
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

class ZellersCongruence {
	/**
	* Calculate day of week using Zeller's Congruence
	* 
	* For the Gregorian calendar
	* h =(q + floor(13(m + 1) / 5) + K + floor(K / 4) + floor(J/ 4) + 5J) % 7
	*
	* For Julian calendar
	* h =(q + floor(13(m + 1) / 5) + K + floor(K / 4) + 5 + 6J) % 7
	*
	* where
    * h is the day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, ...)
    * q is the day of the month
    * m is the month (3 = March, 4 = April, 5 = May, ..., 14 = February)
    * K the year of the century (year % 100).
    * J is the century (actually floor(year/100)) (For example, in 1995 the century would be 19, even though it was the 20th century.)
	*
	* NOTE: In this algorithm January and February are counted as months 13 and 14 of the previous year. E.g. if it is February 2, 2010, the algorithm counts the date as the second day of the fourteenth month of 2009 (14/02/2009 in MM/DD/YYYY format)
	*
	* For an ISO week date Day-of-Week d (1 = Monday to 7 = Sunday), use
	* d = ((h + 5) % 7) + 1 
	*
	*/
	public static int dayOfWeek(int day, int month, int year) {
		if (month == 1 || month == 2) {
			month += 12;
			year -= 1;
		} 
			
		int yearOfCentury = year % 100;
		int century = year / 100;
		int h = (day + ((13 * (month + 1)) / 5) + yearOfCentury + (yearOfCentury / 4) + (century / 4) + (5 * century)) % 7;
		
		return ((h + 5) % 7) + 1;
	}

	public static String getDayOfWeek(int dayOfWeek) {
		String dayName = "";
		switch (dayOfWeek) {
			case 1: dayName = "Monday"; break;
			case 2: dayName = "Tuesday"; break;
			case 3: dayName = "Wednesday"; break;
			case 4: dayName = "Thursday"; break;
			case 5: dayName = "Friday"; break;
			case 6: dayName = "Saturday"; break;
			case 7: dayName = "Sunday"; break;
		}
		
		return dayName;
	}
	
	public static void main(String[] args) {
		int day = Integer.parseInt(args[0]);
		int month = Integer.parseInt(args[1]);
		int year = Integer.parseInt(args[2]);
		
		System.out.printf("\n%d-%d-%d is %s\n", day, month, year, getDayOfWeek(dayOfWeek(day, month, year)));
	}
}
