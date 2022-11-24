//draw a pattern for diwali

class Pattern {
	public static void main(String[] args) {
		//panati size

		for(int i=0; i<4; i++) {
			for(int j=0; j<4; j++) {
				if(i+j == 3) 
					System.out.print("^");
				else
					System.out.print(" ");
			}
			System.out.println();
		}

		
		for(int i=0; i<4; i++) {
			for(int j=0; j<=i; j++) {
				if(j==i) 
					System.out.print("^");
				else
					System.out.print(" ");
			}
			System.out.println();
		}		
	}
}
