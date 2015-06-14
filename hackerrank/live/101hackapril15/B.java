import java.util.StringTokenizer;
import java.io.*;

public class B {
    public static void main(String[] args) {
        try {
            FReader r = new FReader("input.txt");
            int n = r.nextInt(); //size of array
            int[] data = new int[n];
            for(int i=0; i<n; i++) {
                data[i] = r.nextInt();
            }
            int k = n-1;
            int tuples = 0;
            while(k>=2) {
                for(int aK=k-1; aK>=1; aK--) {
                    if(data[aK]>data[k]) {
                        for(int jK=aK-1; jK>=0; jK--) {
                            if(data[jK]<data[aK] && data[jK]>data[k]) {
                                tuples++;
                            }
                        }
                    }
                }
                k--;
            }
            System.out.println(tuples);
            /*while(k>=1) {
                for(int aK=k-1; aK>=0; aK--) {
                    if(data[aK]>data[k]) {
                        for(int jK=aK+1; jK<k; jK++) {
                            if(data[jK]>data[aK]) {
                                tuples++;
                            }
                        }
                    }
                }
                k--;
            }*/
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
