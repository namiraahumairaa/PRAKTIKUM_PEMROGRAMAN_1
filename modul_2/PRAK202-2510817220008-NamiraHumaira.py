a = float(input("Masukkan Nilai Pertama : "))
b = float(input("Masukkan Nilai Kedua : "))
hasil = a + b
if a.is_integer():
    print(f'Hasil dari penjumlahan nilai pertama "{int(a)}" dan nilai kedua "{b:.1f}" adalah "{hasil:.2f}"')
else:
    print(f'Hasil dari penjumlahan nilai pertama "{a:.2f}" dan nilai kedua "{b:.1f}" adalah "{hasil:.2f}"')