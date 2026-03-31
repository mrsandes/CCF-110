# 1048

salary = float(input(""))

if salary < 400.01:
  rate = 15
    
elif salary < 800.01:
  rate = 12
    
elif salary < 1200.01:
  rate = 10
    
elif salary < 2000.01:
  rate = 7

else:
  rate = 4
    
print(f"Novo salario: {salary * (1 + rate / 100):.2f}")
print(f"Reajuste ganho: {salary * (1 + rate / 100) - salary:.2f}")
print(f"Em percentual: {rate} %")