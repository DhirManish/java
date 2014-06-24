public class Achk{
//function for evenodd number
public static boolean isEven(int n) {
	if(n%2==0){
	return true;
        }
	return false;
}
//function for checking the divisibility of a number
public static boolean isPowerOf2(int n) {
	while (n > 1) {
	if (n % 2 != 0)
	return false;
	n /= 2;
}
	return true;
}
//function for armstrong number
public static boolean isArmstrong(int n) {
  int temp = n;
  int d1 = n % 10;
  n /= 10;
  int d2 = n % 10;
  n /= 10;
  int d3 = n % 10;
    int num = (d3 * d3 * d3) + (d2 * d2 * d2) + (d1 * d1 * d1);
	return (num == temp) ? true : false;
}
//function for finding greater number 
public static boolean isGreater(int n) {
	return (n>2) ? true : false;
}

//functon for palindrome
public static int pow(int x, int y) {
	if (y == 0)
	return 1;
	else
	return x * pow(x, y - 1);	
}
public static int reverse(int n) {
    int num = 0;
    int length = String.valueOf(n).length() - 1;
    while (n > 0) {
    int digit = n % 10;
    n /= 10;
    num += digit * pow(10, length--);
}
return num;
}

public static boolean isPalindrome(int n) {
	return (n == reverse(n)) ? true : false;
}

//function for prime checker
public static boolean isPrime(int n) {
    for(int i=2; i<n;i++){
	if (n % i == 0)
	  return false;
}
	  return true;
}
public static void main(String[] args) {
	int n = Integer.parseInt(args[0]);
	System.out.println("Is " + n + " even :" + isEven(n));
	System.out.println("Is " + n + " divisivle by power of 2 :" + isPowerOf2(n));
	System.out.println("Is " + n + " is armstorng :" + isArmstrong(n));
	System.out.println("Is " + n + " greater then 2 :" + isGreater(n));
	System.out.println("Is " + n + " is palindrome number :" + isPalindrome(n));
	System.out.println("Is " + n + " prime? " + isPrime(n));
	}
}
