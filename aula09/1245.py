# 1245

while True:
  try: 
    N = int(input())
    botas = []
    total = 0
    
    for _ in range(N):
      atual = input()
      
      if atual.split()[1] == "E":
        if atual.split()[0] + " D" in botas:
          botas.remove(atual.split()[0] + " D")
          total += 1
            
        else:
          botas.append(atual)
              
      else:
        if atual.split()[0] + " E" in botas:
          botas.remove(atual.split()[0] + " E")
          total += 1
              
        else:
          botas.append(atual)
        
    print(total)
  
  except:
    break