/* 
Dört þýklý çoktan seçmeli bir sýnavý deðerlendiren bir programý 
algoritma, akýþ diyagramý ve programý C++ dilinde yazýnýz.  

 a) Öncelikle sýnavda kaç soru sorulacaðýný girdi olarak alýnýz 
 ve bu boyutta bir karakter dizisini dinamik olarak oluþturarak 
 doðru cevaplarý bu diziye giriniz. 
 Daha sonra, 
 10 öðrencinin numarasýný ve cevaplarýný 
 dinamik diziye okuyup 100 üzerinden aldýklarý notlarý ekranda gösteriniz. 

 b) Tüm öðrencilerin numarasý, 
 cevaplarýný 
 ve puanlarýný “yanit.txt”  uzantýlý dosyaya aktarýn. 

 Örnek çýktý: 
 Sýnavdaki soru sayýsý=20 
 Doðru cevap anahtarý=ABBACCADABCDABDDAACD 
 Ogrenci Nosu=111 
 111’in cevaplarý=CBBACCADABCDABDDAACD 
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
	float puan[OGRENCI+1], SoruPuan; //soru sayýsý sonradan girildiði için puan virgüllü çýkabilir o yüzden float tanýmladým.
	
	for(int i = 0; i < SoruSayi; i++)
	{
		printf("%d.sorunun dogru cevabini giriniz: ", i+1);
		scanf("%s", &DogruCevap[i]);
	}
	printf("\n");
	
	SoruPuan =(float) 100 / SoruSayi; //1 sorunun kaç puan olduðunu hesapladým.
	
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





















