n=int(input("Cuantos numeros va a multiplicar? "))
producto=1

for i in range(1,n+1):
	numeros=float(input("Ingrese numeros: "))
	producto = producto * numeros

print("El producto de los numeros es: ",producto)