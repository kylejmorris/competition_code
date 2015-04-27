import java.util.StringTokenizer;
import java.io.*;

public class A536 {
    public static void main(String[] args) {
        try {
            FReader r = new FReader("input.txt");
            String line = r.next(); 
            String search = "CODEFORCES";
            String appearances = ""; //all code force letters
            for(int i=0; i<line.length(); i++) {
                if(search.indexOf(line.charAt(i))!=-1) {
                    appearances+=line.charAt(i);
                }
            }
            System.out.println(appearances);
            boolean valid = true;
            for(int i=0; i<search.length(); i++) {
                String character = "" +search.charAt(i);
                if(appearances.length()==0 || appearances.indexOf(character)==-1) { //not found
                    valid = false;
                    break;
                } else {
                    appearances = appearances.substring(appearances.indexOf(character)+1, appearances.length());
                }
            }
            if(valid) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
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
