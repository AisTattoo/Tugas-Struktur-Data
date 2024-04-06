#include <stdio.h>
#include <string.h>

struct orang {
  char nama[50];
  char tempatTanggalLahir[50];
  char alamat[50];
  char jenisKelamin[50];
  char agama[10];
  char status[15];
  char pekerjaan[50];
  char notelpon[15];
};

int main() {
  struct orang person1;

  strcpy(person1.nama, "Adil Mubarak");
  strcpy(person1.tempatTanggalLahir, "Pati, 1 Februari 2024");
  strcpy(person1.alamat, "Jalan Kolonel Sunandar");
  strcpy(person1.jenisKelamin, "Laki-Laki");
  strcpy(person1.agama, "Islam");
  strcpy(person1.status, "Belum Menikah");
  strcpy(person1.pekerjaan, "Mahasiswa");
  strcpy(person1.notelpon, "62895342607242");

  printf("Nama: %s\n", person1.nama);
  printf("Tempat/Tanggal lahir : %s\n", person1.tempatTanggalLahir);
  printf("alamat : %s\n", person1.alamat);
  printf("Jenis Kelamin : %s\n", person1.jenisKelamin);
  printf("Agama : %s\n", person1.agama);
  printf("Status : %s\n", person1.status);
  printf("Pekerjaan : %s\n", person1.pekerjaan);
  printf("notelpon: %s\n", person1.notelpon);

  return 0;
}