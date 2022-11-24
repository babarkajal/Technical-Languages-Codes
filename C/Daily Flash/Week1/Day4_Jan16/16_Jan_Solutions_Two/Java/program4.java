
import java.io.*;

class DeadLock {
	
	static public void main(String ... kbd) throws IOException {

		int a;
		System.out.printf("Enter Positive Size : \n");

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		a = Integer.valueOf(br.readLine());

		if (a < 0) {
				System.exit(0);
		}
		
		for(int i = 1; i <= a*a; i++ ){
			if(i % a == 0){
				System.out.printf("%d\n", i);
			}
			else{
				System.out.printf("%d\t", i);
			}
		}
		
	}
}