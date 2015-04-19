import java.util.StringTokenizer;
import java.io.*;
import java.util.ArrayList;
//solution was ACCEPTED during live competition
public class A534 {
	public static void main(String[] args) {
		try {
			FReader reader = new FReader();
			int n = reader.nextInt();
			int k = 0;
			switch(n) {
			case 1: k = 1; break;
			case 2: k = 1; break;
			case 3: k = 2; break;
			default: k = n; break; //otherwise...
			}
			ArrayList<Integer> r = new ArrayList<Integer>();
			r.add(1); //default...
			if(k==2) {
				r.add(3); //special case
			}
			for(int i=3; i<=k; i++) {
				if(i%2==0) {
					r.add(0, i); //evens at beginning
				} else {
					r.add(r.size(), i);//odds on end
				}
			}
			if(k==4) {
				r.add(0, 2); //special case
			} else if(k>4) {
				r.add(2);
			}
			System.out.println(k); //how many
			for(int i : r) {
				System.out.print(i + " ");
			}
			reader.close();
		} catch(IOException e) {
			
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
