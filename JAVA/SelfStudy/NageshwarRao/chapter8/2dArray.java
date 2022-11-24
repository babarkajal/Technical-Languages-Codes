class Array {
	public static void main(String args[]) {
		int arr1[][]=  {{10,20,30,40} ,{20,30,40,50} };
		//int arr2[][4] =  {{10,20,30,40} ,{20,30,40,50},{200,300,400,500}};
		int []arr3  = new int[10];
		
		for (int i: arr3)
			System.out.print(i+ " ");
		System.out.println();
		for(int i=0; i<2; i++) {
			for(int j=0; j<4; j++) {
				System.out.println( arr1[i][j] + " ");
			}
		}
		

	}


}
