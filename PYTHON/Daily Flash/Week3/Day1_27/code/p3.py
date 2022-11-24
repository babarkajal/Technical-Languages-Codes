'''
Program 3: Write a Program to calculate Velocity of particle in the space having
Distance & Time Entered By User.
Input:
Distance: 100m
Time: 20sec
Output: The Velocity of a Particle roaming In space is 5m/s
'''

distance = int(input("Enter distance: "))
time = int(input("Enter time: "))

velocity = distance/time

print("Velocity : ", velocity , "m/sec")

