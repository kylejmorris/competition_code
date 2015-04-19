package algorithms;
import java.util.Scanner;
public class QuickSort1 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(); //how many elements will be in this array.
		int p = in.nextInt(); //First value is going to be p so may as well just get it here.
		//Now expecting n-1 more numbers. 
		int[] left = new int[n-1]; //At most n-1 values could be to left of p
		int[] right = new int[n-1]; // At most n-1 values could be to right of p
		int sizeL = 0; //how many elements are used in left array
		int sizeR = 0; //how many elements in right array
		for(int i=0; i<n-1; i++) {
			int temp = in.nextInt();
			if(temp>=p) {
				right[sizeR++] = temp; //Putting value to right of p. Increasing array size
			} else {
				left[sizeL++] = temp; //Putting value to left of p. Increasing array size.
			}
		}
		for(int i=0; i<sizeL; i++) {
			System.out.print(left[i] + " ");
		}
		System.out.print(p + " ");
		for(int i=0; i<sizeR; i++) {
			System.out.print(right[i] + " ");
		}
	}

}
