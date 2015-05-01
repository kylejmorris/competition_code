import java.util.StringTokenizer;
import java.io.*;
public class C {
    public static void main(String[] args) {
        try {
            FReader r = new FReader("input.txt");
            int n = r.nextInt();
            int m = r.nextInt();
            char[][] cave = new char[n][m];
            for(int row=0; row<n; row++) {
                String line = r.nextLine();
                for(int c=0; c<m; c++) {
                    cave[row][c] = line.charAt(c);
                }
            }            
            int r1 = r.nextInt();
            int c1 = r.nextInt();
            int r2 = r.nextInt();
            int r2 = r.nextInt();
        } catch(Exception e) {
        }
    }

    static boolean validPath(char[][] cave,) {

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
