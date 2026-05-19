# 2542

while True:
  try:
    N = int(input())
    M, L = map(int, input().split())
    Mc, Lc = [], []
    
    for _ in range(M):
      Mc.append(input())
        
    for _ in range(L):
      Lc.append(input())
        
    Cm, Cl = map(int, input().split())
    A = int(input())
    
    if int(Mc[Cm - 1].split()[A - 1]) > int(Lc[Cl - 1].split()[A - 1]):
      print("Marcos")
        
    elif int(Mc[Cm - 1].split()[A - 1]) < int(Lc[Cl - 1].split()[A - 1]):
      print("Leonardo")
        
    else:
      print("Empate")
  
  except:
    break