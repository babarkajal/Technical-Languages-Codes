/*
 * _________Real time example__________
 * Hospital and doctor:
 * 		Accessing instance variable inside the sttaic nested class
 */

class Hospital {
	String hName="Adhar Hospital";
	static int NoOfDoc = 20;
	//static inner class
	static class Doctor {
		void service() {

			System.out.println("Work at Adhar hospital");
			System.out.println("Name "+ hName);			//here hName is instance variable -->error
			System.out.println("NoOfDoc "+ NoOfDoc);
		}
	}

	public static void main(String[] args) {
		Doctor shah  = new Doctor();
		shah.service();
	}
}
