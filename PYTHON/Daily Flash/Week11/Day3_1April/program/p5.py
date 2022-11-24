'''
Program 5: Write a Program calculate Length of a Simple Pendulum (L) if user provides the Period (T) of that pendulum in seconds.
{Steps: To calculate Length of simple pendulum we can use formula
L = (4 * π^2 * g) / T^2
Where,
T: is the period of pendulum in seconds
L: is length of pendulum in Meters.
g: is acceleration but we can simply use gravitation constant
since gravitational force acts on it. So (g = 9.81).
π: 3.142
}
Input: Period of Pendulum in Seconds: 1.73
Output: Length of that pendulum in 0.75 meters.
'''
import math
PI =3.142
g=9.81
T = float(input("Enter Period of pendulum: "))
L = ((T**2) *g )/ (4 * (PI**2))
print('Length of that Pendulum: {0:.2f}'.format(L),'meters')

