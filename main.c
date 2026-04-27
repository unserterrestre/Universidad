#include <stdio.h>

int main() {
   // Di sini, saya mendeklarasikan berbagai variabel yang dibutuhkan selama proses.
   int pilihan;
   int sisi_persegi, kelanjutan_persegi;
   int sisi_panah, kelanjutan_panah;
   int alas_segitiga, kelanjutan_segitiga;
   
   // Pesan di bawah merupakan pembukaan yang memberitahui pengguna seputar cara penggunaan program secara benar.
   printf("Selamat datang di program bangun datar!\nDi sini, Anda memiliki tiga pilihan bangun, yakni "
   "persegi (1), panah awal (2), dan segitiga terbalik (3).\n");
   
   // Inilah perulangan do-while utama sepanjang program ini.
   do {
        printf("\nPilihlah angka yang sesuai dengan bangun datar yang diinginkan.\nJika ingin menghentikan program, tikkanlah angka 0."
		"\nJawaban Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
        	// Apabila memasukkan bilangan 0, pengguna akan langsung mengakhiri program.
        	case 0:
        		printf("Anda telah keluar dari program.\n\n");
        		break;
        	
        	// Apabila memasukkan bilangan 1, pengguna akan menjalankan menu persegi.
            case 1:
            	// Di tempat inilah saya meletakkan subperulangan do-while dalam menu persegi.
                do {
                    printf("Program akan mencetak bangun persegi.\nMasukkanlah panjang sisi: ");
                    scanf("%d", &sisi_persegi);
                    printf("Berikut merupakan bangun persegi Anda.\n");
                    // Setelah memasukkan panjang sisi, pengguna mengizinkan program mengolah nilai tersebut dengan tindakan berikut.
                    for(int i = 0; i < sisi_persegi; i++){
                    	for(int j = 0; j < sisi_persegi; j++){
                    		printf("# ");
						}
						printf("\n");
					}
					
					// Pengguna diperbolehkan menambah ukuran bangun datar persegi dengan subsubperulangan ini.
					do{
						printf("Apakah Anda ingin mencetak versi yang lebih besar sebanyak satu satuan besaran?\n"
						"Jika Anda tidak berkenan, tikkanlah angka 0, sementara jika Anda berkenan, tikkanlah angka 1.\nJawaban Anda: ");
						scanf("%d", &kelanjutan_persegi);
						switch (kelanjutan_persegi){
							// Apabila memasukkan bilangan 0, pengguna akan keluar dari menu persegi.
							case 0:
								printf("Anda telah keluar dari menu persegi.\n");
								break;
							
							// Apabila memasukkan bilangan 1, pengguna akan mengizinkan program melakukan tindakan yang dimaksudkan.
							case 1:
								sisi_persegi += 1;
								for(int i = 0; i < sisi_persegi; i++){
			                    	for(int j = 0; j < sisi_persegi; j++){
			                    		printf("# ");
									}
								printf("\n");
							}
							break;
							
							/* Apabila memasukkan bilangan selain 0 dan 1, pengguna akan menerima pesan galat,
							dan program kembali ke bagian awal subsubperulangan ini. */
							default:
								printf("Maaf! Anda memasukkan bilangan yang invalid.\n\n");
						}
					} while(kelanjutan_persegi != 0); // Ini merupakan syarat mengakhiri subsubperulangan.
                } while (kelanjutan_persegi != 0); // Ini merupakan syarat mengakhiri subperulangan.
                break;
            
            // Apabila memasukkan bilangan 2, pengguna akan menjalankan menu panah awal.
            case 2:
            	// Di tempat inilah saya meletakkan subperulangan bangun ruang panah awal.
            	do {
            		printf("Program akan mencetak panah awal. Masukkanlah panjang sisi (gunakan bilangan ganjil agar bentuk simetris): ");
            		scanf("%d", &sisi_panah);
            		printf("Berikut merupakan bangun panah awal Anda.\n");
            		int pencacah_sisi_panah = sisi_panah; // Variabel baru, yakni 'pencacah_sisi_panah', dideklarasikan.
            		// Setelah memasukkan panjang sisi, pengguna mengizinkan program mengolah nilai tersebut.
            		for (int n = 0; n < (sisi_panah + 1)/2; n++){
            			for(int o = 0; o < n * 2; o += 2){
            				printf("  ");
						}
						for(int p = 0; p < pencacah_sisi_panah; p++){
							printf("# ");
						}
						printf("\n");
					}
					for (int q = 0; q < (pencacah_sisi_panah - 1)/2; q++){
						for (int t = 0; t < (pencacah_sisi_panah - 2)/2; t++){
							printf("  ");
						}
						for(int r = 0; r < q; r++){
            				printf("\b\b");
						}
						for(int s = 0; s < pencacah_sisi_panah; s++){
							printf("# ");
						}
						printf("\n");
					}
					
					// Pengguna diperbolehkan menambahkan ukuran bangun dengan subsubperulangan ini.
					do{
						printf("Apakah Anda ingin mencetak versi yang lebih besar sebanyak satu satuan besaran?\n"
						"Jika Anda tidak berkenan, tikkanlah angka 0, sementara jika Anda berkenan, tikkanlah angka 1.\nJawaban Anda: ");
						scanf("%d", &kelanjutan_panah);
						switch (kelanjutan_panah){
							// Apabila memasukkan nilai 0, pengguna akan keluar dari menu panah awal.
							case 0:
								printf("Anda telah keluar dari menu panah awal.\n");
								break;
							
							// Apabila memasukkan nilai 1, pengguna akan mengizinkan program melakukan tindakan yang dimaksudkan.	
							case 1:
								sisi_panah += 2;
								pencacah_sisi_panah = sisi_panah;
								for (int n = 0; n < (sisi_panah + 1)/2; n++){
		            			for(int o = 0; o < n * 2; o += 2){
		            				printf("  ");
								}
								for(int p = 0; p < pencacah_sisi_panah; p++){
									printf("# ");
								}
								printf("\n");
							}
							for (int q = 0; q < (pencacah_sisi_panah - 1)/2; q++){
								for (int t = 0; t < (pencacah_sisi_panah - 2)/2; t++){
									printf("  ");
								}
								for(int r = 0; r < q; r++){
		            				printf("\b\b");
								}
								for(int s = 0; s < pencacah_sisi_panah; s++){
									printf("# ");
								}
								printf("\n");
							}
							break;
							
							/* Apabila memasukkan bilangan selain 0 dan 1, pengguna akan menerima pesan galat,
							dan program kembali ke bagian awal subsubperulangan ini. */
							default:
								printf("Maaf! Anda memasukkan bilangan yang invalid.\n\n");
						}
					} while(kelanjutan_panah != 0); // Ini merupakan syarat mengakhiri subsubperulangan.
				} while (kelanjutan_panah != 0); // Ini merupakan syarat mengakhiri subperulangan.
				break;
			
			// Apabila memasukkan bilangan 3, pengguna akan menjalankan menu panah awal.
			case 3:
				// Di tempat inilah saya meletakkan subperulangan bangun segitiga terbalik.
				do {
					printf("Program akan mencetak segitiga terbalik. Masukkanlah panjang alas (gunakan bilangan ganjil agar bangun simetris): ");
					scanf("%d", &alas_segitiga);
					int pencacah_alas_segitiga = alas_segitiga; // Variabel baru, yakni 'pencacah_alas_segitiga', dideklarasikan.
            		// Setelah memasukkan panjang alas, pengguna mengizinkan program mengolah nilai tersebut.
					printf("Berikut merupakan bangun segitiga terbalik Anda.\n");
					for(int k = 0; k < alas_segitiga; k += 2){
						for(int l = 0; l < k; l += 2){
							printf("  ");
						}
						for(int m = 0; m < pencacah_alas_segitiga; m++){
							printf("# ");
						}
						printf("\n");
						pencacah_alas_segitiga -= 2;
					}
					// Pengguna diperbolehkan menambahkan ukuran bangun dengan subsubperulangan ini.
					do {
						printf("Apakah Anda ingin mencetak versi yang lebih besar sebanyak satu satuan besaran?\n"
						"Jika Anda tidak berkenan, tikkanlah angka 0, sementara jika Anda berkenan, tikkanlah angka 1.\nJawaban Anda: ");
						scanf("%d", &kelanjutan_segitiga);
						switch(kelanjutan_segitiga){
							// Apabila memasukkan nilai 0, pengguna akan keluar dari menu segitiga terbalik.
							case 0:
								printf("Anda telah keluar dari menu segitiga terbalik.\n");
								break;
							// Apabila memasukkan nilai 1, pengguna akan mengizinkan program melakukan tindakan yang dimaksudkan.
							case 1:
								alas_segitiga += 2;
								pencacah_alas_segitiga = alas_segitiga;
								for(int k = 0; k < alas_segitiga; k += 2){
								for(int l = 0; l < k; l += 2){
									printf("  ");
								}
								for(int m = 0; m < pencacah_alas_segitiga; m++){
									printf("# ");
								}
								printf("\n");
								pencacah_alas_segitiga -= 2;
							}
							break;
							
							/* Apabila memasukkan bilangan selain 0 dan 1, pengguna akan menerima pesan galat,
							dan program kembali ke bagian awal subsubperulangan ini. */
							default:
								printf("Maaf! Anda memasukkan bilangan yang invalid.\n\n");
						}
					} while (kelanjutan_segitiga != 0); // Ini merupakan syarat mengakhiri subsubperulangan.
				} while (kelanjutan_segitiga != 0); // Ini merupakan syarat mengakhiri subperulangan.
				break;
			
			/* Apabila pengguna tidak memasukkan bilangan yang diminta, program akan kembali menanyakan bilangan sampai pengguna memasukkan
			nilai yang diminta olehnya. */
			default:
				printf("Maaf! Anda memasukkan bilangan yang invalid.\n\n");
        }
    } while (pilihan != 0); // Syarat mengakhiri perulangan do-while utama dijumpai di sini.
    
    printf("Terima kasih telah mempergunakan jasa kami."); // Inilah pesan penutup program.

    return 0;
}
