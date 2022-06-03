/* 
Dört şıklı çoktan seçmeli bir sınavı değerlendiren bir programı 
algoritma, akış diyagramı ve programı C++ dilinde yazınız.  

 a) Öncelikle sınavda kaç soru sorulacağını girdi olarak alınız 
 ve bu boyutta bir karakter dizisini dinamik olarak oluşturarak 
 doğru cevapları bu diziye giriniz. 
 Daha sonra, 
 10 öğrencinin numarasını ve cevaplarını 
 dinamik diziye okuyup 100 üzerinden aldıkları notları ekranda gösteriniz. 

 b) Tüm öğrencilerin numarası, 
 cevaplarını 
 ve puanlarını “yanit.txt”  uzantılı dosyaya aktarın. 

 Örnek çıktı: 
 Sınavdaki soru sayısı=20 
 Doğru cevap anahtarı=ABBACCADABCDABDDAACD 
 Ogrenci Nosu=111 
 111’in cevapları=CBBACCADABCDABDDAACD 
 111’in notu=95.00 
*/

#include <stdio.h>

#define OGRENCI 2

int main()
{
	int SoruSayi;
	int OgrenciNo[OGRENCI+1];

	printf("Soru sayisi giriniz: ");
	scanf("%d", &SoruSayi);
	printf("\n");
	
	char DogruCevap[SoruSayi+1], x, y;
	char OgrenciCevap[OGRENCI+1][SoruSayi+1];
	float puan[OGRENCI+1], SoruPuan; //soru sayısı sonradan girildiği için puan virgüllü çıkabilir o yüzden float tanımladım.
	
	for(int i = 0; i < SoruSayi; i++)
	{
		printf("%d.sorunun dogru cevabini giriniz: ", i+1);
		scanf("%s", &DogruCevap[i]);
	}
	printf("\n");
	
	SoruPuan =(float) 100 / SoruSayi; //1 sorunun kaç puan olduğunu hesapladım.
	
	for(int j = 0; j < OGRENCI; j++)
	{
		printf("\nOgrencinin numarasini giriniz: ");
		scanf("%d", &OgrenciNo[j]);
		printf("\n");
		
		printf("%d Numarali ogrencinin;\n", OgrenciNo[j]);
		
		for(int k = 0; k < SoruSayi; k++)
		{
			printf("%d.sorusunun cevabini giriniz: ", k+1);
			scanf("%s", &OgrenciCevap[j][k]);
		}
	}
	
	for(int a = 0; a < OGRENCI; a++)
	{
		for(int b = 0; b < SoruSayi; b++)
		{
			printf("%c", OgrenciCevap[a][b]);
		}
		printf("\n");
	}
	
	for(int c = 0; c < OGRENCI; c++)
	{
		for(int d = 0; d < SoruSayi; d++)
		{		
			if(DogruCevap[d] == OgrenciCevap[c][d])
			{
				puan[c] += SoruPuan;
			}
		}
		printf("\n");
	}



	for(int e = 0; e < OGRENCI; e++)
	{
		printf("%d nolu ogrencinin puani = %f\n", OgrenciNo[e], puan[e]);
	}
	
	return 0;
}





















