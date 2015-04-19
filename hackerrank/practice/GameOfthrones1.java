import java.util.Scanner;
public class GameOfthrones1 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		char[] line = in.nextLine().toLowerCase().toCharArray();
		char[] letters = "abcdefghijklmnopqrstuvwxyz".toCharArray();
		int oddCount = 0; // There can only be 1 character that appears an odd number of times. If more, we stop program

		for(int i=0; i<letters.length; i++) {
			int count = 0; // Number of times character has appeared in the line
			for(char d: line) {
				if(d==letters[i]) {
					count++;
				}
			}
			if(count%2!=0) {
				oddCount++; // We have an odd value!
			}
		}
		if(oddCount>1) {
			System.out.println("NO");
		} else {
			System.out.println("YES");
		}
	}
}
