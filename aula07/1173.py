# 1173 

N = int(input())
vetor = []

for _ in range(10):
  vetor.append(N)
  N *= 2
  
for i in range(10):
  print(f"N[{i}] = {vetor[i]}")