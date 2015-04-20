public class ImageDithering {
  public int count(String dithered, String[] screen) {
    int result = 0;
    String nonArray = ""; 
    for(int i=0; i<screen.length; i++) {
      nonArray+=screen[i];
    }
    while(nonArray.indexOf(dithered)!=-1) {
      nonArray = nonArray.substring(nonArray.indexOf(dithered)+dithered.length(), nonArray.length());
      result++;
    }
    return result;
  }
}
