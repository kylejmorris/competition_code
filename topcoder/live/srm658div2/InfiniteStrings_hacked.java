public class InfiniteString {
  public String equal(String s, String t) {
    String bigger = ""; 
    String smaller = "";
    if(s.length()>t.length()) {
      bigger = s;
      smaller = t;
    } else {
      bigger = t;
      smaller = s;
    }
    if(bigger.length()%smaller.length()!=0) {
      if(bigger.substring(0, smaller.length()).equals(smaller) && bigger.substring(smaller.length(), bigger.length()).equals(smaller.substring(0, (bigger.length()-smaller.length())))) {
        return "Equal";
      } else {
        return "Not equal";
      }
    } else {
      System.out.println("here");
      while(bigger.length()>0) {
        
        if(bigger.substring(0, smaller.length()).equals(smaller)) {
          bigger = bigger.substring(smaller.length(), bigger.length());
        } else {
          return "Not equal";
        }
      }
    }
    return "Equal";
  }
}
