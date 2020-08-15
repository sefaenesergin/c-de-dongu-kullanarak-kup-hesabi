//Sefa Enes Ergin-15.08.2020
//Döngüleri kullanarak küp hesaplama. Sırasıyla for, while, do while  ile yapalım.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int toplam1 = 0,toplam2=0,toplam3=0,i;
    for(i=1;i<=10;i++)// for ile yapılan 7. ve 8. satırlar
        toplam1+=i*i*i;
    
    i=1; // while kuruyorsak i'ye ilk değeri mutlaka vermeliyiz.
    while(i<=10){
        toplam2+=i*i*i;
        i++;// bunu yazmazsak sonsuz döngü olur ve sonuç alamayız.
    }
    
    i=1;//while da olduğu gibi do-while'da da ilk değer mutlaka atanmalı.
    do{
        toplam3+=i*i*i;
        i++;// bu satırı bir üst satıra yazarsak sıkıntılı bir durum oluyor. çünkü alt satırdaki while'dan çıktıktan sonra i'yi direkt 1 arttırıyor ve onun küpünü alıp 4bin küsürlü bir sonuç veriyor. Dikkat etmek gerek.
    }while(i<=10);//do-while'a özel olarak burada noktalı virgül var.
    printf("for ile yapılan toplamın değeri: %d \n",toplam1);
    printf("while ile yapılan toplamın değeri: %d \n",toplam2);
    printf("do-while ile yapılan toplamın değeri: %d \n",toplam3);
    return 0;
}
