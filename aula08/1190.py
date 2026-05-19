# 1190

matriz = [[ 0  for _ in range(12)] for _ in range(12)]

O = input()

for i in range(12):
  for j in range(12):
    matriz[i][j] = float(input())
          
soma, k = 0, 0
for i in range(12):
  for j in range(12):
    if i + j > i * 2 and i + j > 11:
      soma += matriz[i][j]
      k += 1
          
print(f"{soma:.1f}" if O == 'S' else f"{soma / 30:.1f}")