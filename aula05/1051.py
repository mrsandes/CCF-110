# 1051

value = float(input())

if value < 2000:
  print("Isento")
    
elif value < 3000:
  print(f"R$ {(value - 2000) * 0.08:.2f}")
    
elif value < 4500:
  print(f"R$ {(1000 * 0.08) + ((value - 3000) * 0.18):.2f}")
    
else:
  print(f"R$ {(1000 * 0.08) + (1500 * 0.18) + ((value - 4500) * 0.28):.2f}")