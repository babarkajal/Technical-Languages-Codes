/*
 *
        1
      1  0
    1  0  1
  1  0  1  0
1  0  1  0  1

*/

class Program {
	
	public static void main(String args[]) {
		boolean flag;		
		for(int olc=0; olc<5; olc++) {
			flag = true;
			for(int ilc=0; ilc<5; ilc++) {
				if(olc+ilc >= 4)  {
					if(flag) {
						System.out.print("1  ");
						flag = false;
					}
					else {
						System.out.print("0  ");
						flag = true;
					}

				}

				else 
					System.out.print("  ");
			}
			System.out.println();
		}		
	}

}
