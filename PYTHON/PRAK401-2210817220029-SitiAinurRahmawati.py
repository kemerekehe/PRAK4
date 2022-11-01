angka, simbol=map(str, input().split())
for i in range (1, 51, 1):
    if i % int(angka)==0:
        print(simbol, end=" ")
        continue
    print(i, end=" ")