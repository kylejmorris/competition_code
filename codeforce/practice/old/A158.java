import java.io.*;
import java.io.BufferedReader;
//ACCEPTED SOLUTION
public class A158 {
	public static void main(String[] args) {
		BufferedReader r;
		try {
			r = new BufferedReader(new InputStreamReader(System.in));
			String[] line = r.readLine().split(" ");
			int n = Integer.parseInt(line[0]);
			int k = Integer.parseInt(line[1]);
			line = r.readLine().split(" "); //all scores
			int placeValue = Integer.parseInt(line[k-1]);
			int index = 0;
			int count = 0;
			int current = 0;
			while(index<n && ((current = Integer.parseInt(line[index++]))>0 && current>=placeValue)) {
				count++;
			}
			System.out.print(count);
			r.close();
		} catch(Exception e) {
			System.out.print(e.getMessage());
		}
	}
}
