# 1441

n = -1

while n != 0:
  n = int(input())
  maior = 1
  
  if n == 0:
    break
  
  while n != 1:
    if n > maior:
      maior = n
        
    if n % 2 == 0:
      n /= 2
        
    else:
      n = (n * 3) + 1
          
  print(int(maior))