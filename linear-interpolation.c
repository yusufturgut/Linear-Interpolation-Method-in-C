//Yusuf Turgut

#include<stdio.h>   // Gerekli kütüphanaler
#include<conio.h>   
#include<math.h>
#include<stdlib.h>  

/* Fonksiyonun tanýmlanmasý */
#define    f(x)     pow(x,3)-2*pow(x,2)-5

int main()
{
	//degiskenlerin tanimlanmasi
	 float An=2, Bn=3,root,x=2.6906,  e=0.01;
	 int adim = 1, N;
	 
	k: 
	
	//xn hesaplama fonksiyonunun parca parca tanýmlanmasi
	float alt1 =  f(Bn) ;
	float alt2 =f(An);
	float sonalt = alt1 - alt2;
	
	float ust1 = f(Bn) ;
	float ust2 = f(An) ;
	float sonust = An*ust1- Bn*ust2;
	
	
	float Xn = sonust / sonalt ; //xn degeri tanimlanmasi hesaplanma formulu
	
	//hata degeri tanimlanmasi
	float degerHata;
	
	
	 printf("\nAdim\t\tAn\t\tBn\t\tXn\t\tHata\n"); //konsol ciktilari yazilmasi 

	
     degerHata=fabs(x-Xn); //hata deger hesaplanmasi
     
	 printf("%d\t\t%f\t%f\t%f\t%f\n",adim,An,Bn,Xn,degerHata); //konsol cikti hesaplanmasi yazdirilmesi
		    adim++;
	
	do{
		An=Xn; //yeni bulunan degeri ilk deger araligine atmak
	
	
	
	if(adim==4)	{
		goto m;
	}
	goto k;
	
	}while(degerHata<e); //hata kontrolu
	
		m:	
	 	
		root=fabs(2-Xn);
	 	printf("\nSonuc : %f", root);  //kok ciktisi

	 }
