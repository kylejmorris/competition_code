import java.util.StringTokenizer;
import java.io.*;
//finally got this working, had to make value n a long too... UGH thank you based mimino for help
public class Multiples3And5 {

    static long s(long n) { return n*(n+1) /2; }
    
    public static void main(String[] args) {
        try {
            FReader r = new FReader("input.txt");
            int t = r.nextInt();
            while(t>0) {
                long n = r.nextInt();
                long sumOfFive = 5*((((n-1)/5)*((n-1)/5+1))/2); 
                long sumOfThree =3*((((n-1)/3)*((n-1)/3+1))/2);
                long sumOfFifteen = 15*((((n-1)/15)*((n-1)/15+1))/2);
                System.out.println(sumOfThree + sumOfFive - sumOfFifteen);
                t--;
            }
        } catch(Exception e) {
        }        
    }
}

class FReader {
	private BufferedReader r;
	private StringTokenizer t;
    
    public static void main(String[] args) {
        try {
            FReader r = new FReader("test.txt");
            String line = "";
            while((line = r.nextLine())!=null) {
                System.out.println(line);
            }
        } catch (Exception e) {
        }    
    }

	public FReader() {
		r = new BufferedReader(new InputStreamReader(System.in));
		t = new StringTokenizer("");
	}

    public FReader(String file) throws Exception {
        r = new BufferedReader(new FileReader(file));
        t = new StringTokenizer("");
    }
	
	public String next() throws Exception {
	   	while(!t.hasMoreTokens()) {
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
