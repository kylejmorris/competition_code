class FReader {
	private BufferedReader r;
	private StringTokenizer t;
    
	public FReader() {
		r = new BufferedReader(new InputStreamReader(System.in));
		t = new StringTokenizer("");
	}
	
	public FReader(String file) throws Exception {
        	r = new BufferedReader(new FileReader(file));
        	t = new StringTokenizer("");
    	}
	
	public String next() throws Exception {
	   	while(t==null || !t.hasMoreTokens()) {
	    		t = new StringTokenizer(r.readLine());
	   	}
	   	return t.nextToken();
	}

	public String nextLine() throws Exception {
       		return r.readLine();
    	}
	
	public int nextInt() throws Exception {
		return Integer.parseInt(next());
	}
	
	public double nextDouble() throws Exception {
		return Double.parseDouble(next());
	}
	
	public void close() throws IOException {
		r.close();
	}
}
