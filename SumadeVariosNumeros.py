n=int(input("Cuantos numeros va a sumar? "))
suma=0

for i in range(1,n+1):
	numeros=float(input("Ingrese numeros: "))
	suma = suma + numeros

print("La suma es: ",suma)
