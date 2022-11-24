/*
 *
 Program 3: Write a Program to calculate Velocity of particle in the space having
Distance & Time Entered By User.
Input:
Distance: 100m
Time: 20sec
Output: The Velocity of a Particle roaming In space is 5m/s.
 *
 */
#include <iostream>

int main() {
	int velocity, time,distance;
	std::cout << "Enter distance: ";
	std::cin >> distance;

	std::cout << "Enter time: ";
	std::cin >> time;
	
	velocity = distance/time;
	std::cout << "Velocity = " << velocity << " m/sec " << std::endl;
        return 0;
}
