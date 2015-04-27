import java.util.ArrayList;
import java.util.StringTokenizer;
import java.io.*;
//easy algorithm if you don't overthink it... just common sense approach
public class A7 {
    public static void main(String[] args) {
        try {
            FReader reader = new FReader();
            String[] rowData = new String[8];
            for(int r=0; r<8; r++) {
                rowData[r] = reader.next();
            }
            int streaks = 0;
            //checking rows for streaks
            for(int r=0; r<8; r++) {
                boolean validRow = true; //true unless we find none colored
                for(int c=0; c<8; c++) {
                    if(rowData[r].charAt(c)=='W') {
                        validRow = false;
                        break;
                    }
                }
                if(validRow) {
                    streaks++;
                }
            }
            if(streaks==8) {
                System.out.println(streaks);
            } else {
                for(int c=0; c<8; c++) {
                     boolean validRow = true; //valid until W is found
                    for(int r=0; r<8; r++) {
                        if(rowData[r].charAt(c)=='W') {
                            validRow = false;
                            break;
                        }
                    }
                    if(validRow) {
                   streaks++;
                }
            }
            System.out.println(streaks);
            }
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
