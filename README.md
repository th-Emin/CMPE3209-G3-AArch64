# CMPE3209 Computer Organization Dönem Projesi

**Öğrenci:** Muhammet Emin Toraman  
**Öğrenci No (SID):** 5001230008  
**Seçilen Görev:** G3 — Mesaj Şifreleme ve Bütünlük  
**Mimarisi / ISA:** ARM AArch64  

---

* **Dizi Boyu (N):** 32
* **Cache Konfigürasyonu:** 256 B / 8 B Line / 2-way Set-Associative / 32 Line / 16 Set
* **Write Policy:** Write-back
* **Interrupt:** k = 8. instruction, Türü = I/O
* **Adres Alanları (32-bit):** Tag = 25 bit, Set = 4 bit, Word = 3 bit

---

## Kod Derleme ve Çalıştırma

```bash
# C99 Standartlarında Debug Sembolleriyle Derleme (-O0)
gcc -std=c99 -g -O0 main.c -o main_O0

# GDB Simülatörü İle Çalıştırma
gdb ./main_O0

# Disassembly Dökümü Alma
objdump -d main_O0 > asm/objdump.txt
```
