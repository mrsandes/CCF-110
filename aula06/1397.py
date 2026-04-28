# 1397

n = -1

while n != 0:
  n = int(input())
  
  if n == 0:
    break
  
  A, B = 0, 0
  
  for _ in range(n):
    a, b = map(int, input().split())
    
    if a > b:
      A += 1
        
    elif b > a:
      B += 1
  
  print(A, B)