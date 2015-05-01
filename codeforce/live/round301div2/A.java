import java.util.StringTokenizer;
import java.io.*;
public class A {
    public static void main(String[] args) {
        try {
            FReader r = new FReader();
            int n = r.nextInt();
            String start = r.next();
            String goal = r.next();
            int sum = 0;
            for(int i=0; i<start.length(); i++) {
                int a = Integer.parseInt(""+start.charAt(i));
                int b = Integer.parseInt(""+goal.charAt(i));
                if(a<b) {
                    sum+=Math.min(a+Math.abs(9-b)+1, Math.abs(a-b));
                } else if(a>b) {
                    sum+=Math.min(Math.abs(a-b), Math.abs(a-9)+1 + b);
                }
            }
            System.out.println(sum);
        } catch(Exception e) {
            e.printStackTrace();
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
