#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Turkish");
    int vagon , kisisayi , v1kapasite , v1dolukoltuk , r1kapasite , v2kapasite , v3kapasite ,v2dolukoltuk,v3dolukoltuk,r2kapasite,r3kapasite   ;
    char secim , e , h ;
    v1kapasite=100; v1dolukoltuk=50;r1kapasite=(v1kapasite-v1dolukoltuk)*70/100;
     v2kapasite=90; v2dolukoltuk=80;r2kapasite=(v2kapasite-v2dolukoltuk)*70/100;
      v3kapasite=80; v3dolukoltuk=80;r3kapasite=(v3kapasite-v3dolukoltuk)*70/100;


    printf("1-3 arası bir vagon seçiniz\n");
    scanf("%d",&vagon);

     if (vagon==1) {
       printf("Rezervasyon Yapılacak Kişi Sayısı giriniz\n");
       scanf("%d",&kisisayi);
         if (kisisayi <= r1kapasite){
             printf("İşlem gerçekleştirildi\nYerleşim Ayrıntı:\nVagon=%d\n%dkişi",vagon,kisisayi);
         }
         else {
            printf("Boş yer bulunmamaktadır\nKişiler farklı vagonalara yerleştirilsin mi : e/h\n");
            scanf(" %c",&secim);
            if(secim=='e'){
            printf("İşlem gerçekleştirildi\nYerleşim Ayrıntı:\nVagon=%d\n%dkişi",vagon,kisisayi);
                        }
            else if(secim='h'){
            printf("İşlem iptal edildi\n");
            printf("YerlesimAyrinti:[    ]");
                            }
            else{
                    printf("Hatalı giriş");

                        }

         }
    }

       else if (vagon==2) {
        printf("Rezervasyon Yapılacak Kişi Sayısı giriniz\n");
        scanf("%d",&kisisayi);
        if (kisisayi <= r2kapasite){
            printf("İşlem gerçekleştirildi\nYerleşim Ayrıntı:\nVagon=%d\n%dkişi",vagon,kisisayi);
         }
         else {
            printf("Boş yer bulunmamaktadır\nKişiler farklı vagonalara yerleştirilsin mi : e/h\n");
            scanf(" %c",&secim);
            if(secim=='e'){
            printf("İşlem gerçekleştirildi\nYerleşim Ayrıntı:\nVagon=%d\n%dkişi",vagon,kisisayi);
                        }
            else if(secim='h'){
            printf("İşlem iptal edildi\n");
            printf("YerlesimAyrinti:[    ]");
             }
             else{
                    printf("Hatalı giriş");
                        }
                         }

       }
   else if (vagon==3) {
       printf("Rezervasyon Yapılacak Kişi Sayısı giriniz\n");
        scanf("%d",&kisisayi);
        if (kisisayi <= r3kapasite){
            printf("İşlem gerçekleştirildi\nYerleşim Ayrıntı:\nVagon=%d\n%dkişi",vagon,kisisayi);
         }
         else {
            printf("Boş yer bulunmamaktadır\nKişiler farklı vagonalara yerleştirilsin mi : e/h\n");
            scanf(" %c",&secim);
            if(secim=='e'){
            printf("İşlem gerçekleştirildi\nYerleşim Ayrıntı:\nVagon=%d\n%dkişi",vagon,kisisayi);
                        }
            else if(secim='h'){
            printf("İşlem iptal edildi\n");
            printf("YerlesimAyrinti:[    ]");
            }
             else{
                    printf("Hatalı giriş");


                         }

       }
}
return 0;

}
