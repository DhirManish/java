public class Arguments {
	public static void main(String[] args) {
	int a=Integer.parseInt(args[0]);
	int b=Integer.parseInt(args[1]);
	int c=a+b;
	System.out.println("value entered at args[0] + args[1] is " + c);
	System.out.println("value entered at args[2] and args[3] is " + args[2] + " " + args[3]);
	}
}
