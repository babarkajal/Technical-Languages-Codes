'''
Program 5: Write a Program calculate acceleration of a Simple Pendulum (g) if user provides the Period (T) of that pendulum in seconds & Length (L) of that pendulum in meters.
{Steps: To calculate Length of simple pendulum we can use formula
g = (L*T2)/(4*π^4)
Where,
T: is the period of pendulum in seconds
L: is length of pendulum in Meters.
g: is acceleration with the pendulum is oscillating
π: 3.142
}
Input:
Length of Pendulum in meters: 0.75
Period of Pendulum in Seconds: 1.73
Output:
Acceleration of that pendulum is 9.8281 m/s^2
'''

import math
PI =3.142
g=9.81
L = float(input("Enter Length of pendulum: "))
T = float(input("Enter Period of pendulum: "))
g = ((4 * PI **2) *L )/T**2
print("Acceleration of that pendulum is: ",g)
