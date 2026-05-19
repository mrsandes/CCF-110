# 2540

while True:
  try:
    N = int(input())
    
    votos = list(map(int, input().split()))
    soma = 0
    
    for i in range(N):
      soma += votos[i]
        
    if soma >= N * (2 / 3):
      print("impeachment")
        
    else:
      print("acusacao arquivada")
      
  except:
    break