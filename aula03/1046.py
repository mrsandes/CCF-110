# 1046

start, end = list(input("").split())
start = int(start)
end = int(end)

if start == end:
  print("O JOGO DUROU 24 HORA(S)")
  
else:
  if end > start:
    time = end - start
  
  else:
    time = 24 - start + end
  
  print(f"O JOGO DUROU {time} HORA(S)")