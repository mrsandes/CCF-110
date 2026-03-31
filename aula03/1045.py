# 1045

a, b, c = list(map(float, input("").split()))

if a < b:
  x = a
  a = b
  b = x
    
if a < c:
  x = a
  a = c
  c = x

if a >= b + c:
  print("NAO FORMA TRIANGULO")

else:    
  if a**2 == b**2 + c**2:
    print("TRIANGULO RETANGULO")
      
  elif a**2 > b**2 + c**2:
    print("TRIANGULO OBTUSANGULO")
      
  elif a**2 < b**2 + c**2:
    print("TRIANGULO ACUTANGULO")
      
  if a == b == c:
    print("TRIANGULO EQUILATERO")
      
  if (a == b and a != c) or (a == c and a != b) or (b == c and b != a):
    print("TRIANGULO ISOSCELES")    