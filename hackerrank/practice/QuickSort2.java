package algorithms;
import java.util.Scanner;
public class QuickSort2 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(); //how many elements will be in this array.
		int[] data = new int[n]; //array of values
		for(int i=0; i<n; i++) {
			data[i] = in.nextInt();
		}
		quickSort(data, 0, n);
		//Now expecting n-1 more numbers. 
		
	}

	/**public static int[] quickSort(int[] data, int start, int end) {
		if(start>=end) {
		} else {
			int n = data.length;
			int wall = start+1; //Starting position for wall
			int p = data[start]; //First value in array, the pivot point
			int temp;
			for(int i=start; i<end; i++) {
				if(data[i]<p) {
					temp = data[i];
					data[i] = data[wall];
					data[wall] = temp; //just doing a little switcheroo
					wall++; //wall has moved up
				}
			}
			data[start] = data[wall-1];
			data[wall-1] = p; //Switching pivot point into middleD
			quickSort(data, start, wall-1);
			quickSort(data, wall+1, end);
		}
		return data;
	} **/
}
