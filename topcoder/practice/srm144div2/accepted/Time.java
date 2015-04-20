public class Time {
	public String whatTime(int seconds) {
		String result = "";
		result += (seconds%60)+":";
		seconds/=60;
		result += (seconds%60)+":";
		seconds/=60;
		result += (seconds%12);
		return result;
	}
}
