import java.util.StringTokenizer;
import java.io.*;

public class B {
    public static void main(String[] args) {
        try {
            FReader reader = new FReader("input.txt");
            int n = reader.nextInt();
            int k = reader.nextInt();   
            int vertical = (n+1)/3;
            int horizontal = (n+1)/2;
            int index = 1;
            String line = "";
            while(index<=n) {
                if(index+2<=n) {
                    if((index-1)%2==0) {
                        line+="SS";
                        index+=2;
                    } else {
                        line+="L";
                        index++;
                    }
                else if(index+1<=n) {
                    line+="L";
                    index++;
                } 
            }
            }
            System.out.println(line);
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
