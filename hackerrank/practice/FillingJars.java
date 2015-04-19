import java.util.*;
public class FillingJars {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(); //number of jars
		int m = in.nextInt(); //number of operations
		double average = 0; //Total average among jars. 
		long totalSum = 0; //Total sum
		char g = '4';
		System.out.print(g+0.0);
		while(m>0) {
			int a = in.nextInt(); //Lower range of jars to operate on
			int b = in.nextInt(); //upper range of jars to operate on
			double k = in.nextDouble(); //amount to add to jars

			/**
			 * We know the average is the sum of all jar contents divided by # of jars.
			 * If a jar were to increase by x units, the average increases by x/n
			 * If jars a-b inclusive incease by x units, the average increases by (a-b+1)*x/n units.
			 */
			//totalSum += (b-a+1)*k;
			for(double i=1; i<=10000; i++) { //Splitting up summation into 10000 groups so we don't exceed integer size limit...
				average+=(b-a+1)*(k/10000)/n; // yup, thanks a lot java. 1/10000th of the summation per iteration.
			}
			average+=0.000001; //I don't even know why lmao
			m--;
		}
		System.out.println((int)average); //display result rounded down to nearest integer

	}

}
