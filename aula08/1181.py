# 1181

matriz = [[ 0 for _ in range(12)] for _ in range(12)]

L = int(input())
T = input()

for i in range(12):
  for j in range(12):
    matriz[i][j] = float(input())
        
soma = 0
for i in range(12):
  soma += matriz[L][i]
    
print(f"{soma:.1f}" if T == 'S' else f"{soma / 12:.1f}")