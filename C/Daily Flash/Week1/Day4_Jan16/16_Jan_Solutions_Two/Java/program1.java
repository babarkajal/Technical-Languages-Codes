
import java.io.*;

class DeadLock {
	public static void main(String ... kbd ) throws IOException {
		int a, b, c;
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Side1: ");
		a = Integer.parseInt(br.readLine());
		
		System.out.printf("Enter Side2: ");
		b = Integer.parseInt(br.readLine());
		
		System.out.printf("Enter Hypotenus : ");
		c = Integer.parseInt(br.readLine());

		if(a > 0 && b > 0 && c > 0){
			if(a * a + b * b == c * c)
				System.out.printf("Triangle satisfies Pythagoras Theorem\n");
			else
				System.out.printf("Triangle does not satisfy Pythagoras Theorem\n");
		}
		else{
			System.out.printf("Sides are not allowed\n");
		}
	}
}
