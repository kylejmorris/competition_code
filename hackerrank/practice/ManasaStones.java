/**
 * Takes number of testcases, followed by n, representing number of stones.
 * Followed by this it will take in a, and b, which may be the value of the next stone in the sequence.
 * The program will display a list of all possible values of the last stone in the list based on this.
 */
import java.util.*;

public class ManasaStones {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt(); // test cases
		while (t > 0) {
			int n = in.nextInt(); // Number of stones
			int a = in.nextInt(); // stone difference 1
			int b = in.nextInt(); // Stone difference 2
			int[] combinations = new int[n];
			for (int i = 0; i < n; i++) {
				int value = (n - 1 - i) * a + i * b;
				if (inArray(combinations, value)) {
					combinations[i] = -1; // Don't want duplicates in here...
				} else {
					combinations[i] = (n - 1 - i) * a + i * b;
				}
			}
			combinations = selectionSort(combinations);
			for (int c = 0; c < combinations.length; c++) {
				if (combinations[c] != -1) { // We don't want to show the values that would have been duplicates...
					System.out.print(combinations[c] + " ");
				}
			}
			System.out.println();
			t--;
		}

	}

	/*
	 * Check if specified value is already in array or not
	 */
	public static boolean inArray(int[] data, int search) {
		for (int i : data) {
			if (i == search) {
				return true;
			}
		}
		return false;
	}

	/**
	 * Uses selection sort to sort data...
	 */
	public static int[] selectionSort(int[] data) {
		int index = 0;
		int[] sorted = new int[data.length];
		while (index < data.length) {
			int min = 99999999; // minimal value found in list
			int temp = -1; // temp storage of minimal index
			for (int i = index; i < data.length; i++) {
				if (data[i] < min) {
					min = data[i];
					temp = i; // keeping track of where minimal value was.
				}
			}
			data[temp] = data[index]; // Switching lowest found value with our
			data[index] = min; // Switching between index and minimal value,
			index++;
		}
		return data;
	}
}