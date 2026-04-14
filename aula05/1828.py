# 1828

N = int(input())

for i in range(N):
  sheldon, raj = input().split()
  sheldonWin = False
  
  print(f"Caso #{i + 1}: ", end="")
  
  if sheldon == raj:
    print("De novo!")
    continue

  match sheldon:
    case "pedra":
      if raj == "tesoura" or raj == "lagarto":
        sheldonWin = True

    case "papel":
      if raj == "pedra" or raj == "Spock":
        sheldonWin = True
            
    case "tesoura":
      if raj == "papel" or raj == "lagarto":
        sheldonWin = True
            
    case "lagarto":
      if raj == "Spock" or raj == "papel":
        sheldonWin = True        
            
    case "Spock":
      if raj == "tesoura" or raj == "pedra":
        sheldonWin = True         
  
  if sheldonWin:
    print("Bazinga!")
  
  else:
    print("Raj trapaceou!")