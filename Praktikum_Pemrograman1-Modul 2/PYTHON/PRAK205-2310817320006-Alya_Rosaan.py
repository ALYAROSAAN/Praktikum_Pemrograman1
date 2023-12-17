import math
#case 1
def mynum1(a,b):
    alas = math.sqrt(pow(b, 2)-pow(a, 2))
    return alas
def mynum2(a,b):
    tinggi = a
    return tinggi
def mynum3(a,b):
    alas = math.sqrt(pow(b, 2)-pow(a, 2))
    keliling = a + b + alas
    return keliling
def mynum4(a,b):
    alas = math.sqrt(pow(b, 2)-pow(a, 2))
    luas = 1/2*alas*a
    return luas

print("input")
a,b= map(int, input().split())

hasil= mynum1(a,b)
print("alas", int(hasil), "cm")

hasil_1= mynum2(a,b)
print("tinggi", int(hasil_1), "cm")

hasil_2= mynum3(a,b)
print("keliling", int(hasil_2), "cm")

hasil_3= mynum4(a,b)
print("luas", int(hasil_3), "cm^2")

#case 2

print("input")
a = int(input())
b = int(input())

hasil= mynum1(a,b)
print("alas", int(hasil), "cm")

hasil_1= mynum2(a,b)
print("tinggi", int(hasil_1), "cm")

hasil_2= mynum3(a,b)
print("keliling", int(hasil_2), "cm")

hasil_3= mynum4(a,b)
print("luas", int(hasil_3), "cm^2")
