import math

def next_power_of_2(x):
    return 1 if x == 0 else math.ceil(math.log2(x))

