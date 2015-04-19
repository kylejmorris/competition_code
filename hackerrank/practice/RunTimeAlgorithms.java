package algorithms;
import java.util.Scanner;

public class RunTimeAlgorithms {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(); //size of array
		int[] data = new int[n];
		int shifts = 0; //how many shifts were required to sort array
		for(int i=0; i<n; i++) {
			data[i] = in.nextInt();
		}
		for(int j=1; j<n; j++) {
			boolean foundSpot = false; //true when we find spot for value
			int value = data[j]; //rightmost value that is not properly inserted
			int index = j-1; //Where we start for index
			while(index>=0 && !foundSpot) {
				if(data[index]>value) {
					shifts++; //Keeping count of how many shifts
					data[index+1] = data[index--];
				} else {
					foundSpot = true;
				}
			
			} 
			data[index+1] = value;
		}
		System.out.println(shifts);
	}
	
}
