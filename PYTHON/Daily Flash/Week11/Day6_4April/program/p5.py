'''
Program 5: Write a Program to calculate Period of a Simple Pendulum (T) if
user provides the Frequency (F) of that pendulum in Hz.
{Steps: To calculate Length of simple pendulum we can use formula
T = 1 / F
Where,
F: is the Frequency of pendulum in Hz
T: is period of simple pendulum in seconds
}
Input: Frequency of Pendulum in Hz: 0.57
Output: Period of simple pendulum is 1.73 seconds.
'''

import math
PI =3.142
g=9.81
F = float(input("Enter frequency of pendulum: "))
T =1/F
print("Period of simple pendulum is",T,'second')

