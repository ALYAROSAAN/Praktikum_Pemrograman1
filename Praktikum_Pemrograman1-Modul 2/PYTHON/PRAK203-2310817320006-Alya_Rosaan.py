def hasil(a,b,i,j,x,y):
    jumlah = (a-b)*(i/j)-(x+y)
    return jumlah

mynum = input("")
nilai = mynum.split()

a,b,i,j,x,y = map(float, nilai)

total = hasil(a,b,i,j,x,y)
print(f"{total:.3f}")

a,b  = map(float, input().split())
i,j = map(float, input().split())
x,y = map(float, input().split())

total = hasil(a,b,i,j,x,y)
print(f"{total:.3f}")



