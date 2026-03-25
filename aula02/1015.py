# 1015

import math

x1, y1 = list(map(float, input("").split()))
x2, y2 = list(map(float, input("").split()))

print(f"{math.sqrt((x2 - x1)**2 + (y2 - y1)**2):.4f}")