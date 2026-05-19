# 2534

while True:
  try:
    N, Q = map(int, input().split())

    notas = []
    for _ in range(N):
      notas.append(int(input()))

    notas.sort(reverse=True)

    for _ in range(Q):
      print(notas[int(input()) - 1])

  except:
    break