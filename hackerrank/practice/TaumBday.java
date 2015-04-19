package challenges;
import java.util.*;
import java.util.Scanner;
public class TaumBday {
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(); //number of test cases
		while(n>0) {
			long b = in.nextLong(); //# of black gifts
			long w = in.nextLong(); //# of white gifts
			long x = in.nextLong(); //cost of black gift
			long y = in.nextLong(); //cost of white gift
			long z = in.nextLong(); //cost to convert between gifts
			long costA = b*x + w*y; //Cost with no conversion 
			long costB = b*x + w*x + w*z; //All white are converted to black
			long costC = b*y + w*y + b*z; //All black are converted to white
			System.out.println(Math.min(Math.min(costA, costB), costC));
			n--;
		}

	}

}
