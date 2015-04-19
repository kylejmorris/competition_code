import java.util.Scanner;
import java.math.*;
public class SherlockGCD {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt(); //Test cases
		while(t>0) {
			boolean found = false; //found a 1? 
			int n = in.nextInt(); //List size to prepare for...
			int[] data = new int[n];
			for(int i=0; i<n; i++) {
				data[i] = in.nextInt();
				System.out.println(getGCD(5, data[i]));
				if(data[i]==1) {
					found = true;
				}
			}
			if(found) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
			t--;
		}
	}
	
	public static int getGCD(int a, int b) {
		if(b==0) {
			return a;
		} else {
			return getGCD(b, a%b);
		}
	}

	/**
	 * Uses modular exponentiation on a^b mod c, to find the remainder without calculating super large values.
	 * @param a the base of exponent
	 * @param b the exponent
	 * @param c the mod value, what you are dividing a^b by.
	 * @return the remainder of (a^b)%c
	 */
	public static int modEx(int a, int b, int c) {
		if(b==1) {
			return a%b;
		} else if(b%2!=) { // value of b is odd
			int temp = a^(b/2)%c;
			return modEx(2*temp, b)
		}
	}
}


// There are no integers that divide every element in the set evenly
// check if any of the values are prime, if yes just stop because there is your set. 
// if none of the values are prime, 