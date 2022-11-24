
//bB

import java.io.*;
import java.util.*;
class Date {
	public static void main(String[] args) throws IOException{
		BufferedReader ip = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter date(dd/mm/yyyy): ");
		StringTokenizer st = new StringTokenizer(ip.readLine(),"/");		
		int days = Integer.parseInt(st.nextToken());
		int month = Integer.parseInt(st.nextToken());
		String y = st.nextToken();
		int year = Integer.parseInt(y);
		
		boolean flag = false;

		if(y.length() > 4) {
			flag = false;
		}
		
		if(month%2!= 0 || month == 8) {
			if(days <= 31) { 
				flag = true;
			}
		}

		if(month%2==0 && month != 8 && month != 2 ) {
			if(days <= 30) {
				flag = true;
			}
		}

		if(month==2) {
			if((month%4==0 && month%100 == 0) || (month%400 ==0)) {
				if(days <= 29)
					flag = true;
			}
			else if(days <=28)
				flag = true;
		}
		
		if(flag) 
			System.out.println("Valid date!!");
		else
			System.out.println("Not Valid date!!");

	}
}
/*kajal@KAJAL:~/Desktop/CLASS/Java/DailyFlash/3Oct$ java Date 
Enter date(dd/mm/yyyy): 
30/2/1999
Not Valid date!!
kajal@KAJAL:~/Desktop/CLASS/Java/DailyFlash/3Oct$ java Date 
Enter date(dd/mm/yyyy): 
31/1/2020
Valid date!!
kajal@KAJAL:~/Desktop/CLASS/Java/DailyFlash/3Oct$ java Date 
Enter date(dd/mm/yyyy): 
32/1/2020
Not Valid date!!
kajal@KAJAL:~/Desktop/CLASS/Java/DailyFlash/3Oct$ java Date 
Enter date(dd/mm/yyyy): 
30/2/12345
Not Valid date!!*/
