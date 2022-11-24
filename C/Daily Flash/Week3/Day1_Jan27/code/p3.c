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
#include <stdio.h>

void main() {
	int velocity, time,distance;
	printf("Enter distance: ");
	scanf("%d",&distance);

	printf("Enter time: ");
	scanf("%d",&time);
	
	velocity = distance/time;
	printf("Velocity = %d m/sec\n",velocity);

}
