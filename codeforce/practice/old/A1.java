import java.util.Scanner;
//ACCEPTED SOLUTION
public class A1 {
  
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int m = in.nextInt();
    int a = in.nextInt();
    long count = (long)(Math.ceil(m/(double)(a))) * (long)(Math.ceil(n/(double)(a))); //simple math solution, no explanation really needed here.
    System.out.print(count);
  }//main
  
}
