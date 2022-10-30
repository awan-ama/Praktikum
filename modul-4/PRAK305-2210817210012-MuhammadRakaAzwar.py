i = 1
while i < 2:
    detik1 = int(input())
    hari=(detik1/86400)
    temp= detik1%86400
    jam=temp/3600
    temp=temp%3600
    menit=temp/60
    detik2=temp%60
    if (detik1 >= 86400):
        print("%d hari %02d:%02d:%02d" % (hari,jam,menit,detik2))
    else:
        print("%02d:%02d:%02d" % (jam,menit,detik2))