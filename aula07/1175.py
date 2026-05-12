# 1175

vetor = []

for _ in range(20):
  N = int(input())
  vetor.append(N)
    
for i in range(20 // 2):
  vetor[i], vetor[20 - i - 1] = vetor[20 - i - 1], vetor[i]
    
for i in range(20):
  print(f"N[{i}] = {vetor[i]}")