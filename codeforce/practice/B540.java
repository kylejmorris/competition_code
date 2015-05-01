import java.util.StringTokenizer;
import java.io.*;
public class B {
    public static void main(String[] args) {
        try {
            FReader in = new FReader("input.txt");
            int n = in.nextInt();
            int k = in.nextInt();

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
