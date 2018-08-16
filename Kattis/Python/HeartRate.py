def reset(b, p, minABPM, calcBPM, maxABPM):
    b = 0.0
    p = 0.0
    minABPM = 0.0
    maxABPM = 0.0
    calcBPM = 0.0
    return

cases = input()

for i in range (0, cases):
    # for testing: print "Enter b"
    b = input()
    # for testing: print "Enter p"
    p = input()
    minABPM = (60.0 / (p / (b - 1)))
    maxABPM = (60.0 / (p / (b + 1)))
    calcBPM = ((60.0 * b) / p)
    print"%.4f %.4f %.4f" % (minABPM, calcBPM, maxABPM)
    reset(b, p, minABPM, calcBPM, maxABPM)
    i = i + 1
