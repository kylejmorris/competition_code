package algorithms;
import java.util.Scanner;
public class InsertionSort1  {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(); //size of array
		int[] data = new int[n];
		for(int i=0; i<n; i++) {
			data[i] = in.nextInt();
		}
		boolean foundSpot = false; //true when we find spot for value
		int value = data[data.length-1]; //rightmost value that is not properly inserted
		int index = n-2; //Where we start for index
		while(index>=0 && !foundSpot) {
			if(data[index]>value) {
				data[index+1] = data[index--];
				for(int i=0; i<n; i++) {
					System.out.print(data[i] + " ");
				}
				System.out.println("");
			} else {
				foundSpot = true;
			}
			
		} 
		data[index+1] = value;
		for(int i=0; i<n; i++) {
			System.out.print(data[i] + " ");
		}
		System.out.println("");
	}
	
}
