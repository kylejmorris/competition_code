package algorithms;
import java.util.Scanner;

public class TutorialIntro {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int v = in.nextInt(); //value to search for
		int n = in.nextInt(); //size of array
		int index = 0; //counter of position in data array
		while(in.nextInt()!=v) {
			index++;
		}
		System.out.println(index); //this is where we found it!
	}

}
