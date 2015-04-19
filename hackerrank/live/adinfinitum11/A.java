import java.io.*;
import java.util.*;
//this solution was ACCEPTED in live competition
public class A {

    public static void main(String[] args) {
        try {
            FReader r = new FReader();
            int t = r.nextInt();
            while(t>0) {
                int n = r.nextInt();
                int lowerBound = 0;
                if(n%2==0) {
                    lowerBound = n/2;
                } else {
                    lowerBound = (n/2)+1;
                }
                for(int i=n; i>=lowerBound; i--) {
                    if((n-i)!=i) {
                        System.out.println((n-i) + " " + i);
                        System.out.println((i) + " " + (n-i));   
                    } else {
                        System.out.println(i + " " + i);    
                    }
            
                } 
                t--;
            }
          
        } catch(Exception e) {
            
            
        }
    }
    
    public static int fact(int n) {
        int result = 1;
        for(int i=n; i>=1; i--) {
            result*=i;
        }
        return result;
        
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
