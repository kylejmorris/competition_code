import java.io.*;
import java.util.*;
//This solution was UNSUBMITTED in live competition
public class Solution {

    public static void main(String[] args) {
        try {
            long start = System.currentTimeMillis();
            FReader r = new FReader();
            int t = r.nextInt();
            int sum = 0;
            boolean[] a = getFactors(200000);
            ArrayList<Integer> factors = new ArrayList<Integer>();
            for(int i=1; i<a.length; i++) {
                if(a[i]) {
                    factors.add((i+1)); //this is a prime
                }
            }
            while(t>0) {
                int temp = r.nextInt(); 
                int index = 0; 
                while(temp>1 && index<factors.size()) {
                    if(temp%factors.get(index)==0) { //found prime factor
                        //System.out.println(factors.get(index) + " is a factor!");
                        sum+=factors.get(index);
                        temp/=factors.get(index);
                        //System.out.println("temp is: " + temp); 
                    } else {
                        index++;
                    }
                }
                t--;
            }
            long end = System.currentTimeMillis();
            System.out.println(sum);
            //System.out.println("sum of factors: " + sum);
            //System.out.println((end-start) + " time taken");
            
        } catch(Exception e) {
            
        }
    }
    
    //get sum of factors of this value
    public static int factorSum(int n) {
        boolean[] factors = getFactors(n);
        int sum = 0;
        for(int i=0; i<Math.sqrt(factors.length); i++) {
            if(factors[i]) {
                sum+=(i+1);
            }
        }
        return sum;
    }
    
    //get boolean array of factors for given n
    public static boolean[] getFactors(int n) {
        boolean[] factors = new boolean[n];
        for(int i=0; i<factors.length; i++) {
            factors[i] = true; //starting off fresh
        }
        for(int i=2; i<=Math.sqrt(n); i++) {
            int m = i;
            while(i*m<=n) {
                factors[i*m-1] = false; //not a prime
                m++;
            }
        }
        return factors;
    }
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
