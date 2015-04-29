import java.util.StringTokenizer;
import java.io.*;

//attempt #11 SUCCESS. So many test cases
public class A536 {
    public static void main(String[] args) {
        try {
            FReader r = new FReader();
            String line = "";
            while((line = r.nextLine())!=null) {
            String search = "CODEFORCES"; //what we want
            int lPos = 0; //position in line
            int sPos = 0; //position in search string 
            boolean valid = true; //exit loop if pattern is lost
            int strikes = 0; //how many nonsearched char sequences are there
            if(line.length()<search.length()) { //no way its in here
                valid = false;
            }
            //Go through string until we find a break in the sequence
            while(valid && (lPos<line.length() && sPos<search.length())) {
                char s = search.charAt(sPos); //what we expect
                char l = line.charAt(lPos); //what we got
                if(s!=l) { //not matched
                    search = search.substring(sPos, search.length());
                    line = line.substring(line.length()-search.length(), line.length()); //remaining length-searchLength characters
                    valid = false;
                } else{ //keep going through 
                    lPos++; 
                    sPos++;
                }
            }
            if(valid && line.length()>=search.length()) { //did we find the whole word before sequence broke? and is it big enough to contain search?
                System.out.println("YES");
            } else if(line.equals(search)) { // does remaining part of search remain, without anything after it?
                System.out.println("YES");
            } else {
                System.out.println("NO");
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
