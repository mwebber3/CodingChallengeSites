s = input()
smile = s.count(':)')
frown = s.count(':(')

if smile and frown:
    print("double agent")
elif smile:
    print("alive")
elif frown:
    print("undead")
else:
    print("machine")