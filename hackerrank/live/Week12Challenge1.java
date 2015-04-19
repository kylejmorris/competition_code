import java.util.Scanner;

public class Week12Challenge1 {

	public static int[] values; // List of weighted items
	public static int index = 0; // position in array of values default is 0
	public static final int RANGE = 4; // Range from target value that can be
										// accepted for weights.

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int count = 0; // How many times we have ran through array to get
						// weights
		int size = in.nextInt(); // Size of array
		values = new int[size]; // Creating array of desired size
		for (int i = 0; i < size; i++) { // Getting all of the weights
			values[i] = in.nextInt();
		}
		selectionSort();
		while (index < size) { // Do this until we are at end of array
			scanValues();
			count++;
		}
		System.out.println(count); // Display count, how many times we had to go
									// through array

	}

	// Sorts the global array of values
	public static void selectionSort() {
		int[] copy = new int[values.length];
		int position = 0;
		while (position < values.length-1) {
			int temp = -1; //Will hold position of minimal value
			int min = 99999999; // Some crazy high default value
			for (int i = position; i < values.length; i++) {
				if (values[i] < min) {
					min = values[i];
					temp = i; 
				}
			}
			values[temp] = values[position];
			values[position] = min; //Swapping out the minimal value found into its place
			position++;
		}

	}

	// Assuming array is sorted, so we can use tons of efficiency tricks B-)
	public static void scanValues() {
		int base = values[index]; // Most recent element in array that we'll
									// check other values against
		while (index < values.length) { // Everything a-ok at this point
			if (Math.abs(values[index] - base) > RANGE) {
				break; // Escape this loop since all values after this are out
						// of range too
			} else {
				index++; // Just move on to next index. Nothing much to see here
			}
		} // Once not in range, we know since array is sorted none of the other
			// elements are in range either
	}

}
