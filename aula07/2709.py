# 2709

while True:
  try:
    M = int(input())
    moedas = []
    
    for _ in range(M):
      moedas.append(int(input()))
        
    N = int(input())
    
    soma = 0
    for i in range(M - 1, -1, -N):
      soma += moedas[i]
      
    divisores = 0 
    for i in range(1, soma + 1):
      if soma % i == 0:
        divisores += 1
    
    if divisores == 2:
      print("You’re a coastal aircraft, Robbie, a large silver aircraft.")     
          
    else:
      print("Bad boy! I’ll hit you.") 
      
  except:
    break