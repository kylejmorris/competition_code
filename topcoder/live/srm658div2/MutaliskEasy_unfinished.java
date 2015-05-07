import java.util.ArrayList;
public class MutaliskEasy {
  public int minimalAttacks(int[] x) {
    ArrayList<Integer> data = new ArrayList<Integer>();
    for(int i=0; i<x.length; i++) {
      data.add(x[i]);
      System.out.println(data.get(i));
    }
    if(x.length==1) {
      data.add(0); data.add(0);
    } 
    if(x.length==2) {
      data.add(0);
    }
    return doMath(data, 0);
  }
  
  public int doMath(ArrayList<Integer> data, int count) {
    
    if(data.get(0)<=0 && data.get(1)<=0 && data.get(2)<=0) {
      return count;
    } else {
      int[] outcomes = new int[6];
      ArrayList<Integer> data2 = new ArrayList<Integer>();
      data2.add(data.get(0)-9); data2.add(data.get(1)-3); data2.add(data.get(2)-1);
      outcomes[0] = doMath(data2, count+1);
      ArrayList<Integer> data3 = new ArrayList<Integer>();
      data3.add(data.get(0)-9); data3.add(data.get(1)-1); data3.add(data.get(2)-3);
      outcomes[1] = doMath(data3, count+1);
      ArrayList<Integer> data4 = new ArrayList<Integer>();
      data4.add(data.get(0)-3); data4.add(data.get(1)-1); data4.add(data.get(2)-9);
      outcomes[2] = doMath(data4, count+1);
      ArrayList<Integer> data5 = new ArrayList<Integer>();
      data5.add(data.get(0)-3); data5.add(data.get(1)-9); data5.add(data.get(2)-1);
      outcomes[3] = doMath(data5, count+1);
      ArrayList<Integer> data6 = new ArrayList<Integer>();
      data6.add(data.get(0)-1); data6.add(data.get(1)-3); data6.add(data.get(2)-9);
      outcomes[4] = doMath(data6, count+1);
      ArrayList<Integer> data7 = new ArrayList<Integer>();
      data7.add(data.get(0)-1); data7.add(data.get(1)-9); data7.add(data.get(2)-3);
      outcomes[5] = doMath(data7, count+1);
      int min = Integer.MAX_VALUE;
      for(int i=0; i<6; i++) {
        if(outcomes[i]<min) {
          min = outcomes[i];
        }
      }
      return min;
    }
  }
}
