//addition of digits

class Addition {
	public static void main(String[] args) {
		int num = 1394,rem =0, sum = 0;

		while(num!=0) {
			rem = num%10;
			num = num/10;
			sum +=rem;
		}
		System.out.println("Sum of digits: "+sum);
	}
}
