'''
Program 5: Write a Program to calculate length of a Simple Pendulum (L) if user provides the Frequency (F) of that pendulum in Hz.
{Steps: To calculate Length of simple pendulum we can use formula
L = (4*π^2*F^2) / g
Where,
F: is the Frequency of pendulum in Hz
L: is length of pendulum in Meters.
g: is acceleration with the pendulum is oscillating(g = 9.81)
π: 3.142
}
Input: Frequency of Pendulum in Hz: 0.57
Output:
Length of that pendulum is 0.75 meters.
'''
import math
PI =3.142
g=9.81
F = float(input("Enter frequency of pendulum: "))
L = g / (4 * (PI**2) * (F**2))
print("Length of that pendulum is: ",L)
