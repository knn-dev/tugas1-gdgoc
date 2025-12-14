#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int rupiah, mata_uang;
    int jumlah_uang_asing;
    int sisa_rupiah;
    int lembar100=0, lembar50=0, lembar10=0, lembar1000=0, kurs=0;

    printf("Pilih mata uang yang ditukar:\n");
    printf("1. Yen (pecahan 1000)\n");
    printf("2. USD (pecahan 100, 50, 10)\n");
    printf("3. Yuan (pecahan 100, 10)\n");
    printf("Masukkan pilihan (1-3): ");
    scanf("%d", &mata_uang);

    printf("Masukkan jumlah rupiah yang ditukar: ");
    scanf("%d", &rupiah);

    switch(mata_uang) {
        case 1: 
            kurs = 130; // Contoh kurs Yen
            break;
        case 2: 
            kurs = 16000; // Contoh kurs USD
            break;
        case 3: 
            kurs = 2200; // Contoh kurs Yuan
            break;
        default:
            printf("Pilihan tidak valid.\n");
            return 0;
    }
    
    jumlah_uang_asing = rupiah / kurs;
    printf("\nJumlah mata uang asing: %d\n", jumlah_uang_asing);

    if (mata_uang==1)
    {
        lembar1000 = jumlah_uang_asing / 1000;
        printf("Lembar 1000 Yen: %d\n", lembar1000);
    }
    else if (mata_uang==2)
    {
        lembar100 = jumlah_uang_asing / 100;
        jumlah_uang_asing %= 100;

        lembar50 = jumlah_uang_asing / 50;
        jumlah_uang_asing %= 50;

        lembar10 = jumlah_uang_asing / 10;

        printf("Lembar 100 USD: %d\n", lembar100);
        printf("Lembar 50 USD : %d\n", lembar50);
        printf("Lembar 10 USD : %d\n", lembar10);
    }
    else if (mata_uang==3)
    {
        lembar100 = jumlah_uang_asing / 100;
        jumlah_uang_asing %= 100;

        lembar10 = jumlah_uang_asing / 10;

        printf("Lembar 100 Yuan: %d\n", lembar100);
        printf("Lembar 10 Yuan : %d\n", lembar10);
    }
    
    sisa_rupiah = (jumlah_uang_asing - (lembar1000*1000 + lembar100*100 + lembar10*10 + lembar50*50)) * kurs;

    printf("Sisa rupiah (kembalian): %d\n", sisa_rupiah);

return 0;
}  