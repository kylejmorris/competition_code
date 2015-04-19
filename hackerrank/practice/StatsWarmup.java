package challenges;
import java.util.Scanner;
import java.text.DecimalFormat;
public class StatsWarmup {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(); //Number of numbers to expect
		int[] values = new int[n]; //array of values
		for(int i=0; i<n; i++) {
			values[i] = in.nextInt();
		}
	    values = sortValues(values);
		double mean = getMean(values);
		double median = getMedian(values);
		int mode = getMode(values);
		double deviation = getStandardDeviation(values, mean);
		double margin = getMarginOfError(deviation, values.length);
		DecimalFormat df = new DecimalFormat("#.0");
		System.out.println(mean + "\n" + median + "\n" + mode + "\n" + df.format(deviation) + "\n" + df.format(mean-margin) + " " + df.format(mean+margin));
	}
	
	public static int[] sortValues(int[] data) {
		int[] values = new int[data.length];
		for(int i=0; i<values.length; i++) {
			int index = i-1;
			boolean found = false; //Set to true if we find value to insert
			int temp = data[i]; //Value we want to insert into previous ones 
			while(index>=0 && !found) {
				if(temp>values[index]) {
					found = true;
				} else {
					values[index+1] = values[index];
					index--;
				}
				
			}
			values[index+1] = temp; 
		}
		return values;
	}
	public static double getMean(int[] data) {
		double sum = 0;
		for(int i=0; i<data.length; i++) {
			sum+=data[i];
		}
		return (sum/data.length);
	}
	
	/**
	 * Find median of values, assuming values are sorting acending order
	 * @param data the numbers
	 * @return the median
	 */
	public static double getMedian(int[] data) {
		double median = 0;
		if(data.length%2==0) { //checking to see if odd amount of values or even
			median = (data[data.length/2] + data[data.length/2-1]) / 2.0;
		} else {
			median = data[data.length/2];
		}
		return median;
	}
	
	/**
	 * Calculuate value that appears the most. If multiple ones, return smallest of them.
	 * @param data
	 * @return the mode
	 */
	public static int getMode(int[] data) {
		int mode = 999999999; //will adjust to whatever value has most occurences
		int modeCount = 1; //How many times a number has to occur to become new mode
		int count = 1; //how many times current number has shown up.
		for(int i=1; i<data.length; i++) {
			if(data[i]==data[i-1]) {
				count++;
				if(count>modeCount) {
					mode = data[i]; //This is new mode!
					modeCount = count; //Set new counter needed to become mode
				} else if(count==modeCount) {
					if(data[i]<mode) {
						mode = data[i];
					}
				}
			} else {
				count = 1;
				if(count==modeCount) {
					if(data[i]<mode) {
						mode = data[i-1];
					}
				}
			}
		}
		return mode;
	}
	
	/**
	 * CAlculate standard deviation of list of values
	 * @param data
	 * @param mean
	 * @return
	 */
	public static double getStandardDeviation(int[] data, double mean) {
		double sumOfSquares = 0; //Adding squared values of data[value]-mean
		for(int i=0; i<data.length; i++) {
			sumOfSquares += Math.pow(data[i]-mean, 2);
		}
		return Math.sqrt(sumOfSquares/data.length);  
	}
	
	/**
	 * Given sample size and standard deviation calculate margin of error for 95% confidence.
	 * @param deviation
	 * @param sampleSize
	 * @return
	 */
	public static double getMarginOfError(double deviation, double sampleSize) {
		double m = 1.96*(deviation/Math.sqrt(sampleSize));
		return m;
	}
}
