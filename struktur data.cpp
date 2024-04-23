#include <iostream>
#include <cstring>

struct Mahasiswa {
    char nama[50];
    int nim;
    float ipk;
};

void inputDataMahasiswa(Mahasiswa& mhs) {
    printf("Masukkan nama mahasiswa: ");
    fgets(mhs.nama, sizeof(mhs.nama), stdin);
    mhs.nama[strcspn(mhs.nama, "\n")] = '\0'; // Menghapus karakter newline di akhir nama

    printf("Masukkan NIM mahasiswa: ");
    scanf("%d", &mhs.nim);
    getchar(); // Mengabaikan karakter newline setelah input NIM

    printf("Masukkan IPK mahasiswa: ");
    scanf("%f", &mhs.ipk);
    getchar(); // Mengabaikan karakter newline setelah input IPK
}

void displayDataMahasiswa(const Mahasiswa& mhs) {
    printf("Nama Mahasiswa: %s\n", mhs.nama);
    printf("NIM Mahasiswa: %d\n", mhs.nim);
    printf("IPK Mahasiswa: %.2f\n", mhs.ipk);
}

int main() {
    char tambahData;
    Mahasiswa mahasiswa;

    do {
        inputDataMahasiswa(mahasiswa);
        displayDataMahasiswa(mahasiswa);

        printf("\nApakah Anda ingin menambah data lagi? (y/n): ");
        scanf(" %c", &tambahData);
        getchar(); // Mengabaikan karakter newline setelah input tambahData

    } while (tambahData == 'y' || tambahData == 'Y');

    return 0;
}