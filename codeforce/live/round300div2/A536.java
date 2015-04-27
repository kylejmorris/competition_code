import java.util.StringTokenizer;
import java.io.*;

public class A536 {
    public static void main(String[] args) {
        try {
            FReader r = new FReader("input.txt");
            String line = r.next(); 
            String search = "CODEFORCES";
            boolean valid = true;
            if(line.length()<search.length()) {
                valid = false;
            }
            if(line.contains(search)) {
                valid = true;
            } else {
                int strike = 0; //how many alienated patterns were there?
                int index = 0;
                for(int i=0; i<search.length(); i++) {
                    if(line.charAt(index)!=search.charAt(i)) {
                        if(line.indexOf(""+search.charAt(i))!=-1) {
                            index = 0;
                            line = line.substring(index+1, line.indexOf(""+search.charAt(i)));
                        } else {
                            valid = false;
                            break;
                        }
                    }
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
