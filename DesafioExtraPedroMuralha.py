def verificaCompras():

    prateleira = ["arduino" , "servoMotor" , "potenciometro" , "LEDverm" , "LEDverd" , "resistor1" , "resistor100k"]
    precoPrat = [74, 5, 1.9 , 1, 1, 0.1, 0.5]

    comprados = ["resistor100k" , "resistor100k" , "servoMotor" , "arduino" , "arduino" , "potenciometro" 
    , "resistor1" , "LEDverm" , "LEDverm" , "LEDverm" , "LEDverd" , "LEDverd"]
    precoPago = [0.7,1, 5, 100,74,2.5,0.1, 1,1,2,2,1]

    erros = 0

    for i in range(len(comprados)):
        for j in range(len(prateleira)):
            if comprados[i]==prateleira[j]:
                if precoPago[i]!=precoPrat[j]:
                    erros += 1

    print(erros)
    return erros