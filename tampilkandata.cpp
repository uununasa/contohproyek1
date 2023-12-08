void tampilkanData() {
    system("cls");
    cout << "\n========================================================================= Menampilkan Data Provinsi ============================================================================\n\n";
    cout << left << setw(5) << "No" << setw(18) << "nama provinsi" << setw(20) << "jumlah komunitas" << setw(20) << "kepala keluarga"
         << setw(8) << "laki - laki" << setw(15) << "perempuan" << setw(15) << "SD" << setw(15) << "SMP"
         << setw(15) << "SMA" << setw(20) << "perguruan tinggi " << setw(15) << endl;

    for (int i = 0; i < jumlahData; ++i) {
        cout << left << setw(5) << i + 1 << setw(18) << provinsi[i].nama_provinsi << setw(20) << provinsi[i].jumlah_komunitas
             << setw(20) << provinsi[i].kepala_keluarga << setw(8) << provinsi[i].laki_laki << setw(15) << provinsi[i].perempuan
             << setw(15) << provinsi[i].SD << setw(15) << provinsi[i].SMP << setw(15) << provinsi[i].SMA
             << setw(20) << provinsi[i].perguruan_tinggi << setw(15) << endl;
    }

    cout << "\n===================================================================================================================================================================================\n";
    getch(); // Menunggu sampai tombol ditekan
    system("cls");
}
