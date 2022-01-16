/* 
D�rt ��kl� �oktan se�meli bir s�nav� de�erlendiren bir program� 
algoritma, ak�� diyagram� ve program� C++ dilinde yaz�n�z.  

 a) �ncelikle s�navda ka� soru sorulaca��n� girdi olarak al�n�z 
 ve bu boyutta bir karakter dizisini dinamik olarak olu�turarak 
 do�ru cevaplar� bu diziye giriniz. 
 Daha sonra, 
 10 ��rencinin numaras�n� ve cevaplar�n� 
 dinamik diziye okuyup 100 �zerinden ald�klar� notlar� ekranda g�steriniz. 

 b) T�m ��rencilerin numaras�, 
 cevaplar�n� 
 ve puanlar�n� �yanit.txt�  uzant�l� dosyaya aktar�n. 

 �rnek ��kt�: 
 S�navdaki soru say�s�=20 
 Do�ru cevap anahtar�=ABBACCADABCDABDDAACD 
 Ogrenci Nosu=111 
 111�in cevaplar�=CBBACCADABCDABDDAACD 
 111�in notu=95.00 
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
	float puan[OGRENCI+1], SoruPuan; //soru say�s� sonradan girildi�i i�in puan virg�ll� ��kabilir o y�zden float tan�mlad�m.
	
	for(int i = 0; i < SoruSayi; i++)
	{
		printf("%d.sorunun dogru cevabini giriniz: ", i+1);
		scanf("%s", &DogruCevap[i]);
	}
	printf("\n");
	
	SoruPuan =(float) 100 / SoruSayi; //1 sorunun ka� puan oldu�unu hesaplad�m.
	
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





















