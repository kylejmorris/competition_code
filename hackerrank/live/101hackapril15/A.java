import java.util.StringTokenizer;
import java.io.*;

public class A {
    public static void main(String[] args) {
        try {
            FReader r = new FReader();
            int n = r.nextInt();
            double[] speeds = new double[n];
            double[] d = new double[n];
            for(int i=0; i<n; i++) { //getting data
                speeds[i] = r.nextInt();
            }
            for(int i=0; i<n; i++) {
                d[i] = r.nextInt();
            }
            double min = Integer.MAX_VALUE;
            for(int i=0; i<n; i++) { //what is fastest time?
                if(d[i]/speeds[i]<min) {
                    min = d[i]/speeds[i];
                }
            }
            for(int i=0; i<n; i++) { //find winners
                if(d[i]/speeds[i]==min) {
                    System.out.println(i+1);
                }
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
