# 1985

N = int(input())
soma = 0

for i in range(N):
  p, q = map(int, input().split())
  
  match p:
    case 1001:
      soma += 1.5 * q
        
    case 1002:
      soma += 2.5 * q    
        
    case 1003:
      soma += 3.5 * q    
        
    case 1004:
      soma += 4.5 * q
    
    case 1005:
      soma += 5.5 * q

print(f"{soma:.2f}")