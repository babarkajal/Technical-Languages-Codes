//break is used to stop the loop iteration
class breakDemo {
	public static void main(String[] args) {
			int i = 10;
			if(i%2==0){
				break;			//unreacheble statement error
				System.out.println(i);
			}
			System.out.println("Out of if");
	}
}
/*trialError2.java:6: error: break outside switch or loop
					 break;			//unreacheble statement error
					 ^
1 error
*/
