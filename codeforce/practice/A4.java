import java.util.Scanner;
//ACCEPTED SOLUTION
public class A4 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		if(n<=3) {
			System.out.println("NO");
		} else if(n%2==0) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}
}
