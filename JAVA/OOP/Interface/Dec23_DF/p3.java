interface HealthMinistryNorms {
	void health();
}

interface ICMRGuidlines extends  HealthMinistryNorms {
	void covidUpdates();
}

class State implements ICMRGuidlines {

	public void health(){
		System.out.println("People's health is important. Due to covid19 all facing problems so care should have to be taken ");
	}
	public void covidUpdates(){
		System.out.println("New covid guidlines are issued");
	}

	public static void main(String[] args) {
		State s = new State();
		s.health();
		s.covidUpdates();
	}
}
/*
 * kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec23DF$ java State
People's health is important. Due to covid19 all facing problems so care should have to be taken
New covid guidlines are issued

*/
