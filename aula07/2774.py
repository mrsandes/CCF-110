# 2774

import math

while True:
  try:
    H, M = map(int, input().split())
    
    X = list(map(float, input().split()))
    Xm = sum(X) / len(X)      
    QT = len(X)
    
    soma = 0    
    for i in range(QT):
      soma += (X[i] - Xm)**2
        
    P = math.sqrt(soma / (QT - 1))
    
    print(f"{P:.5f}")
  
  except:
    break