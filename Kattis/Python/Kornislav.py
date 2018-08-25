numbers = raw_input().split(' ') #takes string separated by spaces
numArray = [int(num) for num in numbers]
numArray.sort()
print (numArray[0] * numArray[2])
