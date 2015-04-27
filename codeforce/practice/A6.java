import java.util.StringTokenizer;
import java.util.ArrayList;
import java.io.*;
public class A6 {
    public static void main(String[] args) {
        try {
            FReader r = new FReader();
            ArrayList<Integer> vals = new ArrayList<Integer>();
            for(int i=0; i<4; i++) {
                vals.add(r.nextInt());
            }
            boolean isTriangle = false;
            boolean isSegment = false;
            for(int i=0; i<4; i++) {
                int temp = vals.remove(i); //need to check all combinations of this
                if(isTriangle(vals.get(0), vals.get(1), vals.get(2))) {
                    isTriangle = true;
                } else if(isSegment(vals.get(0), vals.get(1), vals.get(2))) {
                    isSegment = true;
                }
                vals.add(0, temp); //place is back
            }
            if(isTriangle) { 
                System.out.println("TRIANGLE");
            } else if(isSegment) {
                System.out.println("SEGMENT"); 
            } else {
                System.out.println("IMPOSSIBLE");
            }
        } catch(Exception e) {
            e.printStackTrace();
        }
    }

    //definition of triangle used
    static boolean isTriangle(int a, int b, int c) {
        if(a+b>c && c+b>a && c+a>b) {
            return true;
        } else {
            return false;
        }
    }

    static boolean isSegment(int a, int b, int c) {
       if(a+b==c || a+c==b || b+c==a) {
           return true;
       } else {
           return false;
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
