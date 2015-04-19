import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class ProblemB {
	public static void main(String[] args) {
		try {
			FReader r = new FReader();
			int v1 = r.nextInt();
			int v2 = r.nextInt();
			int t = r.nextInt();
			int d = r.nextInt();
			long start = System.currentTimeMillis();
			int sum = findSum(v1, v2, t, d);
			long end = System.currentTimeMillis();
			System.out.print(sum);
			System.out.println("\n took: " + (end-start));
		} catch(IOException e) {
			
		}
	}
	
	public static int findSum(int current, int v2, int rTime, int d) {
		int sum = current; //sum we have acquired for this path
		if(rTime<=1 && current==v2) {
			return current;
		} else if((rTime<=1 && current!=v2)) { //missed target
			return -9999999; //some really low number to mess up sum so it's not taken seriously
		} else {
			int currentMax = 0; //tracking which path gives us largest (valid) solution
			if(current<=v2) {
				for(int i=0; i<=Math.abs(d); i++) {
					int temp = findSum(current+i, v2, rTime-1, d); //try this value for d, does it work?
					if(temp>currentMax) {
						currentMax = temp;
					}
				}
			} else {
				for(int i=-Math.abs(d); i<=Math.abs(d); i++) {
					int temp = findSum(current+i, v2, rTime-1, d); //try this value for d, does it work?
					if(temp>currentMax) {
						currentMax = temp;
					}
				}
			}
			return currentMax + sum ;
		}
	}
	
	/*
	public static int calculateDistance(int current, int v2, int rTime, int d) {
		int sum = 0; //sum of all positions
		if(rTime==0 && current==v2) { //we are at end, this is a valid solution
			return sum + current; //bail out with result
		} else if(rTime==0 && current!=v2) { //missed target, return nothing new to sum
			return -99999999; 
		} else { //still have hope
			current = current; //new position currently
			int tempSum = 0; //finding best solution out of possibilities here
			for(int i=-Math.abs(d); i<=Math.abs(d); i++) {
				int c = calculateDistance(current, v2, rTime-1, i); //trying all possible remaining values here, which gets us home?
				if(c>tempSum) {
					tempSum = c;
				}
			}
			sum = current+tempSum;
			return sum;
		}
	}*/
}

class FReader {
	private BufferedReader r;
	private StringTokenizer t;
	
	public FReader() {
		r = new BufferedReader(new InputStreamReader(System.in));
		t = new StringTokenizer("");
	}
	
	private String next() throws IOException {
		while(!t.hasMoreElements()) {
			t = new StringTokenizer(r.readLine());
		}
		return t.nextToken();
	}
	
	public int nextInt() throws IOException {
		return Integer.parseInt(next());
	}
	
	public double nextDouble() throws IOException {
		return Double.parseDouble(next());
	}
	
	public void close() throws IOException {
		r.close();
	}
}