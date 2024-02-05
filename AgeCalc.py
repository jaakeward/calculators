#Program calculates year born from given age.

#import current year for calculation
from datetime import date
current_yr = date.today().year

#gather user input
name = input("Enter your name:\n")
age = int(input("Enter your age:\n"))

#calculate year born from given age
yearBorn = current_yr - age

#output name and year born
print("Hello", name, end = "")
print("! You were born in", yearBorn)