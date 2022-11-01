awal, akhir = map(int, input().split())
a=akhir
if awal<akhir :
    for i in range (awal, akhir+1, 1) :
        print(i, end=" ");
        if a>awal :
            print(a, end=" - ")
        else :
            print(a)
        a=a-1 
elif awal>akhir :
    for i in range (awal, akhir-1, -1) :
        print(i, end=" ");
        if a<awal :
            print(a, end=" - ")
        else :
            print(a)
        a=a+1 