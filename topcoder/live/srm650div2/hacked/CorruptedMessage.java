public class CorruptedMessage {
	public String reconstructMessage(String s, int k) {
		char c = 'a';
		//finding character
		for(int i='a'; i<'a'+26; i++) {
			int count = 0;
			for(int d=0; d<s.length(); d++) {
				if(s.charAt(d)==i) {
					count++;
				}
			}
			if(count==(s.length()-k)) {
				c = (char)(i);
			}	
		}
		//replacing characters corrupted
		int position = 0;
		int changed = 0;
		String result = "";
		while(position<s.length()) {
			if(s.charAt(position)!=c && changed<=k) {
				changed++;
				result+=c;
			} else {
				result+=s.charAt(position);
			}
			position++;
		}
		return result;
	}
}
