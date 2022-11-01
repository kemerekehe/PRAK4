angka=int(input())
for i in range (0, angka+1, 1) :
    if i%2!=0 :
        print(i, end=" ")
    else :
        continue
print()
for i in range (angka, 0, -1) :
    if i%2==0 :
        print(i, end=" ")
        continue
    else :
        continue
