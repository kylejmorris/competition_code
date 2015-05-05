import java.util.StringTokenizer;
import java.util.*;
import java.io.*;
public class B540 {
    public static void main(String[] args) {
        try {
            FReader in = new FReader();
            int n = in.nextInt(); //total test 
            int k = in.nextInt(); //current tests done
            int p = in.nextInt(); //max grade for a test
            int x = in.nextInt(); //max mark
            int y = in.nextInt(); //minimum median
            int[] tests = new int[k];
            
            int sum = 0; //sum of k tests
            int belowMedian = 0; //num of marks below median
            for(int i=0; i<k; i++) {
                tests[i] = in.nextInt();
                sum+=tests[i];
                if(tests[i]<y) {
                    belowMedian++;
                }
            }
            if(belowMedian<=((n-1)/2) && sum+(n-k)<=x) { //first condition
                int index = 0;
                int[] values = new int[n-k]; //contains suggested grades,
                Arrays.fill(values, y); //fill with max sum possibility
                int cSum = sum+y*(n-k); //max sum if all suggested grades were median
                while(cSum>x && index<values.length) { //use greedy approach to determine optimal solution
                   cSum-=(y-1); //since we're changing y into a 1
                   if(y!=1) { //accounting for new amount of values below median
                       belowMedian++;
                   }
                   values[index] = 1; //record change
                   index++;
                }
                if(sum>x || belowMedian>((n-1)/2)) { //does sum now still exceed max? and fit median condition?
                    System.out.println("-1");
                } else {
                    for(int i=0; i<values.length-1; i++) {
                        System.out.print(values[i] + " "); 
                    }
                    System.out.print(values[values.length-1]);
                }
            } else {
                System.out.print("-1");
            }
        } catch(Exception e) {
        }
    }
}

class FReader {
	private BufferedReader r;
	private StringTokenizer t;
    
	public FReader() {
		r = new BufferedReader(new InputStreamReader(System.in));
		t = new StringTokenizer("");
	}
	
	public FReader(String file) throws Exception {
        	r = new BufferedReader(new FileReader(file));
        	t = new StringTokenizer("");
    	}
	
	public String next() throws Exception {
	   	while(t==null || !t.hasMoreTokens()) {
	    		t = new StringTokenizer(r.readLine());
	   	}
	   	return t.nextToken();
	}

	public String nextLine() throws Exception {
       		return r.readLine();
    	}
	
	public int nextInt() throws Exception {
		return Integer.parseInt(next());
	}
	
	public double nextDouble() throws Exception {
		return Double.parseDouble(next());
	}
	
	public void close() throws IOException {
		r.close();
	}
}
