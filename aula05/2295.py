# 2295

A, G, Ra, Rg = map(float, input().split())
gasolina = None

Ga = A / Ra
Gg = G / Rg

if Ga > Gg:
  gasolina = True
    
elif Gg > Ga:
  gasolina = False
    
else:
  gasolina = True

print("G" if gasolina else "A")
