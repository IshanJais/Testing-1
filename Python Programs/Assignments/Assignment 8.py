# Write a Python program to get the second largest and second smallest number from a list

list1 = [0,1,2,3,4,6,7,9,4,6,90]

list1.sort()
print('Sorted list is--> ',list1)

print('Smallest digit is--> ', list1[0])
print('Largest digit is--> ', list1[-1])

print('Second smallest digit is--> ', list1[1])
print('Second largest digit is--> ', list1[-2])

print('Third smallest digit is--> ', list1[2])
print('Third largest digit is--> ', list1[-3])

print('Fourth smallest digit is--> ', list1[3])
print('Fourth largest digit is--> ', list1[-4])