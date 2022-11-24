'''
Program 5: Write a Program calculate period of a simple pendulum (T) if user
provides the Length of pendulum in (L) in meters.
{Steps: To calculate Period of simple pendulum we can use formula
T = 2π/√L/g
Where,
L: is length of pendulum in Meters.
g: is acceleration but we can simply use gravitation constant
since gravitational force acts on it. So (g = 9.81).
π: 3.142
}
Input: Length of Pendulum in Meters: 0.75
Output: Period of that pendulum is: 1.73 seconds
'''

import math
PI =3.142
g=9.81
L = float(input("Enter Length of pendulum: "))
T = (2*PI)/math.sqrt(L/g)

print('Period of Pendulum:',T)
