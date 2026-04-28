# 2144

media, n = 0, 0

while True:
  w1, w2, r = map(int, input().split())
  
  if (w1, w2, r) == (0, 0, 0):
    break
  
  M = (w1 * ( 1 + (r / 30)) + (w2 * ( 1 + (r / 30)))) / 2
  media += M
  n += 1
  
  if 1 <= M < 13:
    print("Nao vai da nao")
      
  elif 13 <= M < 14:
    print("E 13")
      
  elif 14 <= M < 40:
    print("Bora, hora do show! BIIR!")
      
  elif 40 <= M < 60:
    print("Ta saindo da jaula o monstro!")
  
  else:
    print("AQUI E BODYBUILDER!!")
        
if media / n > 40:
  print("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!")