
interface RBI {
	void loanType();
	void ROI();	
}

class SBI implements RBI {
	public void loanType() {
		System.out.println("Home loan");
	}	
	public void ROI() {
		System.out.println("8.95 %");
	}

}

class Test {
	public static void main(String args[]) {
		SBI s = new SBI();
		s.loanType();
		s.ROI();
	}
}


