import java.util.StringTokenizer;
import java.io.*;
public class ProblemB {
  public static void main(String[] args) {
    try {
      FReader r = new FReader();
      int n = r.nextInt();
      int placevalue = 1;
      int value = 0;
      while(n>0) {
        int digit = n%10;
        if(digit==7) {
          value += 2*Math.pow(2, placevalue-1);
        } else {
          value += Math.pow(2, placevalue-1);
        }
        placevalue++;
        n = n/10;
      }
      System.out.print(value);
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
 
 private String next() throws IOException {
  while(!t.hasMoreElements()) {
   t = new StringTokenizer(r.readLine());
  }
  return t.nextToken();
 }
 
 public int nextInt() throws IOException {
  return Integer.parseInt(next());
 }
 
 public double nextDouble() throws IOException {
  return Double.parseDouble(next());
 }
 
 public void close() throws IOException {
  r.close();
 }
}
