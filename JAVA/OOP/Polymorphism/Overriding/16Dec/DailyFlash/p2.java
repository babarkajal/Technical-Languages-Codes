/*
 * write real time example and use covariant return types
 */

class Goverment {
	Goverment lockdown() {
		System.out.println("Due to corona virus, Goverment started lockdown");
		System.out.println("No one is allowed to leave the house if there is not any emergency");
		return null;
	}
}

class Janta extends Goverment{
	Janta lockdown() {
		System.out.println("Some people are following all the rules given by goverment");
		System.out.println("Some people are breakign the rules and suffered by corona virus");
		return null;
	}

	public static void main(String args[]) {
		Goverment g = new Goverment();
		g.lockdown();
		Janta j = new Janta();
		j.lockdown();
	}	
}

/*
kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/16Dec/DailyFlash$ javac p2.java 
kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/16Dec/DailyFlash$ java Janta 

Due to corona virus, Goverment started lockdown
No one is allowed to leave the house if there is not any emergency
Some people are following all the rules given by goverment
Some people are breakign the rules and suffered by corona virus

*/
