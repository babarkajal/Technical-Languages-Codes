'''
Program 5: Write a Program calculate Frequency of a Simple Pendulum (F) if user provides the Length of pendulum in (L) in meters.
{Steps: To calculate Period of simple pendulum we can use formula
F = 1 / T
T = 2π/√L/g
Where,
F : Frequency of Simple pendulum
L: is length of pendulum in Meters.
g: is acceleration but we can simply use gravitation constant
since gravitational force acts on it. So (g = 9.81).
π: 3.142}
Input: Length of Pendulum in Meters: 0.75
Output:
Period of that pendulum is: 1.73 seconds
Frequency of that pendulum: 0.57 Hz
'''
import math
PI =3.142
g=9.81
L = float(input("Enter Length of pendulum: "))
T = (2*PI)* math.sqrt(L/g)

F = 1/T
print('Period of Pendulum: {0:.2f}'.format(T),'second')
print('Frequency of Pendulum: {0:.2f}'.format(F) ,'Hz')

