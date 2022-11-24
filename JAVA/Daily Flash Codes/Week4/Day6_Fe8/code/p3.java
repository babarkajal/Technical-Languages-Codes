import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);       
        	int sumOfDiv = 0, num,div;
		for(num=1; num<=100; num++) {
			sumOfDiv = 0;
			for(div=1; div<=num/2; div++) {
				if(num%div == 0)
					sumOfDiv +=div;
			}
			if(num == sumOfDiv) 
				continue;
			System.out.print(num+ " ");

		}
		System.out.println();
	}
}

