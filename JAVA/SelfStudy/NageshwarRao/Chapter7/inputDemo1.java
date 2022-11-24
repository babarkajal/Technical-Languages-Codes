import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;
//accepting input from keyboard

class Input {

		public static void main(String kajal[]) throws IOException {
		String i;
		int j;
		float k;
		InputStreamReader obj=new InputStreamReader(System.in);
		BufferedReader obj2=new BufferedReader(obj);
		i=obj2.readLine();
		j=Integer.parseInt(obj2.readLine());
		k=Float.parseFloat(obj2.readLine());
		System.out.println("i=" + i);
		System.out.println("i=" + j);
		System.out.println("i=" + k);
				
	
		
	}
}

