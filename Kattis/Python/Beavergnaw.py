import math

while (True):
    d = input()
    v = input()
    if (d == 0 & v == 0):
        break
    result = pow((pow(d, 3) * math.pi / 6 - v) / (math.pi / 6), (1.0 / 3))
    print"%.9f" % (result)
