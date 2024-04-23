#include <stdio.h>
#include <string.h>

// Definisi struct mahasiswa
typedef struct {
    char nama[50];
    int nim;
    float ipk;
} Mahasiswa;

int main() {
    // Deklarasi array of struct mahasiswa
    Mahasiswa daftarMahasiswa[3];

    // Mengisi data mahasiswa
    strcpy(daftarMahasiswa[0].nama, "John Doe");
    daftarMahasiswa[0].nim = 12345;
    daftarMahasiswa[0].ipk = 3.8;

    strcpy(daftarMahasiswa[1].nama, "Jane Smith");
    daftarMahasiswa[1].nim = 67890;
    daftarMahasiswa[1].ipk = 4.0;

    strcpy(daftarMahasiswa[2].nama, "Bob Johnson");
    daftarMahasiswa[2].nim = 54321;
    daftarMahasiswa[2].ipk = 3.5;

    // Mencetak informasi mahasiswa
    for (int i = 0; i < 3; i++) {
        printf("Nama: %s\n", daftarMahasiswa[i].nama);
        printf("NIM: %d\n", daftarMahasiswa[i].nim);
        printf("IPK: %.2f\n", daftarMahasiswa[i].ipk);
        printf("---\n");
    }

    return 0;
}