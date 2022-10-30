i = 1
while i < 2:
    num = input()
    num = int (num)
    if (num <0 and num >100):
        print ("Nilai tidak valid.")
    elif (num <=79 and num >=70):
        print ("B")
    elif (num <=69 and num >=60):
        print ("C")
    elif (num <=59 and num >=50):
        print ("D")
    elif (num <= 49):
        print ("E")
    else:
        print ("A")