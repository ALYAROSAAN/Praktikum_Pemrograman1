def reverse(angka):
    reversed = 0
    while int(angka) > 0:
        sisa = int(angka) % 10
        reversed = reversed * 10 + sisa
        angka /= 10
    return reversed
    
A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))
        