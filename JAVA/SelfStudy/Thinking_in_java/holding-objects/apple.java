import java.util.ArrayList;
class Apple {
	private static int counter =0;
	private final int id = counter++;
	int id() {
		return id;
	}
}

class Orange {
}

class Test {
	public static void main(String[] args) {
		ArrayList arr= new ArrayList();

		for(int i=0; i<3; i++) {
			arr.add(new Apple());
		}

		arr.add(2,new Orange());

		for(int i=0; i<4; i++) {
			System.out.println(arr.get(i));
		}
		System.out.println("repeat");
		arr.add(new Orange());
		for(int i=0; i<3; i++) {
			System.out.println(arr.get(i));
		}
	}
}
