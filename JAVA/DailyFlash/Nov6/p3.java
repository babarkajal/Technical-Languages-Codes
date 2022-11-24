class ConstructorDemo {
	int rollNo;
	ConstructorDemo() {
		rollNo = 100;

	}
	ConstructorDemo(int rnum) {
		rollNo = rollNo + rnum;
		this();
		/* error: 
		 * 	call to the constructor usin this() should be first line the constructor
		 */
	}

	int getRollNum() {
		return rollNo;
	}

	void setRollNum(int rollNum) {
		this.rollNo = rollNum;
	}

	public static void main(String [] args) {
		ConstructorDemo obj = new ConstructorDemo(12);
		System.out.println(obj.getRollNum());
	}
}
