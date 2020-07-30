print("Introduzca dos números")
print("Introduzca el primero")
num = int(input())
print("Introduzca el segundo")
num1 = int(input())
if(num < num1):    
    for num2 in range(num, num1+1):
        if (num2 % 2):
            print("Número ", num2, " Es impar")            
        else:
             print("Número ", num2, "Es par")            
else:   
    for num2 in range(num1, num+1):
        if (num2 % 2):
             print("Número ", num2, " Es impar")            
        else:
             print("Número ", num2, "Es par") 

   
