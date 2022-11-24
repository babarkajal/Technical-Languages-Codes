/*bB
 * 	Classes and Objects 
 *
 * Class: 
 * 	It is a specificication for an object .
 * 	It is blue print 
 * 	It has no any physical existance
 * Object:
 * 	It is an instance of an class which has some physical existance
 * 	It contain all the things defines in class
 * e.g class - human 
 * 	object - kajal
 * 	
 * 	class - Car
 * 	object - maruti suzuki
 *
 */

class IPLPlayer {
	String pName = "KLRahul";
	int runs2020 = 5;
	static int totalRuns = 5230;
	
	void playerInfo() {
		System.out.println("Playername "+ pName);
		System.out.println("IPL2020Runs "+ runs2020);
		System.out.println("Total runs "+ totalRuns);
	}

	public static void main(String[] args) {
		//create object of class
		IPLPlayer ipl2020 = new IPLPlayer();
		ipl2020.playerInfo();
		
		System.out.println("Playername "+ ipl2020.pName);	//object must be there to access instance content
		System.out.println("IPL2020Runs "+ ipl2020.runs2020);
		System.out.println("Total runs "+ totalRuns);
		

	}
}
