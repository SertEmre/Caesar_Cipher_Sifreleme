#include <stdio.h>
#include <string.h>

void caesarCipher(char *metin, int kaydirma) {
    int i;
    char harf;
    for(i = 0; metin[i] != '\0'; ++i) {
        harf = metin[i];
        if(harf >= 'A' && harf <= 'Z') {
            harf = harf + kaydirma;
            if(harf > 'Z') {
                harf = harf - 'Z' + 'A' - 1;
            }
            metin[i] = harf;
        }
        else if(harf >= 'a' && harf <= 'z') {
            harf = harf + kaydirma;
            if(harf > 'z') {
                harf = harf - 'z' + 'a' - 1;
            }
            metin[i] = harf;
        }
    }
}
int main() {
    char metin[100];
    int kaydirma;

    printf("Sifrelenecek metni giriniz: ");
    gets(metin);
    printf("Kaydirma miktarini girin: ");
    scanf("%d", &kaydirma);

    caesarCipher(metin, kaydirma);

    printf("SifrelenmiS metin: %s\n", metin);

    return 0;
}
