//Source code untuk Belajar Tipe dan variabel
//Masukan/input sesuai dengan tipe
//Copy & paste pada CodeBlocks an jalankan

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   /* local variable declaration */
   int a,b;
   float X=5,Y;
   char ch1, str1[10],menu[12];
   printf("X=5 - Value of X is %f\n", X );
   printf("int a,b; float X=5,Y; char ch1, str1[10],menu[12]");
   a = X / 2;
   printf("a=X/2 - Value of a is %d\n", a );
   b = X; 
   printf("b=X - Value of b is %d\n", b );
   Y = b / 2;
   printf("Y=b/2 - Value of Y is %f \n", Y );
   Y = X / 2;
   printf("Y=X/2 - Value of Y is %f \n", Y );
   b = X/2; 
   printf("b=X/2 - Value of b is %d\n", b );
   b = b%2; 
   printf("b%2 - Value of b is %d\n", b );
   a = Y ;
   printf("a=Y - Value of a is %d\n", a );
   b = a%2; 
   printf("b=a persen 2 - Value of b is %d\n", b );
   b = 10%a; 
   printf("b=10 persen a - Value of b is %d\n", b );

   strcpy(menu,"batagor");
   printf("%f adalah bilangan positif, dg menu= %s",X,menu);
   
  printf("Masukkan a= ");
  scanf("%d",&a);
  //scanf("%*c");     // Hilangkan '//' untuk melihat efek instruksi ini
  printf("Masukkan str1= ");
  scanf("%s",&str1);
  printf("Masukkan ch1= ");
  scanf("%c",&ch1);
  printf("Nilai a=%d, ch1 ( tanpa scanf(persen*c);) =%c, str1 hasil scanf()=%s\n",a,ch1,str1 );

  printf("Masukkan a2= ");
  scanf("%d",&a);
  scanf("%*c");
  printf("Masukkan str1= ");
  scanf("%s",&str1);
  printf("Masukkan ch1= ");
  scanf("%c",&ch1);
  printf("Nilai a=%d, ch1 ( tanpa scanf(persen*c);) =%c, str1 hasil scanf() plus scanf(persen*c)=%s\n",a,ch1,str1 );

  printf("Masukkan a3= ");
  scanf("%d",&a);
  //scanf("%*c");    // Hilangkan '//' untuk melihat efek instruksi ini
  printf("Masukkan str1= ");
  scanf("%s",&str1);
  scanf("%*c");
  printf("Masukkan ch1= ");
  scanf("%c",&ch1);
  printf("Nilai a=%d, ch1 ( dengan scanf(persen*c);) =%c \n",a,ch1);
  printf("str1 hasil scanf() setelah scanf(char)=%s\n",str1 );

  printf("Masukkan b= ");
  scanf("%d",&b);
  scanf("%*c");
  printf("Masukkan ch1= ");
  scanf("%c",&ch1);
  printf("Nilai b=%d, ch1 ( dengan scanf(persen*c); ) =%c\n",b,ch1 );
  printf("Masukkan str1= ");
  //scanf("%*c");   // Hilangkan '//' untuk melihat efek instruksi ini
  scanf("%s",&str1);
  printf("Nilai str1 ( dengan scanf() ) =%s\n",str1 );

  printf("Masukkan X=");
  scanf("%f",&X);
  printf("Masukkan str1=");
  scanf("%s",&str1);
  scanf("%*c");
  printf("Masukkan ch1=");
  scanf("%c",&ch1);
  printf("Nilai X=%f \n",X);
  printf("Nilai ch1 ( tanpa scanf(persen*c) setelah scanf(string) ) =%c\n",ch1);
  printf("str1 hasil scanf() dengan scanf(persen*c) sebelumnya:%s\n",str1 );

  printf("Untuk baca string- gets, masukkan a=");
  scanf("%d",&a);
  printf("Masukkan str1=");
  //scanf("%*c");  // Hilangkan '//' untuk melihat efek instruksi ini
  //fflush(stdin); // Hilangkan salah satu'//' antara scanf("%*c") dan fflush
  gets(str1);
  printf("Nilai a=%d str1 hasil gets() tanpa scanf(persen*c) sebelumnya:%s\n",a,str1 );

  printf("Untuk baca string- fgets, masukkan a=");
  scanf("%d",&a);
  //fflush(stdin);  // Hilangkan '//' untuk melihat efek instruksi ini
  //scanf("%*c");   // Hilangkan salah satu'//' antara scanf("%*c") dan fflush
  printf("Masukkan str1=");
  fgets(str1,20,stdin);
  printf("Nilai a=%d str1 hasil gets() tanpa scanf(persen*c) sebelumnya:%s\n",a,str1 );

  printf("Untuk baca string- gets, masukkan X=");
  scanf("%f",&X);
  printf("Masukkan str1=");
  //scanf("%*c");   // Hilangkan salah satu'//' antara scanf("%*c") dan fflush
  //fflush(stdin);
  gets(str1);
  printf("Nilai X=%f str1 hasil gets() tanpa scanf(persen*c) sebelumnya:%s\n",X,str1 );

  printf("Untuk baca string- gets, masukkan ch1=");
  scanf("%c",&ch1);
  printf("Masukkan str1=");
  //scanf("%*c");  // Hilangkan salah satu'//' antara scanf("%*c") dan fflush
  //fflush(stdin);
  gets(str1);
  printf("Nilai ch1=%c str1 hasil gets() tanpa scanf(persen*c) sebelumnya:%s\n",ch1,str1 );

  printf("Untuk scanf......., masukkan a=");
  scanf("%d",&a);
  fflush(stdin);
  printf("Nilai a=%d \n",a);
  printf("Untuk scanf......., masukkan X=");
  scanf("%f",&X);
  fflush(stdin);
  printf("Nilai X=%f \n",X);
  printf("Untuk scanf......., masukkan ch1=");
  scanf("%c",&ch1);
  fflush(stdin);
  printf("Nilai ch1=%c \n",ch1);
  printf("Untuk scanf......., masukkan str1a=");
  scanf("%s",&str1);
  fflush(stdin);
  printf("Nilai str1=%s \n",str1);
  printf("Untuk scanf......., masukkan str1b=");
  gets(str1);
  fflush(stdin);
  printf("Nilai str1=%s \n",str1);
  printf("Untuk scanf......., masukkan str1c=");
  fgets(str1,20,stdin);
  fflush(stdin);
  printf("Nilai str1=%s \n",str1);

  printf("Untuk baca string- gets, masukkan menu=");
  scanf("%s",&menu);
  printf("Masukkan str1=");
  //scanf("%*c");  // Hilangkan salah satu'//' antara scanf("%*c") dan fflush
  //fflush(stdin);
  gets(str1);
  printf("Nilai menu=%s str1 hasil gets() tanpa scanf(persen*c) sebelumnya:%s\n",menu,str1 );

  
  printf("Untuk baca string- gets, dengan scaf(persen*c), masukkan a=");
  scanf("%d",&a);
  printf("Masukkan str1=");
  scanf("%*c");
  gets(str1);
  printf("Nilai a=%d str1 hasil gets() dengan scanf(persen*c) sebelumnya:%s\n",a,str1 );

  printf("Untuk baca string- fgets, dengan scaf(persen*c),  masukkan a=");
  scanf("%d",&a);
  printf("Masukkan str1=");
  scanf("%*c");
  fgets(str1,20,stdin);
  printf("Nilai a=%d str1 hasil gets() dengan scanf(persen*c) sebelumnya:%s\n",a,str1 );

return 0;
}