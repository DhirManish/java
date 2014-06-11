public class Series4{
     public static void main(String[] args){
	int n=Integer.parseInt(args[0]);
	int s=0;
	for(int x=1;x<=n;x++){
	s=x*(x+1)*(x-1);
	System.out.println(s);
	}
     }
}

