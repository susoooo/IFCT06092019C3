def main():
    print("CONVERTIDOR DE PIES Y PULGADAS A CENTÍMETROS")
    pies = float(input("Escriba una cantidad de pies: "))
    pulgadas = float(input("Escriba una cantidad de pulgadas: "))

    centimetros = (pies * 12 + pulgadas) * 2.54

    print(f"{pies} pies y {pulgadas} pulgadas son {centimetros} cm")


if __name__ == "__main__":
    main()
