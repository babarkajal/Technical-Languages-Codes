//display a binary number in other system

class Binary{
		public static void main(String[] args){
				byte num = (byte)0b10_10;	//underscore used for readability
				//int num=0b1010;
				System.out.printf("In decimal =%d\n",num);
				System.out.printf("In octal =%o\n",num);
				System.out.printf("In hexadecimal=%x\n",num);
				System.out.printf("In Binary =%s\n",num);
		}
}
