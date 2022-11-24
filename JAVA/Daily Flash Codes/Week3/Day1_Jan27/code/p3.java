/*
 Program 3: Write a Program to calculate Velocity of particle in the space having
Distance & Time Entered By User.
Input:
Distance: 100m
Time: 20sec
Output: The Velocity of a Particle roaming In space is 5m/s.
*/



import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int distance , time , velocity;
		System.out.print("Enter distance: ");
		distance = Integer.parseInt(in.readLine());
		
		System.out.print("Enter time: ");
		time = Integer.parseInt(in.readLine());

		velocity = distance/ time;

		System.out.println("Velocity = " + velocity + " m/sec");


	}


}
