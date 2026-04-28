# 1151

x = int(input())
a, b = 0, 1

for i in range(x):
  print(f"{a}", end=" " if i != x - 1 else "\n")
  
  a, b = b, a + b