class BreakLabel{
		
		public static void main(String kajal[]){
						
			boolean x = true;	
				
			label1:{
				System.out.println("Hii from label 1");
				
				label2:	{			
					System.out.println("Hii from label 2");
					
					label3:	{			
						System.out.println("Hii from label 3");
						//break the label 1 
						if(x)
							break label1; 
					}
					System.out.println("out from label 3");
				}
				System.out.println("out from label 2");
			}	
			System.out.println("out from label 1");
		}
}
				
