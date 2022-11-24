class ContinueDemo {
	public static void main(String[] args) {
			int i=1;
			while(i<=20 ) {
				if(i%7 ==0 || i%5==0) { 
					 continue;			
				}
				System.out.println(i);	
				i++;
			}

			System.out.println("Out of loop");
	}
	
}

/*as the for loop and while loop are same for excution and iteration but continue works diffirent in 'For' loop and 'while' loop 
 * if For it goes to the inc/dec part but in while loop it goes to the condition part and inc/dec condtion never get executed so it will go in Infinite condition
 * solution for is inc varible before continue statement also
 */
