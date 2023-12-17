def mynum1(jari_jari,tinggi_bejana):
    volume = 22/7 * pow(jari_jari, 2) * tinggi_bejana
    return volume
def mynum2(jari_jari,tinggi_bejana):
    luas = 2 * 22/7 * jari_jari * (jari_jari+tinggi_bejana)
    return luas
def mynum3(jari_jari,tinggi_bejana):
    keliling = 2 * 22/7 * jari_jari
    return keliling

#case 1
print("input")
jari_jari = float(input())
tinggi_bejana = float(input())

print("output")
hasil= mynum1(jari_jari,tinggi_bejana)
print(f"volume = {hasil:.2f}")

hasil_1= mynum2(jari_jari,tinggi_bejana)
print("luas = {:.2f}".format(hasil_1))

hasil_2= mynum3(jari_jari,tinggi_bejana)
print(f"keliling = {hasil_2:.2f}")

#case 2
print("input")
jari_jari,tinggi_bejana = map(float, input().split())

print("output")
hasil= mynum1(jari_jari,tinggi_bejana)
print(f"volume = {hasil:.2f}")

hasil_1= mynum2(jari_jari,tinggi_bejana)
print("luas = {:.2f}".format(hasil_1))

hasil_2= mynum3(jari_jari,tinggi_bejana)
print(f"keliling = {hasil_2:.2f}")



