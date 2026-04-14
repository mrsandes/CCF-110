# 1847

a, b, c = map(int, input().split())
feliz = None

if a < b:
  if b >= c:
    feliz = False
  
  else:
    if c - b < b - a:
      feliz = False
    
    else:
      feliz = True
            
elif a > b:
  if b <= c:
    feliz = True
      
  else:
    if b - c < a - b:
      feliz = True
        
    else:
      feliz = False

else: 
  if b < c:
    feliz = True
  
  else:
    feliz = False
        
if feliz:
  print(":)")
    
else:    
  print(":(")  