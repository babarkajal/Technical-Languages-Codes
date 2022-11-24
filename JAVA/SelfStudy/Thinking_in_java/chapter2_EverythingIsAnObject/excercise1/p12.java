/*
Exercise 11: (1) Turn the AllTheColorsOfTheRainbow example into a program that
compiles and runs.
*/

class AllTheColorsOfTheRainbow  {
	int noOfColors = 7;
	void changeTheHue () {
		System.out.println("Hue is changed: ");
	}
	public static void main(String args[]) {
		AllTheColorsOfTheRainbow R = new AllTheColorsOfTheRainbow ();		
		System.out.println("Colors:  "+R.noOfColors);
		R.changeTheHue();

	}

}
