
import java.io.*;

class DeadLock {
	static public void main(String ... kbd ) throws IOException{
		int c;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.printf("Enter Year  : ");
		c = Integer.parseInt(br.readLine());
		
		if(c > 0 && c % 400 == 0 && c % 100 == 0){
			System.out.printf("Leap Year\n");
		}
		else if (c > 0 && c % 4 == 0 && c % 100 != 0){
			System.out.printf("Leap Year\n");
		}
		else if(c <= 0){
			System.out.printf("not Valid Entry For Year\n");
		}
		else {
			System.out.printf("Not Leap Year\n");
		}
	}
}
