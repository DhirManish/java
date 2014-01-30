/*
 * Keygen.java
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

import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;

public class Keygen {

    private static String DEFAULT_yearMonth = "21111006";/*  To modify the time here  ( First 6 digits  ), So that it does not expire   */


    public static final void main(String[] args) {
        String id = "Ajay Bhatia";//  Registered name
        String num = "0";// 0-999
        String yearMonth = DEFAULT_yearMonth;
        String value = getSerial(id, "100", num, yearMonth, false);
        System.err.println(" Remember to disconnect from the network  "); //  Remember to disconnect from the network
        System.out.println(value);
    }

    /**
     *  Simple function overloading
     *
     * @param userId
     * @param version
     * @param licenseNum
     * @param selected
     * @return
     */
    public static String getSerial(String userId, String version, String licenseNum, boolean selected) {
        return getSerial(userId, version, licenseNum, DEFAULT_yearMonth, selected);
    }

    /**
     *
     * @param userId
     * @param version
     * @param licenseNum
     * @param yearMonth
     * @param selected
     * @return
     */
    private static String getSerial(String userId, String version, String licenseNum, String yearMonth, boolean selected) {
        Calendar cal = Calendar.getInstance();
        cal.add(1, 3);
        cal.add(6, -1);
        NumberFormat nf = new DecimalFormat("000");
        licenseNum = nf.format(Integer.valueOf(licenseNum));
        String verTime = selected ? (new StringBuffer("-")).append(
                (new SimpleDateFormat("yyMMdd")).format(cal.getTime())).append("0").toString() : yearMonth;
        String type = "YE3MB-";
        String need = (new StringBuffer(String.valueOf(userId.substring(0, 1)))).append(type).append(version).append(
                licenseNum).append(verTime).toString();
        String dx = (new StringBuffer(String.valueOf(need))).append(
                "Decompiling this copyrighted software is a violation of both your license agreement and the Digital Millenium Copyright Act of 1998 (http://www.loc.gov/copyright/legislation/dmca.pdf). Under section 1204 of the DMCA, penalties range up to a $500,000 fine or up to five years imprisonment for a first offense. Think about it; pay for a license, avoid prosecution, and feel better about yourself.").append(userId).toString();
        int suf = decode(dx);
        String code = (new StringBuffer(String.valueOf(need))).append(String.valueOf(suf)).toString();
        return change(code);

    }

    private static int decode(String s) {
        int i = 0;
        char ac[] = s.toCharArray();
        int j = 0;
        for (int k = ac.length; j < k; j++) {
            i = 31 * i + ac[j];
        }

        return Math.abs(i);
    }

    private static String change(String s) {
        byte abyte0[] = s.getBytes();
        char ac[] = new char[s.length()];
        int i = 0;
        for (int k = abyte0.length; i < k; i++) {
            int j = abyte0[i];
            if (j >= 48 && j <= 57) {
                j = ((j - 48) + 5) % 10 + 48;
            } else if (j >= 65 && j <= 90) {
                j = ((j - 65) + 13) % 26 + 65;
            } else if (j >= 97 && j <= 122) {
                j = ((j - 97) + 13) % 26 + 97;
            }
            ac[i] = (char) j;
        }

        return String.valueOf(ac);
    }
}
