
interface RBI {
	void repoRate();
}

class SBI implements RBI{
	
	public void repoRate() {
		System.out.println("Rate of interest for SBI bank is 10.45%");
	}

	public static void main(String args[]) {
		SBI s = new SBI();
		s.repoRate();
	}
}
/*kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec23DF$ java SBI 
Rate of interest for SBI bank is 10.45%

*/
