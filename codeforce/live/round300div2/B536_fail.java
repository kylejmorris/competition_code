import java.util.StringTokenizer;
import java.io.*;
import java.util.*;

public class B536 {
    static ArrayList<Integer> quasis;
    public static void main(String[] args) {
        quasis = new ArrayList<Integer>();
        try {
            FReader r = new FReader("input.txt");
            int n = r.nextInt();
            if(n<10) { //special case
                System.out.println(n);
                for(int i=0; i<n-1; i++) {
                    System.out.print("1 ");
                }
                System.out.print("1");
            } else {
                System.out.println(quasiCount(n));
                for(int i=0; i<quasis.size()-1; i++) {
                    System.out.print(quasis.get(i) + " ");
                }
                System.out.print(quasis.get(quasis.size()-1));
            }
        } catch(Exception e) {

        }
    }

    static int quasiCount(int n) {
        int count = 0; //for all n>=1
        int current = n; //tracking n decreasing
        while(current>9) {
            if(isQuasi(current)) {
                quasis.add(current);
                count++;
                count+=quasiCount(n-current);
                break;
            } else {
                current--;
            }
        }
        if(current<=9) {
            for(int i=0; i<current; i++) {
                quasis.add(1);
                count++;
            }
        }
        return count;
    }
    static boolean isQuasi(int n) {
        boolean yes = true;
        while(n>0 && yes) {
            if(n%10==0 || n%10==1) {
                n/=10;
            } else {
                yes = false;
            }
        }
        return yes;
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
