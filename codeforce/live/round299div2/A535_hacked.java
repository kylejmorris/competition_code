import java.util.StringTokenizer;
import java.io.*;
//solution was hacked during contest ;_;
public class A535 { 
  public static void main(String[] args) {
    try {
      FReader r = new FReader();
      int input = r.nextInt();
      String[] singles = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty-one", "twenty-two", "twenty-three", "twenty-four", "twenty-five", "twenty-six", "twenty-seven", "twenty-eight", "twenty-nine", "thirty", "thirty-one", "thirty-two", "thirty-three", "thirty-four", "thirty-five", "thirty-six", "thirty-seven", "thirty-eight", "thirty-nine", "forty", "forty-one", "forty-two", "forty-three", "forty-four","forty-five", "forty-six", "forty-seven", "forty-eight", "forty-nine", "fifty", "fifty-one", "fifty-two", "fifty-three", "fifty-four", "fifty-five", "fifty-six", "fifty-seven", "fifty-eight", "fifty-nine", "sixty", "sixty-one", "sixty-two", "sixty-three", "sixty-four", "sixty-five", "sixty-six", "sixty-seven", "sixty-eight", "sixty-nine", "seventy", "seventy-one", "seventy-two", "seventy-three", "seventy-four", "seventy-five", "seventy-six" ,"seventy-seven", "seventy-eight", "seventy-nine", "eighty", "eighty-one", "eighty-two", "eighty-three", "eighty-four", "eighty-five", "eighty-six", "eighty-seven", "eighty-eight", "eighty-nine", "ninety", "ninety-one", "ninety-two", "ninety-three", "ninety-four", "ninety-five", "ninety-six", "ninety-seven", "ninety-eight", "ninety-nine"};
      System.out.print(singles[input]);
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
