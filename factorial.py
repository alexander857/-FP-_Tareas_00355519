print("Factorial de un numero")
n = int(input("Ingrese un numero "))
factorial = 1

if n == 1:
	print("El factorial de ",n," es ",factorial)

else:
	for i in range(1,n+1):
		factorial = factorial*i

print("El factorial de ",n," es ",factorial)