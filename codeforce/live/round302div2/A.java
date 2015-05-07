import java.util.StringTokenizer;
import java.io.*;
import java.util.*;


public class A {
    public static void main(String[] args) {
        try {
            FReader reader = new FReader();
            HashMap data = new HashMap();
            int k = reader.nextInt();
            String q = reader.nextLine();
            for(int i=0; i<q.length(); i++) {
               String current = ""+q.charAt(i);
               if(!data.containsKey(current)) {
                    data.put(current, i);
               }
            }
            int[] vals = new int[data.size()];
            int index =0;
            for(Object key : data.keySet()) {
                vals[index] = (int)(data.get(key));
                index++;
            }
            Arrays.sort(vals);
            index = 0;
            if(vals.length<k) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
                while(index<vals.length-1 && index<k-1) {
                    String a = q.substring(vals[index], vals[index+1]);
                    System.out.println(a);
                    index++;
                }
                System.out.println(q.substring(vals[index], q.length()));
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
