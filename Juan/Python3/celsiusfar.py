def main():
    print("CONVERTIDOR DE GRADOS CELSIUS A GRADOS FAHRENHEIT")
    celsius = float(input("Escriba una temperatura en grados Celsius: "))

    fahrenheit = 1.8 * celsius + 32

    print(f"{celsius} ºC son {fahrenheit} ºF")


if __name__ == "__main__":
    main()
