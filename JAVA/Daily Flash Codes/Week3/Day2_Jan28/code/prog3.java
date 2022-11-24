
import java.util.*;

class Program {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int current , voltage, res;
		System.out.print("Enter current: ");
		current = sc.nextInt();
		
		System.out.print("Enter resistace: ");
		res = sc.nextInt();

		voltage = current * res;
		System.out.println("Voltage: "+voltage);

	}
}
