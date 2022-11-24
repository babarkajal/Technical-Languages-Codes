class Program {
        public static void main(String[] args) {
		System.out.println("Series: ");
		for (int i=1; i<=100; i++) {
			if(i%7==0)
				continue;
			else
				System.out.print(i + "  ");
		
		}
		System.out.println();
        }
}

