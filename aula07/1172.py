# 1172

vetor = []

for _ in range(10):
  n = int(input())
  
  if n <= 0:
    vetor.append(1)
      
  else:
    vetor.append(n)
        
for i in range(10):
  print(f"X[{i}] = {vetor[i]}")