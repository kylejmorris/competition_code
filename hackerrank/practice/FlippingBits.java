import java.util.Scanner;
public class FlippingBits {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while(t>0) {
			long value = in.nextLong(); //Integer to flip/etc
			long[] bits = get32BitLongFlipped(value);
			long sum = 0; //Adding up values of this new int
			for(int i=0; i<bits.length; i++) {
				sum = sum + bits[i]*(long)Math.pow(2, i);
			}
			System.out.println(sum);
			t--;
		}
		
	}
	
	public static long[] get32BitLongFlipped(long target) {
		long[] bitForm = new long[32]; //Array of bits!!!
		int index = 0; //counting how many bits we have worked on
		while(index<bitForm.length) {
			long remainder = target % 2; 
			if(remainder==0) {
				remainder = 1; //Flipping bit
			} else {
				remainder = 0;
			}
			bitForm[index] = remainder; 
			target/=2; 
			index++;
		}
		return bitForm;
	}
}
