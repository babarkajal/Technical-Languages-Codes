import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;
//accepting input from keyboard

class Input {

		public static void main(String kajal[]) throws IOException {
		char i;
		InputStreamReader obj=new InputStreamReader(System.in);
		BufferedReader obj2=new BufferedReader(obj);
		i=(char)obj2.read();
		System.out.println("i=" + i);
				
	
		
	}
}

