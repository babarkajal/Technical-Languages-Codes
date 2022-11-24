import java.io.*;

class DeadLock {
	
	static public void main(String ... kbd) throws IOException {

		float phy, chem, bio, math, comp;

		System.out.printf("Enter Marks for phy chem ,bio, math, comp out of 100: \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		phy = Float.valueOf(br.readLine());
		chem = Float.valueOf(br.readLine());
		bio = Float.valueOf(br.readLine());
		math = Float.valueOf(br.readLine());
		comp = Float.valueOf(br.readLine());


		if(phy < 0 || chem < 0 || bio < 0 || math < 0 || comp < 0 ||
				phy > 100 || chem > 100 || bio > 100 || math > 100 || comp > 100 ){
			
			System.out.printf("marks entered negative or greater than 100\n");
			System.exit(0);
		}
		
		float per = (phy + chem + math + bio + comp) / 5;
		System.out.printf("Percentage : %5.3f\n" , per);

		if(per >= 90){
			System.out.printf("Grade A\n");
		}
		else if(per >= 80){
			System.out.printf("Grade B\n");
		}
		else if(per >= 70){
			System.out.printf("Grade C\n");
		}
		else if(per >= 60){
			System.out.printf("Grade D\n");
		}
		else if(per >= 40){
			System.out.printf("Grade E\n");
		}
		else {
			System.out.printf("Grade F\n");
		}
	}
}
