sentence = input()
length = len(sentence)
whitespace = 0.0
lowercase = 0.0
uppercase = 0.0
symbols = 0.0

for i in sentence:
    if i == "_":
        whitespace += 1
    elif i.islower():
        lowercase += 1
    elif i.isupper():
        uppercase += 1
    else:
        symbols += 1

print("%0.16f" % (whitespace / length))
print("%0.16f" % (lowercase / length))
print("%0.16f" % (uppercase / length))
print("%0.16f" % (symbols / length))
