x, y = map(int, input().split())
if (x != y):
    print('Jumlah tidak sama')
else:
    barisx = list(map(int, input().split()))
    barisy = list(map(int, input().split()))
    for i in range (x):
        print(barisx[i] * barisy[i], end=' ')