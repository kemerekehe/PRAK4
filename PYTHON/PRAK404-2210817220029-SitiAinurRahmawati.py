while True :
    print("Pilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan=int(input("Masukkan Pilihan : "))
    if pilihan==5 :
        print("Terimakasih telah menggunakan kalkulator SITI AINUR RAHMAWATI")
        break
    elif pilihan>= 1 and pilihan <= 4 :
        pertama=int(input("Masukkan nilai pertama : "))
        kedua=int(input("Masukkan nilai kedua : "))
        if pilihan==1 :
            hasil= pertama + kedua
            print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f" %(pertama, kedua, hasil))
        elif pilihan==2 :
            hasil= pertama - kedua
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f" %(pertama, kedua, hasil))
        elif pilihan==3 :
            hasil= pertama * kedua
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f" %(pertama, kedua, hasil))
        elif pilihan==4 :
            hasil= pertama / kedua
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f" %(pertama, kedua, hasil))
    else :
        print("Input anda salah, silahkan coba lagi")