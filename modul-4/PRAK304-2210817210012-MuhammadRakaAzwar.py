i = 1
while i < 2:
        bil = input()
        bil = int (bil)
        if (bil <=99 and bil >=20 or bil == 10):
                print("Puluhan.")
        elif (bil <=9 and bil >=1):
                print("Satuan.")
        elif (bil <=19 and bil >=11):
                print("Belasan.")
        elif (bil == 0):
                print("Nol.")
        else:
                print("Anda Menginput Melebihi Limit Bilangan.")