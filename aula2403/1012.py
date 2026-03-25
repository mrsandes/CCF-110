# 1012

values = list(map(float, input("").split()))

print(f"TRIANGULO: {(values[0] * values[2]) / 2:.3f}")
print(f"CIRCULO: {3.14159 * values[2]**2:.3f}")
print(f"TRAPEZIO: {((values[0] + values[1]) * values[2]) / 2:.3f}")
print(f"QUADRADO: {values[1]**2:.3f}")
print(f"RETANGULO: {values[0] * values[1]:.3f}")