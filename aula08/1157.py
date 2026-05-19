# 1157

while True:
  n = int(input())
  
  if n == 0:
    break
  
  e = len(str(2**((n - 1) * 2)))

  for i in range(n):
    for j in range(n):
      print(f"{2**(i + j):>{e}}", end="")
      
      if j < n - 1:
        print(" ", end="")
    print()
  print()