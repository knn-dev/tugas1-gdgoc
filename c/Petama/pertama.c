#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int main() {

        // Pertemuan Pertama C (02-oktiber-2025)
    // printf("***********************************\n");
    // printf("Nama Saya : Keenan Radinka Gamma\n");
    // printf("Nim Saya : 101032500203\n");
    // printf("Kelas : TK-49-04\n");
    // printf("***********************************\n");

    // int a, b, c;
    // printf("Masukkan Nilai A : ");
    // scanf("%d", &a);
    // printf("Masukkan Nilai B : ");
    // scanf("%d", &b);
    // c = a + b;
    // printf("Hasil A + B = %d\n", c);

        //nyoba input output 
    // int b;
    // char a[10], c;
    // printf ("Masukan nama kamu : ");
    // scanf ("%s", &a);
    // fflush(stdin);
    // printf ("Masukan nim kamu : ");
    // scanf ("%d", &b);
    // fflush(stdin);
    // printf ("Masukan kelas kamu : ");
    // scanf ("%s", &c);

    // printf ("***********************************\n");
    // printf ("Nama saya : %s\n", a);
    // printf ("Nim saya : %d\n", b);
    // printf ("Kelas saya : %s\n", c);
    // printf ("***********************************\n");

    // int a, b, c;
    // printf("Masukkan Nilai A : ");
    // scanf("%d", &a);
    // printf("Masukkan Nilai B : ");
    // scanf("%d", &b);
    // printf("A = %d, B = %d\n", a,b);

            // Latihan 1
    // int a, b, c;
    // printf("Berapa umur anda? \n");
    // scanf("%d", &a);
    // printf("Berapa jumlah saudara anda? \n");
    // scanf("%d", &b);
    // printf("Anda anak ke berapa? \n");
    // scanf("%d", &c);
    
    // printf("*************************************** \n");

    // printf("Umur saya adalah %d tahun, saya memiliki %d orang saudara, dan saya adalah anak ke %d\n", a,b,c);

            // Latihan 2
    // int a, b, c;
    // printf("Masukkan Nilai A : ");
    // scanf("%d", &a);
    // printf("Masukan Nilai B : ");
    // scanf("%d", &b);

    // c = (a*b)-(a*b/2);

    // printf("luas bagian merah pada kubus tersebut adalah %d\n", c);

        // Pertemuan Kedua C (09-oktober-2025)
        // Latihan 1
    // int A,B,C;
    // A = 10;

    // printf("Masukan Nilai B : ");
    // scanf("%d", &B);
    // C = A * B;

    // printf("A=%d\n", A);
    // printf("B=%d\n", B);
    // printf("C=%d", C);

        // Latihan 2
    // int UTS,UAS;
    // float NAkhir;

    // printf("Masukan Nilai UTS : "); 
    // scanf("%d", &UTS);
    // printf("Masukan Nilai UAS : ");
    // scanf("%d", &UAS);

    // NAkhir = (float) (UTS + UAS) / 2;

    // printf("Nilai Akhir : %f", NAkhir);

        // Latihan 3
    // int A, B, C;
    // float X, Y, Z;

    // printf("Masukan Nilai A : ");
    // scanf("%d", &A);
    // printf("Masukan Nilai B : ");
    // scanf("%d", &B);
    // printf("Masukan Nilai X : ");
    // scanf("%f", &X);

    // C = A + B;
    // Y = C;

    // printf("Nilai C : %d\n", C);
    // printf("Nilai Y : %f\n", Y);
    
    // Z = (float) A / B;
    // C = Z;

    // printf("Nilai C : %d\n", C);
    // printf("Nilai Z : %f\n", Z);

        //Latihan 4
    // char HurufAwal, Awal, pilihan;

    // HurufAwal = 'a';

    // printf("Masukan huruf awal nama anda : ");
    // scanf("%c", &Awal);
    // fflush(stdin);

    // printf("Pilih lah salah satu ('Y' atau 'T') : ");
    // scanf(" %c", &pilihan);
    // fflush(stdin);

    // printf("Huruf Awal : %c\n", HurufAwal);
    // printf("Nama Anda : %c\n", Awal);  
    // printf("Pilihan Anda : %c\n", pilihan);
    
        // Latihan 5
    // char Barang[20] = "Toko Buku";
    // char alamat[30];

    // printf("Nama Barang : %s\n", Barang);

    // printf("Alamat (tanpa spasi) : ");
    // scanf("%s", &alamat);
    // printf("Hasil Alamat (Menggunakan scanf) : %s\n", alamat);
    // getchar();
    
    // printf("Alamat : ");
    // gets(alamat);
    // printf("Hasil Alamat (Menggunakan gets) : %s\n", alamat);
    
    // printf("Alamat : ");
    // fgets(alamat,20,stdin);
    // printf("Hasil Alamat (Menggunakan fgets) : %s\n", alamat);

        // Latihan 6
        // int nomor;
        // char nama[20], jenis_kelamin, alamat[30], kota[20];

        // printf("Masukan Nomor : ");
        // scanf("%d", &nomor);
        // getchar();
        
        // printf("Masukan Nama : ");
        // fgets(nama,20,stdin);
        
        // printf("Masukan Jenis Kelamin (L/P) : ");
        // scanf(" %c", &jenis_kelamin);
        // getchar();
        
        // printf("Masukan Alamat : ");
        // fgets(alamat,30,stdin);
        
        // printf("Masukan Kota : ");
        // fgets(kota,20,stdin);

        // printf("***********************************\n");
        // printf("Nomor : %d\n", nomor);
        // printf("Nama : %s", nama);
        // printf("Jenis Kelamin : %c\n", jenis_kelamin);
        // printf("Alamat : %s", alamat);
        // printf("Kota : %s", kota);


        //  Latihan Analisa Kasus IF 1
        // int main() {
        //     float nilai;

        //     printf("Masukan Nilai Anda (0-100) : ");
        //     scanf("%f", &nilai);

        //     if (nilai > 75)
        //         printf("Status : Lulus\n");
        //     else
        //         printf("Status : Tidak Lulus\n");  

        // Latihan Analisa Kasus IF 2

        // int main() {
        //     char tujuan[20];
        //     int baru = 0, total = 0;
        //     int awal = 15;
        //     printf("pilih tujuan anda \n a. kota \n b. pasar \n c. bandara \n");
        //     printf("Pilihan anda : ");
        //     fgets(tujuan, sizeof(tujuan), stdin);

        //     tujuan[strcspn(tujuan, "\n")] = '\0';

        //     if (strcmp(tujuan, "kota") == 0) {  
        //         printf("Anda akan ke kota, maka belok kanan dengan jarak 5 km.\n");
        //         baru = 5;
        //     } 
        //     else if (strcmp(tujuan, "pasar") == 0) {
        //         printf("Anda akan ke pasar, belok kiri dengan jarak 10 km.\n");
        //         baru = 10;
        //     } 
        //     else {
        //         printf("Anda akan menuju bandara, maka lurus dengan jarak 15 km.\n");
        //         baru = 15;
        //     }

        //     total = awal + baru;

        //     printf("Anda akan menempuh perjalanan sejauh %d km sejak anda berangkat.\n", total);

        // latihan Analisa Kasus IF 3
    // int main() {
    //     int umur;
    //     char pasangan;

    //     printf("Masukan Umur Anda : ");
    //     scanf("%d", &umur);
        
    //     if (umur >= 20) {
    //         printf("Apakah Anda sudah membawa pasangan? (Y/T) : ");
    //         scanf(" %c", &pasangan);

    //         if (pasangan == 'Y' || pasangan == 'y') 
    //             printf("Anda akan tinggal di apartemen B.\n");
            
    //         else if (pasangan == 'T' || pasangan == 't') 
    //             printf("Anda akan tinggal di apartemen C.\n");
            
    //     }
    //     else 
    //         printf("Anda akan tinggal di suite A.\n");

    // Latihan Analisa Kasus IF (word)
    // int main (){
    //     char tujuan[10], tempat[15] = "";
    //     int tiket = 0, harga = 0, total = 0;

    //     printf("Pilih tujuan anda (gunung, pantai, taman) : ");
    //     fgets(tujuan, sizeof(tujuan), stdin);
    //     tujuan[strcspn(tujuan, "\n")] = '\0';

    //     if (strcmp(tujuan, "gunung") == 0) {
    //         printf("Anda memilih tujuan gunung, tiket masuknya adalah 50.000\n");
    //         tiket = 50000;
    //         harga = 200000;
    //         strcpy(tempat, "penginapan");
    //     }
    //     else if (strcmp(tujuan, "pantai") == 0) {
    //         printf("Anda memilih tujuan pantai, tiket masuknya adalah 40.000\n");
    //         tiket = 40000;
    //         harga = 200000;
    //         strcpy(tempat, "penginapan");
    //     }
    //     else if (strcmp(tujuan, "taman") == 0) {
    //         printf("Anda memilih tujuan taman, tiket masuknya adalah 80.000\n");
    //         tiket = 80000;
    //         printf("Dimana anda akan tinggal? (hotel, penginapan)\n");
    //         printf("Masukkan pilihan anda : ");
    //         fgets(tempat, sizeof(tempat), stdin);
    //         tempat[strcspn(tempat, "\n")] = '\0';

    //         if (strcmp(tempat, "hotel") == 0) {
    //             printf("Anda memilih tinggal di hotel, biaya tambahan 200.000\n");
    //             harga = 500000;
    //         }
    //         else if (strcmp(tempat, "penginapan") == 0) {
    //             printf("Anda memilih tinggal di penginapan, biaya tambahan 100.000\n");
    //             harga = 250000;
    //         }
    //         else {
    //             printf("Tempat tinggal tidak dikenali. Tidak ada biaya tambahan.\n");
    //         }
    //     }
    //     else 
    //         printf("Tujuan tidak dikenali. Tidak ada tempat yang bisa anda tinggali.\n");

    //     total = tiket + harga;
    
    //     printf("Anda akan berpergian ke : %s \nAnda akan tinggal di : %s\nTotal biaya yang harus anda bayar adalah : %d\n", tujuan, tempat, total);

    //  Latihan Analisa Kasus SWITCH
       
    // int main() {
    // int tujuan, inap;
    // int harga_tiket = 0, harga_inap = 0;
    // char tempat[20]="";

    // printf("Pilih tujuan wisata:\n");
    // printf("1. Gunung (tiket 50000)\n");
    // printf("2. Pantai (tiket 40000)\n");
    // printf("3. Taman Hiburan (tiket 80000)\n");
    // printf("Masukkan pilihan (1-3): ");
    // scanf("%d", &tujuan);

    // switch (tujuan) {
    //     case 1:
    //         harga_tiket = 50000;
    //         harga_inap = 200000;
    //         strcpy(tempat, "Gunung");
    //         break;

    //     case 2:
    //         harga_tiket = 40000;
    //         harga_inap = 200000; 
    //         strcpy(tempat, "Pantai");  
    //         break;

    //     case 3:
    //         harga_tiket = 80000;
    //         strcpy(tempat, "Taman Hiburan");

    //         printf("Pilih tempat menginap:\n");
    //         printf("1. Hotel (500000)\n");
    //         printf("2. Penginapan (250000)\n");
    //         printf("Masukkan pilihan (1-2): ");
    //         scanf("%d", &inap);

    //         switch (inap) {
    //             case 1: harga_inap = 500000; break;
    //             case 2: harga_inap = 250000; break;
    //             default: 
    //                 printf("Pilihan tempat menginap tidak valid!\n");
    //                 return 0;
    //             break;
    //         }
    //         break;

    //     default:
    //         printf("Pilihan tujuan tidak valid!\n");
    //         return 0;
    // }

    // int total = harga_tiket + harga_inap;

    // printf("\n============================\n");
    // printf("Tujuan        : %s\n", tempat);
    // printf("Harga Tiket   : %d\n", harga_tiket);
    // printf("Harga Inap    : %d\n", harga_inap);
    // printf("Total Biaya   : %d\n", total);
    // printf("============================\n");


    // Latihan Analisa Kasus SWITCH 2
    // int main() {
    // int rupiah, kurs, mata_uang;
    // int jumlah_uang_asing;
    // int sisa_rupiah;
    // int lembar100=0, lembar50=0, lembar10=0, lembar1000=0;

    // printf("Pilih mata uang yang ditukar:\n");
    // printf("1. Yen (pecahan 1000)\n");
    // printf("2. USD (pecahan 100, 50, 10)\n");
    // printf("3. Yuan (pecahan 100, 10)\n");
    // printf("Masukkan pilihan (1-3): ");
    // scanf("%d", &mata_uang);

    // printf("Masukkan jumlah rupiah yang ditukar: ");
    // scanf("%d", &rupiah);

    // printf("Masukkan kurs (rupiah per 1 unit mata uang asing): ");
    // scanf("%d", &kurs);

    // jumlah_uang_asing = rupiah / kurs;
    // sisa_rupiah = rupiah % kurs;

    // printf("\nJumlah mata uang asing: %d\n", jumlah_uang_asing);

    // switch(mata_uang) {
    //     case 1: 
    //         lembar1000 = jumlah_uang_asing / 1000;
    //         printf("Lembar 1000 Yen: %d\n", lembar1000);
    //         break;

    //     case 2: 
    //         lembar100 = jumlah_uang_asing / 100;
    //         jumlah_uang_asing %= 100;

    //         lembar50 = jumlah_uang_asing / 50;
    //         jumlah_uang_asing %= 50;

    //         lembar10 = jumlah_uang_asing / 10;

    //         printf("Lembar 100 USD: %d\n", lembar100);
    //         printf("Lembar 50 USD : %d\n", lembar50);
    //         printf("Lembar 10 USD : %d\n", lembar10);
    //         break;

    //     case 3: 
    //         lembar100 = jumlah_uang_asing / 100;
    //         jumlah_uang_asing %= 100;

    //         lembar10 = jumlah_uang_asing / 10;

    //         printf("Lembar 100 Yuan: %d\n", lembar100);
    //         printf("Lembar 10 Yuan : %d\n", lembar10);
    //         break;

    //     default:
    //         printf("Pilihan tidak valid.\n");
    //         return 0;
    // }

    // printf("Sisa rupiah (kembalian): %d\n", sisa_rupiah);

    // Latihan Analisa Kasus SWITCH 3
    // int main() {
    // float jarak;
    // int kategori;
    // int tarif = 0;

    // printf("Masukkan jarak perjalanan (km): ");
    // scanf("%f", &jarak);

    // printf("\nPilih kategori penumpang:\n");
    // printf("1. Pelajar\n");
    // printf("2. Mahasiswa\n");
    // printf("3. Umum\n");
    // printf("4. Lansia\n");
    // printf("Masukkan pilihan: ");
    // scanf("%d", &kategori);

    // if (jarak < 10) { 
    //     switch (kategori) {
    //         case 1: tarif = 3000; break;
    //         case 2: tarif = 4000; break;
    //         case 3: tarif = 5000; break;
    //         case 4: tarif = 0;    break;
    //         default: printf("Kategori tidak valid."); 
    //         return 0;
    //     }
    // }
    // else if (jarak <= 25) { 
    //     switch (kategori) {
    //         case 1: tarif = 5000; break;
    //         case 2: tarif = 6000; break;
    //         case 3: tarif = 8000; break;
    //         case 4: tarif = 2000; break;
    //         default: printf("Kategori tidak valid."); 
    //         return 0;
    //     }
    // }
    // else { 
    //     switch (kategori) {
    //         case 1: tarif = 8000; break;
    //         case 2: tarif = 10000; break;
    //         case 3: tarif = 12000; break;
    //         case 4: tarif = 4000; break;
    //         default: printf("Kategori tidak valid."); 
    //         return 0;
    //     }
    // }

    // printf("\nTarif yang harus dibayar: Rp %d\n", tarif);

    // LATIHAN LOOP 1
    // int main(){
    //     int jumlah, umur;
    //     char nama1[20];
    //     printf("Berapa jumlah data yang akan dimasukkan? ");
    //     scanf("%d", &jumlah);
    //     getchar();

    //     for(int i=1; i<=jumlah; i++){

    //         printf("Masukkan nama ke-%d: ", i);
    //         fgets(nama1, sizeof(nama1), stdin);
    //         nama1[strcspn(nama1, "\n")] = '\0'; 

    //         if (strlen(nama1) == 0) {
    //             printf("Nama tidak boleh kosong. Silakan masukkan nama lagi.\n");
    //             i--; 
    //             continue; 
    //         }
    //         printf("Masukkan umur ke-%d: ", i);
    //         scanf("%d", &umur);
    //         getchar();

    //         printf("Data ke-%d: Umur = %d, Nama = %s\n", i, umur, nama1);

    //         if (umur < 0) {
    //             printf("Umur tidak boleh negatif. Silakan masukkan umur lagi.\n");
    //             i--; 
    //             continue; 
    //         }else if (umur < 17) {
    //             printf("belum cukup umur sana tidur.\n");
    //         }else if (umur >= 17 && umur <= 30) {
    //             printf("anda masih muda, tetap menyerah jangan semangat\n");
    //         }else 
    //             printf("anda sudah tua, mandi, bau tanah\n");
    //     }   


    return 0;
}