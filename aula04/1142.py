# 1142

N = int(input(""))
i = 1

while N > 0:
  if i % 4 == 0:
    print("PUM")
    N -= 1
        
  else:
    print(f"{i} ", end="")
    
  i += 1