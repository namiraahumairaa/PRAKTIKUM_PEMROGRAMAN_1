import math
al = 12
ti = 5
sa = ti
sb = math.sqrt(al * al + ti * ti) 
sc = al 
kel = (sa + sb + sc)
lu = (al * ti) / 2  
print("Diketahui :")
print("Alas = {} cm " .format(al)) 
print("Tinggi = {} cm" .format(ti)) 
print("")
print("Jawab :")
print("Sisi A = {} cm" .format(ti)) 
print("Sisi B = {} cm" .format(round(sb)))
print("Sisi C = {} cm" .format(al))
print("Keliling = {} cm" .format(round(kel)))
print("Luas = {} cm" .format(round(lu)))