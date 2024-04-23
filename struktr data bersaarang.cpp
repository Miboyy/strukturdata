#include <stdio.h>

// Nested struct untuk menyimpan informasi alamat
typedef struct {
    char jalan[50];
    char kota[50];
    int kodePos;
} Alamat;

// Struct untuk menyimpan informasi mahasiswa
typedef struct {
    char nama[50];
    int nim;
    float ipk;
    Alamat alamat; // Nested struct
} Mahasiswa;

// Fungsi untuk mengisi informasi mahasiswa
void isiInfoMahasiswa(Mahasiswa *mhs, char *nama, int nim, float ipk, char *jalan, char *kota, int kodePos) {
    sprintf(mhs->nama, "%s", nama);
    mhs->nim = nim;
    mhs->ipk = ipk;
    sprintf(mhs->alamat.jalan, "%s", jalan);
    sprintf(mhs->alamat.kota, "%s", kota);
    mhs->alamat.kodePos = kodePos;
}

// Fungsi untuk mencetak informasi mahasiswa
void cetakInfoMahasiswa(Mahasiswa mhs) {
    printf("Nama: %s\n", mhs.nama);
    printf("NIM: %d\n", mhs.nim);
    printf("IPK: %.2f\n", mhs.ipk);
    printf("Alamat:\n");
    printf("  Jalan: %s\n", mhs.alamat.jalan);
    printf("  Kota: %s\n", mhs.alamat.kota);
    printf("  Kode Pos: %d\n", mhs.alamat.kodePos);
}

int main() {
    // Membuat objek mahasiswa dengan nested struct
    Mahasiswa mhs1;
    isiInfoMahasiswa(&mhs1, "John Doe", 12345, 3.8, "Jalan Raya", "Jakarta", 12345);

    // Mencetak informasi mahasiswa
    cetakInfoMahasiswa(mhs1);

    return 0;
}