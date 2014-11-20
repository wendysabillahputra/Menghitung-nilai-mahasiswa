#include <stdio.h>
int main (void)
{
int keluar;
char makul[25],nhuruf;
float nim, nuas, nuts, ntugas, nkuis, ntotal;
ulang:

printf("=====================================================================\n");
printf("\t\t\tMenghitung Nilai Ujian Mahasiswa\n");
printf("======================================================================\n");

printf("\n\tMasukkan NIM Anda        : ");
scanf("%s",&nim);
printf("\n\tMasukkan Mata kuliah Anda: ");
scanf("%s",&makul);
printf("\n\tMasukan Nilai UAS Anda   : ");
scanf("%f",&nuas);
printf("\n\tMasukan Nilai UTS Anda   : ");
scanf("%f",&nuts);
printf("\n\tMasukan Nilai Tugas Anda : ");
scanf("%f",&ntugas);
printf("\n\tMasukan Nilai Kuis Anda  : ");
scanf("%f",&nkuis);
ntotal=(nuas*0.4)+(nuts*0.3)+(ntugas*0.2)+(nkuis*0.1);

printf("\tNilai Anda adalah     : %.2f\n",ntotal);
if (ntotal >= 60){
printf("\tKeterangan Anda         : Lulus\n\n");
}
else if (ntotal < 60) {
printf("\tKeterangan Anda         : Gagal\n\n");
}
if (ntotal>=85) nhuruf='A';
else if (ntotal>=70) nhuruf='B';
else if (ntotal>=60) nhuruf='C';
else if (ntotal>=50) nhuruf='D';
else nhuruf='E';
printf("\n\tNilai Huruf Anda adalah  : %c\n",nhuruf);
printf("==================================================\n\n");

printf("\n\tApakah Anda ingin melanjutkan");
printf("\n\t\tTekan 1 Untuk Ya");
printf("\n\t\tTekan 2 Untuk Tidak ");
printf("\n\t\tSilahkan Pilih Angka = ");
scanf("%d",&keluar);
printf("=====================================================================\n");
printf("\t\t\tWendy Sabillah Putra\n");
printf("\t\t\tFakultas Ilmu Komputer\n");
printf("\t\t\tUniversitas Sriwijaya\n");
printf("=====================================================================\n");
if(keluar==1){
goto ulang;
return(0);
}
else {

}
}
