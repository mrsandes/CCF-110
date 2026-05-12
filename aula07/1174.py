# 1174

vetor = []

for _ in range(100):
  N = float(input())
  vetor.append(N)

for i in range(100):
  if vetor[i] <= 10:
    print(f"A[{i}] = {vetor[i]:.1f}")