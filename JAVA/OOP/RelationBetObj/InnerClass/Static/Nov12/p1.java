/*
 * _________-real time example__________
 * Hospital and doctor:
 */

class Hospital {
	//static inner class
	static class Doctor {
		void service() {
			System.out.println("Work at Adhar hospital");
		}
	}

	public static void main(String[] args) {
		Doctor shah  = new Doctor();
		shah.service();
	}
}
