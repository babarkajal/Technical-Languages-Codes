class BitwiseError {
	public static void main(String args[]) {
		float f = 2.5f;
		double d = 45.5;
		System.out.println("float & float "+ (f & f));
		System.out.println("double & double "+ (d & d));
	}

}

//we cannot use binary operator & on float values because it gives error that bad operand types for operator '&'
//float values are stored internally in IEEE format using single and double precision format so using bitwise operator on them may cause unexpected result 
