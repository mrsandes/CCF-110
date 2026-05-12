# 1176

V = int(input())

for _ in range(V):
  N = int(input())
  
  a, b = 1, 0
  
  for _ in range(N):
    a, b = b, a + b
      
  print(f"Fib({N}) = {b}")