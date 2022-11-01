hasil=0
awal, akhir=map(int, input().split())
for i in range (0, awal+1, 1) :
    hasil_2=0;
    for a in range (i, 0, -1) :
        hasil_1= a*akhir
        hasil_2=hasil_1+hasil_2
        if a==1 :
            print("(%d * %d) = %d" %(a, akhir, hasil_2))
        else :
            print("(%d * %d)" %(a, akhir), end=" + ")
        hasil=hasil_1+hasil
print(hasil)