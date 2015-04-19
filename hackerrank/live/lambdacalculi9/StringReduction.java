package lambdacalculi9;
import java.util.Scanner;
public class StringReduction {
	public static int n = 26; //Default size of character partial array is 26 letters.
	public static char[] unused = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String data = in.nextLine();
		String formatted = ""; //String with all duplicates removed
		int index = 0; //Starting position to check in input data
		while(index<data.length() && n>0) {
			char temp = data.charAt(index);
			int positionFound = isUnused(temp);
			if(positionFound!=-1) {
				formatted+=temp;
				removeCharacter(positionFound);
			}
			index++;
		}
		System.out.println(formatted);
	}
	
	/**
	 * Check if target character is found in unused array.
	 * @param target the character the check
	 * @return position of unused character in unused array
	 */
	public static int isUnused(char target) {
		for(int i=0; i<n; i++) {
			if(unused[i]==target) { //if we found character
				return i; //position we want
			}
		}
		return -1; //value to represent nothing was found
	}
	
	/*
	 * Remove character at position and shift everything towards it
	 */
	public static void removeCharacter(int position) {
		for(int i=position; i<n-1; i++) {
			unused[i] = unused[i+1];
		}
		n--;
	}
}
/** store array of charcters that have not been used.
	loop through input characters. If character is in list, concatenate to final result. If not, don't. stop when list is empty.
*/