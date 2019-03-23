#include <iostream>
#include <map>
#include <string>

int main(){
    // Ceritanya bikin data nomor sama nama mahasiswa gituu
    // Key pake integer sama value pake string
    std::map<int, std::string> mahasiswa;
    std::map<int, std::string>::iterator it;

    int opsi, key;
    std::string value;

    std::cout << "Pilih opsi:" << std::endl
            << "1. Insert (input key dan value)" << std::endl
            << "2. Get (ambil value dari key)" << std::endl
            << "3. Find (true atau false)" << std::endl
            << "4. Delete (hapus key dan value)" << std::endl
            << "5. Display Data (menampilkan semua data)" << std::endl
            << "6. Selesai" << std::endl;
    std::cin >> opsi;
    while (opsi!=6){
        if (opsi==1){ // Insert
            std::cout << "Masukkan key: ";
            std::cin >> key;
            std::cout << "Masukkan value: ";
            std::cin >> value;
            if (mahasiswa.find(key)==mahasiswa.end()){
                mahasiswa.insert(std::pair<int, std::string>(key, value));
                std::cout << "Data berhasil ditambahkan." << std::endl;
            }
            else{
                mahasiswa.erase(key);
                mahasiswa.insert(std::pair<int, std::string>(key, value));
                std::cout << "Data berhasil di-update." << std::endl;
            }
            std::cout << "Pilih opsi: ";
            std::cin >> opsi;
        }
        else if (opsi==2){ // Get
            std::cout << "Masukkan key: ";
            std::cin >> key;
            if (mahasiswa.find(key)==mahasiswa.end()){
                std::cout << "Data tidak ada." << std::endl;
            }
            else{
                std::cout << mahasiswa.find(key)->second << std::endl;
            }
            std::cout << "Pilih opsi: ";
            std::cin >> opsi;
        }
        else if (opsi==3){ // Find
            std::cout << "Masukkan key: ";
            std::cin >> key;
            if (mahasiswa.find(key)==mahasiswa.end()){
                std::cout << "Mahasiswa tidak ada." << std::endl;
            }
            else{
                std::cout << "Mahasiswa ada." << std::endl;
            }
            std::cout << "Pilih opsi: ";
            std::cin >> opsi;
        }
        else if (opsi==4){ // Delete
            std::cout << "Masukkan key: ";
            std::cin >> key;
            if (mahasiswa.find(key)==mahasiswa.end()){
                std::cout << "Data tidak ada." << std::endl;
            }
            else{
                mahasiswa.erase(key);
                std::cout << "Data berhasil dihapus." << std::endl;
            }
            std::cout << "Pilih opsi: ";
            std::cin >> opsi;
        }
        else if (opsi==5){ // Display
            for (it=mahasiswa.begin(); it!=mahasiswa.end(); it++){
                std::cout << it -> first << " " << it -> second << std::endl;
            }
            std::cout << "Pilih opsi: ";
            std::cin >> opsi;
        }
    }
}
