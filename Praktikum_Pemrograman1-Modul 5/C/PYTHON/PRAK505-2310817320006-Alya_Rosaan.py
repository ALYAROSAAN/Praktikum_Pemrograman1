def Biodata(tahun, nama, asal):
    tahun_sekarang = 2023
    umur = int(tahun_sekarang) - int(tahun_lahir)
    print("perkenalkan nama saya: ", nama)
    print("umur saya: ", umur)
    print("saya adalah angkatan: ",tahun_sekarang)
    print("asal saya dari: ", asal)

tahun_lahir = int(input(""))
nama = input("")
asal = input("")
Biodata(tahun_lahir, nama, asal)
