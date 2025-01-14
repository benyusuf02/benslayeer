# 🌟 C'de Basit Hesap Makinesi Programı

Bu proje, C programlama öğrenirken 15 yaşında oluşturduğum basit bir hesap makinesi programıdır. Toplama, çıkarma, çarpma ve bölme gibi temel aritmetik işlemleri gerçekleştirir. Bu program, C programlamasını ve konsol tabanlı kullanıcı etkileşimlerini keşfeden başlangıç seviyesindeki geliştiriciler için harika bir başlangıç noktasıdır.

---

## 🎯 Özellikler
- **➕ Toplama:** Kullanıcı tarafından girilen iki tam sayıyı toplar.
- **➖ Çıkarma:** Birinci tam sayıdan ikinci tam sayıyı çıkarır.
- **✖️ Çarpma:** İki tam sayıyı çarpar.
- **➗ Bölme:** Birinci tam sayıyı ikinci tam sayıya böler (sonuç ondalık sayı olarak görüntülenir).

---

## 🌐 Program Akışı
1. Kullanıcıdan iki tam sayı girmesi istenir.
2. Kullanıcı, aşağıdaki işlem seçeneklerinden birini seçer:
   - `1` ➡️ Toplama
   - `2` ➡️ Çıkarma
   - `3` ➡️ Çarpma
   - `4` ➡️ Bölme
3. Program, seçilen işlem türünü gerçekleştirir ve sonucu ekrana yazdırır.
4. Geçersiz bir seçim yapılırsa kullanıcı uyarılır ve tekrar seçim yapması istenir.

---

## 💻 Kod Örneği
```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Turkish");
    int a, s, f, v;
    printf("Birinci sayıyı gir: ");
    scanf("%d", &a);

    printf("İkinci sayıyı gir: ");
    scanf("%d", &s);

    printf("\tToplama yapmak için: 1\n");
    printf("\t***********************\n");
    printf("\tÇıkarma yapmak için: 2\n");
    printf("\t***********************\n");
    printf("\tÇarpma yapmak için: 3\n");
    printf("\t***********************\n");
    printf("\tBölme yapmak için: 4\n");
    printf("\t***********************\n");

sa:
    printf("\nYapmak istediğiniz işlemi seçiniz: ");
    scanf("%d", &f);

    switch (f) {
        case 1: {
            v = a + s;
            printf("\nİki sayının toplamı = %d\a", v);
            break;
        }
        case 2: {
            v = a - s;
            printf("\nİki sayının farkı = %d\a", v);
            break;
        }
        case 3: {
            v = a * s;
            printf("\nİki sayının çarpımı = %d\a", v);
            break;
        }
        case 4: {
            float b;
            b = (float)a / s;
            printf("\nBölme işleminin sonucu = %.1f\a", b);
            break;
        }
        default: {
            printf("\nLütfen 1-4 arasında bir seçim yapınız...\n");
            goto sa;
        }
    }

    system("pause");
    return 0;
}
```

---

## 🚀 Programı Çalıştırma
1. **Kodu Kaydedin:** Kodu bir `.c` dosyasına (örneğin `hesap_makinesi.c`) kaydedin.
2. **Terminal Açın:** Dosyanın bulunduğu klasöre gidin.
3. **Derleyin:**
   ```bash
   gcc hesap_makinesi.c -o hesap_makinesi
   ```
4. **Çalıştırın:**
   ```bash
   ./hesap_makinesi
   ```
5. **İşleminizi Seçin:** Programın ekrandaki yönergelerini takip ederek işlemleri gerçekleştirin.

---

## 🧠 Öğrendiklerim
- **📝 Temel Girdi/Çıktı İşlemleri:** Kullanıcıdan veri alma ve ekrana yazdırma.
- **⚙️ Karar Yapıları:** `switch-case` ile işlem seçimi.
- **📋 Hata Yönetimi:** Kullanıcıdan gelen yanlış girdilerin yönetimi.
- **🖌️ Formatlama:** Daha iyi bir kullanıcı deneyimi için çıktıların düzenlenmesi.

---

## ✨ Gelecekteki Geliştirmeler
- **🛡️ Sıfıra Bölme Kontrolü:** Kullanıcı sıfıra bölme işlemi yapmaya çalıştığında uyarı verilmesi.
- **🔢 Ondalık Sayı Girişi:** Daha karmaşık işlemler için ondalık sayı desteği.
- **🌟 Kullanıcı Arayüzü:** Konsol tabanlı menüyü daha kullanıcı dostu hale getirmek.
- **⏹️ Çıkış Seçeneği:** Programdan çıkmak için bir seçenek eklenmesi.

---

## 🌟 Görseller
💡 **Programın Çalışma Ekranı**
```plaintext
Birinci sayıyı gir: 10
İkinci sayıyı gir: 5

    Toplama yapmak için: 1
    ***********************
    Çıkarma yapmak için: 2
    ***********************
    Çarpma yapmak için: 3
    ***********************
    Bölme yapmak için: 4
    ***********************

Yapmak istediğiniz işlemi seçiniz: 1
İki sayının toplamı = 15
```

---

## ❤️ Teşekkürler
Bu proje, programlama dünyasına ilk adımlarımı temsil ediyor ve benim için özel bir yere sahip. Katkıda bulunmak ya da görüşlerinizi paylaşmak isterseniz benimle iletişime geçebilirsiniz. 😊

---

📌 **Not:** Bu program, başlangıç seviyesi bir proje olup ileri düzey optimizasyon veya güvenlik özellikleri içermemektedir. Geliştirilmesi için önerilere açığım!
