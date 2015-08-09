import java.io.*;

public class A71 {
  public static void main(String[] args) {
    BufferedReader r;
    try {
      r = new BufferedReader(new InputStreamReader(System.in));
      int n = Integer.parseInt(r.readLine());
      for(int i=0; i<n; i++) {
        String temp = r.readLine();
        if(temp.length()>10) {
          System.out.println(""+temp.charAt(0)+(temp.length()-2)+temp.charAt(temp.length()-1));
        } else {
          System.out.println(temp);
        }
      }
    } catch(Exception e) {
      
    }
  }
}
