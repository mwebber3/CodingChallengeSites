firstRoll = input()
secondRoll = input()
lowestRoll = firstRoll
highestRoll = secondRoll

if (secondRoll < firstRoll):
    lowestRoll = secondRoll
    highestRoll = firstRoll

for i in range ((lowestRoll + 1), (highestRoll + 2)):
    print (i)
    i = i + 1
