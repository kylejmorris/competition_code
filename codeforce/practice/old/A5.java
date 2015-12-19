import java.util.StringTokenizer;
import java.io.*;

//first time using vim for a solution, oh man it took a while...
public class A5 {
    public static void main(String[] args) {
        try {
            FReader r = new FReader("input.txt");
            int byteCount = 0; //how many bytes sent
            int userCount = 0; //num of users in chat
            while(true) {
                String line = r.nextLine();
                if(line==null) {
                    break;
                } else{
                    if(line.charAt(0)=='-') {
                        userCount--;
                    } else if(line.charAt(0)=='+') {
                        userCount++;
                    } else {
                        String message = line.substring(line.indexOf(":")+1, line.length());
                        byteCount+= (message.length()*userCount);
                    }
                }
            }
            System.out.println(byteCount);
        } catch (Exception e) {
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
        while(!t.hasMoreTokens()) {
            System.out.println(r.readLine());
            t = new StringTokenizer(r.readLine());
        }
        return t.nextToken();
    }

    public String nextLine() throws IOException {
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
