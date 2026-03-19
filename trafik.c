#include <stdio.h>

int main() {
    int secim;
    // Yol Bilgisayari Degiskenleri
    float mesafe, yakit, fiyat, maliyet;
    // Kavsak Degiskenleri
    int kuzeyArac, doguArac;
    // Radar Degiskenleri
    float hizMesafe, gZaman, cZaman, ortHiz;

    do {
        printf("\n==========================================\n");
        printf("   --- SMART TRAFFIC AND CAR SYSTEM ---   \n");
        printf("==========================================\n");
        printf("1. Akilli Kavsak Yonetimi (Sure Hesapla)\n");
        printf("2. Yol Bilgisayari (Yakit Analizi)\n");
        printf("3. Hiz Koridoru Radar Kontrolu\n");
        printf("0. Cikis\n");
        printf("------------------------------------------\n");
        printf("Seciminiz nedir kanka?: ");
        scanf("%d", &secim);

        switch(secim) {
            case 1:
                printf("\n--- AKILLI KAVSAK YONETIMI ---\n");
                printf("Kuzey-Guney hatti arac sayisi: ");
                scanf("%d", &kuzeyArac);
                printf("Dogu-Bati hatti arac sayisi: ");
                scanf("%d", &doguArac);
                
                if(kuzeyArac > doguArac) {
                    printf("\n>>> YOGUNLUK KUZEYDE! 60sn Yesil | 20sn Kirmizi\n");
                } else if(doguArac > kuzeyArac) {
                    printf("\n>>> YOGUNLUK DOGUDA! 60sn Yesil | 20sn Kirmizi\n");
                } else {
                    printf("\n>>> TRAFIK DENGELI. Her iki yone 40sn Yesil.\n");
                }
                break;

            case 2:
                printf("\n--- YOL BILGISAYARI ---\n");
                printf("Gidilecek mesafe (KM): ");
                scanf("%f", &mesafe);
                printf("100 KM'de ortalama tuketim (Litre): ");
                scanf("%f", &yakit);
                printf("Guncel yakit fiyati (TL): ");
                scanf("%f", &fiyat);

                maliyet = (mesafe / 100) * yakit * fiyat;
                printf("\n>>> ANALIZ: Toplam yakit butcesi %.2f TL olmali.\n", maliyet);
                break;

            case 3:
                printf("\n--- RADAR KONTROLU ---\n");
                printf("Yol mesafesi (KM): ");
                scanf("%f", &hizMesafe);
                printf("Giris saati (Orn: 10.5): ");
                scanf("%f", &gZaman);
                printf("Cikis saati (Orn: 11.0): ");
                scanf("%f", &cZaman);

                ortHiz = hizMesafe / (cZaman - gZaman);
                printf("\n>>> Ortalama Hiz: %.2f km/h\n", ortHiz);

                if(ortHiz > 120) {
                    printf(">>> CEZA: Hiz limitini astiniz! Ceza kesildi.\n");
                } else {
                    printf(">>> GUVENLI: Limitler dahilindesiniz.\n");
                }
                break;

            case 0:
                printf("\nSistem kapatiliyor. Iyi surusler kanka!\n");
                break;

            default:
                printf("\nHatali secim! Lutfen tekrar deneyin.\n");
        }
    } while(secim != 0);

    return 0;
}