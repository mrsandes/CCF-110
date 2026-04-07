# 1018

value = int(input(""))

print(value)

print(f"{value // 100} nota(s) de R$ 100,00")
rest = value % 100

print(f"{rest // 50} nota(s) de R$ 50,00")
rest = rest % 50

print(f"{rest // 20} nota(s) de R$ 20,00")
rest = rest % 20

print(f"{rest // 10} nota(s) de R$ 10,00")
rest = rest % 10

print(f"{rest // 5} nota(s) de R$ 5,00")
rest = rest % 5

print(f"{rest // 2} nota(s) de R$ 2,00")
rest = rest % 2

print(f"{rest // 1} nota(s) de R$ 1,00")