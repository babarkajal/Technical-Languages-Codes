/*WAP for single parameterized constructor and call the method in it 
 */
class City {

	City(String city) {
		livingIn(city);
	}

	void livingIn(String city ) {
		System.out.println("Living in city "+ city);
	}
	public static void main(String[] args) {
		City c = new City("Pune");

	}

}
