# 1071

x = int(input(""))
y = int(input(""))
sum = 0

for i in range(x - 1, y, -1):
  if i % 2 != 0:
    sum += i
    
print(sum)