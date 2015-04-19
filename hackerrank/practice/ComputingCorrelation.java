import java.text.DecimalFormat;
import java.util.Scanner;
public class ComputingCorrelation {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int m = 0; //math mark sum
		long m2 = 0; //Squared math mark 
		
		
		int c = 0; //chemistry mark sum
		long c2 = 0; //squared chemistry mark
		int p = 0; //Physics mark sum
		long p2 = 0; //squared physics mark
		
		int n = 0; //Number of records
		
		long mCrossP = 0; //value of sum of m*p 
		long mCrossC = 0; //Value of sum of m*c
		long pCrossC = 0; //value of p*c
		n = in.nextInt(); 
		for(int i=0; i<n; i++) {
			int nextMath = in.nextInt();
			int nextPhysics =in.nextInt();
			int nextChem = in.nextInt();
			mCrossP+=nextMath*nextPhysics;
			mCrossC+=nextMath*nextChem;
			pCrossC+=nextPhysics*nextChem;
			m+=nextMath;
			m2+=Math.pow(nextMath, 2);
			p+=nextPhysics;
			p2+=Math.pow(nextPhysics, 2);
			c+=nextChem;
			c2+=Math.pow(nextChem, 2);
			
		}
		double correlationMP = getAltCorrelation(m, m2, p, p2, mCrossP, n);
		correlationMP = (double)(int)(correlationMP*100+0.5)/100;
		
		double correlationPC = getAltCorrelation(p, p2, c, c2, pCrossC, n);
		correlationPC = (double)(int)(correlationPC*100+0.5)/100;
		
		double correlationMC = getAltCorrelation(m, m2, c, c2, mCrossC, n);
		correlationMC = (double)(int)(correlationMC*100+0.5)/100;
		DecimalFormat df = new DecimalFormat("0.00");
		
		System.out.println(df.format(correlationMP)+ "\n" + df.format(correlationPC) + "\n" + df.format(correlationMC));
		
	}
	
	/**
	 * Compute correlation given 2 different variables (their sums and means)
	 * @param a sum of variable a
	 * @param a2 sum of squares of variable a
	 * @param b sum of variable b
	 * @param b2 sum of square of variable b
	 * @param aCrossB product of sums, dot product if you will.
	 * @param n the number of records in a and b
	 * @return
	 */
	public static double getCorrelation(int a, long a2, int b, long b2, long acrossB, int n) {
		double numerater = n*acrossB - a*b;
		double denominater = Math.sqrt(n*a2 - a*a) * Math.sqrt(n*b2 - b*b);
		if(numerater==0 && denominater==0) {
			return 1.0;
		}
		return numerater/denominater;
	}
	
	public static double getAltCorrelation(int a, long a2, int b, long b2, long acrossB, int n) {
		
		double deviationA = getStandardDeviation(a, a2, n);
		double deviationB = getStandardDeviation(b, b2, n);
		double correlation = acrossB - n*getMean(a,n)*getMean(b, n);
		correlation = correlation / ((n-1)*deviationA*deviationB);
		return correlation;
	}
	
	public static double getMean(int a, int n) {
		return a/n;
	}
	
	public static double getStandardDeviation(int a, long a2, int n) {
		double deviation = a2/n - (double)Math.pow(getMean(a, n), 2);
		return Math.sqrt(deviation);
	}

}
