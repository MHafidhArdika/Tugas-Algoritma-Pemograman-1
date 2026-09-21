#include <stdio.h>

int main(void) {
    printf("Latihan Mandiri\n");
    printf("Topik: Pengantar Pemograman C\n");
    printf("Semoga lancar!\n");
    printf("Sampai jumpa\n");
    
    return 0;
}

/* 
==================================================================
DAFTAR ERROR DAN CARA MEMBENARKANNYA:
==================================================================
1. Lupa pakai titik koma (;)
   - Salah    : printf("Topik: Pengantar Pemrograman C\n")
   - Benerin  : Tinggal tambah tanda titik koma (;) di paling akhir baris perintahnya.

2. Penulisan printf pakai huruf kapital
   - Salah    : PRINTF("Semoga lancar!\n");
   - Benerin  : Ubah jadi huruf kecil semua (printf) karena bahasa C bedain huruf besar sama huruf kecil.

3. Pakai petik satu (') buat nulis teks
   - Salah    : printf('Sampai jumpa\n');
   - Benerin  : Ganti petik satu (') jadi petik dua (") soalnya kalau nulis kalimat/teks wajib pakai petik dua.

4. Ketik huruf 'O' bukannya angka nol '0'
   - Salah    : return O;
   - Benerin  : Ganti huruf O besar itu jadi angka 0 biar nilainya pas.
==================================================================
*/