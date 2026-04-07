# 1101

M, N = map(int, input().split())

while M > 0 and N > 0:
  sum = 0
  
  if M > N:
    M, N = N, M
      
  for i in range(M, N + 1):
    print(f"{i} ", end="")
    sum += i

  print(f"Sum={sum}")
  
  M, N = map(int, input().split())