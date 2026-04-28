# 1216

D, n = 0, 0

while True:
  try:
    nome = input()
    distancia = float(input())
    
    D += distancia
    n += 1
  except:
    break

if n > 0:
  print(f"{(D / n):.1f}")