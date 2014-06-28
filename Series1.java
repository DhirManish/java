//2 6 12 20 30 . . . . . 

public class Series1{
     public static void main(String[] args){
	int n=Integer.parseInt(args[0]);
	int s=0;
	for(int x=1;x<=n;x++){
	s=x*x+x;
	System.out.println(s);
	}
     }
}

