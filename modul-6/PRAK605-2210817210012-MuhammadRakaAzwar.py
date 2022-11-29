x = int(input())
matriksa = []
print('Matriks A')
for i in range (x):
    k = list(map(int, input().split()))
    matriksa.append(k)
matriksb = []
print('Matriks B')
for i in range (x):
    k = list(map(int, input().split()))
    matriksb.append(k)
MatriksAxB = []
print('Matriks AXB')
for i in range (x):
    MatriksAxB.append([])
    for j in range (x):
        z = 0
        for k in range (x):
            z = z + matriksa[i][k] * matriksb[k][j]
        MatriksAxB[i].append(z)
for baris in MatriksAxB:
    for k in baris:
        print(k, end=' ')
    print()