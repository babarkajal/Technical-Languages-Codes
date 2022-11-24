
import java.io.*;

class DeadLock {
	static public void main(String ... kbd ) throws IOException{
		int a, c;
		float b;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.printf("Enter Principal Amount : ");
		a = Integer.parseInt(br.readLine());
		
		System.out.printf("Enter Rate of Interest : ");
		b = Float.parseFloat(br.readLine());
		
		System.out.printf("Enter Number of Years : ");
		c = Integer.parseInt(br.readLine());

		if(a > 0 && b > 0 && c > 0 && b <= 100){
			System.out.printf("Simple Interest :%f \n", (a * b * c)/100);

		}
		else{
			System.out.printf("Values are wrong\n");
		}
	}
}