package challenges;

import java.util.*;

/**
 * Auto Generated Java Class.
 */
public class Sticks {

	public Sticks() {
		int n = 0; // Size of array to make
		Scanner in = new Scanner(System.in);
		n = in.nextInt();
		int[] sticks = new int[n]; // Creating array of integers to hold data

		for (int c = 0; c < n; c++) {
			sticks[c] = in.nextInt();
		}
		int temp = n;
		while (n > 0) {
			int smallest = 9999999; // Will hold value of smallest stick to cut
			for (int c = 0; c < temp; c++) {
				if (sticks[c] < smallest && sticks[c] > 0) {
					smallest = sticks[c];
				}
			}
			System.out.println(n);
			for (int i = 0; i < temp; i++) {
				if (sticks[i] > 0) { // See if this stick is even worth checking
					System.out.println(Arrays.toString(sticks));
					sticks[i] = sticks[i] - smallest; // remove 2 from length of
														// sticks
					if (sticks[i] <= 0) { // If removing length made it less
						n--;
					}
				}
			}
		}
	}
}