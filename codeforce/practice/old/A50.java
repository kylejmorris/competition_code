import java.io.*;

public class A50{
  
  public static void main(String[] args){
    
   BufferedReader r;
   
   try{
     
     r = new BufferedReader(new InputStreamReader(System.in));
     
     String curr = r.readLine();
     
     String[] tokens = curr.trim().split(" ");
     
     int n = Integer.parseInt(tokens[0]);
     int m = Integer.parseInt(tokens[1]);
     
     System.out.println((n*m)/2);
     
   }catch(Exception e){System.err.println(e);}
    
  }
  
  
  
}
