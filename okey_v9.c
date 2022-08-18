////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                */
/*   101 OKEY                                                                                                     */
/*   IN COMMAND LINE WITH C LANGUAGE                                                                              */
/*                                                                                                                */
/*   made by yunus bozkurtaca                                                                                     */
/*                                                                                                                */
/*   project start:  11.03.2022                                                                                   */
/*   last update:    30.04.2022  17.40 tsi                                                                        */
/*                                                                                                                */
/*   current version: 0.9.9.5.4 (beta)                                                                            */
/*                                                                                                                */
/*                                                                                                                */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
#include <Windows.h>
#define q 113
#define w 119
#define d 100
#define x 120
#define a 97
#define s 115
#define f 102
#define e 101
#define h 104
#define r 114
#define c 99
#define u 117
#define space 32
#define bos_satir_cerceve(uuu) for(int i=0;i<uuu ;i++)    printf("%c                                                                                                       %c\n",186,186)
#define ust_cerceve1 for(int i = 0; i < 105; i++) printf("%c%s", i ? (i == 2 ? 185 : (i == 3 ? 'x' : (i == 4 ? 204: (i == 69 ? 203 : (i == 104 ? 187 : 205))))) : 201, i == 104 ? "\n" : "")
#define ust_cerceve2 for(int i = 0; i < 105; i++) printf("%c%s", i ? (i == 104 ? 187 : 205) : 201, i == 104 ? "\n" : "")
#define ust_cerceve3 for(int i = 0; i < 105; i++) printf("%c%s", i ? (i == 2 ? 185 : (i == 3 ? 'x' : (i == 4 ? 204: (i == 104 ? 187 : 205)))) : 201, i == 104 ? "\n" : "")

#define alt_cerceve1 for(int i = 0; i < 105; i++) printf("%c%s", i ? (i == 104 ? 188 : 205) : 200, i == 104 ? "\n" :"" )
#define alt_cerceve2 for(int i = 0; i < 105; i++) printf("%c%s", i ? (i == 69 ? 202 : (i == 104 ? 188 : 205)) : 200, i == 104 ? "\n" : "")

#define istaka_ust_cerceve for(int i=0; i<66; i++) printf("%c", i==0 ? (SetConsoleTextAttribute(ha,15),201) : (i==65 ? 187 : 205))
#define istaka_alt_cerceve for(int i=0; i<66; i++) printf("%c", i==0 ? (SetConsoleTextAttribute(ha,15),200) : (i==65 ? 188 : 205))

int aabs=0;
#define ayarli_bosluk for (int k = 0; k < (cift_seri_index!=0? aabs=0,(bosluk_devam==1 ? 5 : (bosluk_devam==3 ? 6 : (bosluk_devam==7?8:  (bosluk_devam==9 ? 8 : (bosluk_devam==5 ? 7 : 9 ) )  ))) : ( bosluk_devam==5 ?aabs=0 , 8 : ( bosluk_devam==6 ?aabs=0 , 9 : (bosluk_devam==7 ?aabs=0 , 10 :(bosluk_devam==8?aabs=0 , 10 :( bosluk_devam==9?aabs=0 , 11: (bosluk_devam==10?aabs=0 , 12: (bosluk_devam==2?aabs=0 , 6: (bosluk_devam==3? aabs=0 , 7: (bosluk_devam==11? (bosluk_index[3]==1? aabs=0 , 12: (aabs=0 , 11)):(bosluk_devam==12? aabs=0 , 6 : bosluk_devam==15?  ( /*12+4 mü yoksa 13+3 mü*/bosluk_index[12]==1? aabs=3 , 6 : (aabs=4 ,(bosluk_index[2]==1 ? 11 : 12) ) )   : bosluk_devam==14?  ((( /*11+4 mü yoksa 12+3 mü*/bosluk_index[11]==1? aabs=3 ,(bosluk_index[2]==1 ? 11 : 12) : (aabs=4 , 12 ) ))) : (bosluk_devam==13?  ( /*10+4 mü yoksa 11+3 mü*/bosluk_index[10]==1? (aabs=3 , 12) : (aabs=3 , 5) ):   (bosluk_devam==16 ? aabs=4, 6:  (bosluk_devam==17 ? ( /*10+4+4 mü yoksa 12+3+3 mü*/bosluk_index[11]==1? (aabs=5 , (bosluk_index[2]==1 ? 11 : 12)) : (aabs=8 , 11) ) : (bosluk_devam==18 ? ( /*11+4+4 mü yoksa 12+3+4 mü yoksa 13+3+3*/bosluk_index[11]==1? (aabs=7 , (bosluk_index[2]==1 ? 11 : 12)) : (bosluk_index[12]==1? (aabs=6, 6) : (aabs=8,11) ) ) :(aabs=0 , 4) ) ) ) )  ))))))))))); k++) printf(" ");
#define alt_ayarli_bosluk for(int i = 0; i < aabs-1; i++) printf(" ");

#define uyari_cerceve     printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
#define renk_degis(yi) SetConsoleTextAttribute(ha, yi/100==1 ? 2:((yi/100== 2 ? 3 : (yi/100==3 ? 4:(yi/100==4 ? 6: 7)))))    // 2 yeşil ; 3 mavi ; 4 kırmızı ; 6 sarı
#define sayi_bosluk(xi) (xi%100<10?32:0)

#define negatif_bosluk(zi) (zi<0?0:32)
#define skor_bosluk(ki) (ki>=1000?0:32)
#define skor_bosluk2(yi) (yi<10?32:0)
#define skor_bosluk3(fi) (fi<100?32:0)

#define swap_p(xii, yii) (*xii == *yii ? *xii = *yii : (*xii ^= *yii ^= *xii ^= *yii))                                            //
#define imza printf("\n101_OKEY v0.9.9.5.4 made by yunusbzkrtc                                  [ERRORS MAY OCCUR][EARLY ACCESS]\n")

HANDLE ha; 
WORD wOldColorAttrs;
int crash_kayit[256],crash_kayit_point[10],oyuncu_nu;
char cheat_code[20];
int lang_i;	//holding index for language change ( 0 -> turkish  ; 1 -> english )

int taslar[104],random[104],atik=0,temp_atik=0; //0 ile başlar 103 ile biter
void olusturma(){
    
    int ai, b, i, j, k=0, fi;

    //aşağıda random yerleştirme yapılıyor (hepsi birbirinden farklı)
	srand(time(NULL));	
	for(ai=0;ai<104;ai++){
		random[ai]=rand()%104;
		
		for(b=0;b<ai;b++){
			if(random[b]==random[ai]){
				ai--;
				break;
			}
		}
	}

    for(i=0;i<4;i++){
		for(j=0;j<13;j++){
            while(k<52){
				taslar[k]=(i+1)*100+(j+1);
                k++;              
				break;	
			}
        }
	}		
    
    for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			while(k<104){
				taslar[k]=(i+1)*100+(j+1);
				k++;
				break;	
			}	
		}
	}


}

int sifirlama_sayaci=0;     //oyunun oynanıp oynanmadığını kontrol eder    

int plyrand[4][22]/*random'u 21'e bölüp onun yerine geçer*/;
int orta[19],orta_index=0;//random  21'e bölündükten sonra kalan 19 taşı alır index ise ne kadar kaldığını söyler

void ayirma(){
olusturma();
sifirlama_sayaci=0;

int i,j;
    for(i=0;i<22;i++){  plyrand[0][i]=taslar[random[i]];
    }
	
    //i=21 den başlar çünkü yukarda 21'e kadar gelir 
    for(;i<43;i++){    
    //i değeri plyrand değişkeni için 21'in üstüne çıkmamalı (i-21 , i-42 gibi)
    plyrand[1][i-22]=taslar[random[i]];
	}
    plyrand[1][21]=0;
	for(;i<64;i++){ plyrand[2][i-43]=taslar[random[i]];
    }
	plyrand[2][21]=0;
	for(;i<85;i++){ plyrand[3][i-64]=taslar[random[i]];
    }
	plyrand[3][21]=0;
    for(;i<104;i++){ orta[i-85]=taslar[random[i]];
    }
}

void tasi_sona_koy(int *dizi);

int eleman_sayisi(int *dizi){

    int ik=0;
	tasi_sona_koy(&plyrand[0][0]);
    for ( ik = 0; ik < 22; ik++){
        if(*(dizi+ik)==0){
			return ik;
		}
    }
	return 22;
		
}
int skor[4]; //oyuncuların skorları



char *puan_durumu0={"[puan: "};
int puan_cift=0,pu_ci_sinir=34;	//puan yada çift sayisini yazmak için
int el_acma_siniri=34;

int bosluk_index[22],bosluk_devam=0;
int satir_sonu_index=11;
int cift_seri_index=0;	//kaç tane çift seri olduğunu tutuyor

int puan[4];
int tam_puan[4];	//tüm elemanları sayar toplam 101 olduğunda açar
int cift[4];

int seri_geri_kalan[4][22],cift_geri_kalan[4][22];
int ciftler[4][22];		//cift açarken kullanılıcak

int cift_acma_siniri=5;


int cift_seri_diz(int *siralama, int index, int oyuncu_no){

	tasi_sona_koy(siralama);
	
	cift_seri_index=0;

	int temp,dizi[index],i,j,k,m,bs=0;

	for (k = 0; k < index; k++)	dizi[k]=*(siralama+k);
	for (int i = 0; i < 22; i++) bosluk_index[i]=0;	

	//dizi küçükten büyüğe sıralama
	for (i=0;i<index;i++) {
    	for(j=0;j<index;j++) {
        	if(dizi[i]<dizi[j]) {
           		temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
        	}
		}
	}

	for (i = 0; i < index; i++){
		if (dizi[i]==dizi[i+1]){
			cift_seri_index++;
			bosluk_index[bs++]=0;
			bosluk_index[bs++]=1;
			for ( j = i; j > 0; j--)
			{
			swap_p(&dizi[j],&dizi[j-1]);
			}
			for ( j = i+1; j > 1; j--)
			{
			swap_p(&dizi[j],&dizi[j-1]);
			}
		}
	}
	satir_sonu_index=(bosluk_index[9]==1 ? 12:(bosluk_index[11]==1 ? 12 : 11) );
	bosluk_devam=bs-1;
	for ( i = 0; i < index; i++)
	{
		*(siralama+i)=dizi[i];
	}
	int cgk=0;
	for ( i = bs; i < index; i++)
	{
		cift_geri_kalan[oyuncu_no][cgk++]=dizi[i];
	}
	
	cift[oyuncu_no]=cift_seri_index;
	if(strcmp(cheat_code, "ciftboost")==0){
		cift[0]=cift_acma_siniri;
		cheat_code[0]=32;
	}
	if(oyuncu_no==0) puan_durumu0="[cift :";
	if(oyuncu_no==0) puan_cift=cift[0];
	pu_ci_sinir=cift_acma_siniri;
}


int crash_raport();
int anamenu();
int oyna(int devam);


char *konsol_ekrani1="  [w] ->  ortadan tas cek                   tas isle  <- [q]  ";
char *konsol_ekrani2="  [a] ->  yandan tas al                      seri ac  <- [e]  ";
char *konsol_ekrani3="  [s] ->  seri diz                           cift ac  <- [r]  ";
char *konsol_ekrani4="  [d] ->  cift diz                            tas at  <- [f]  ";
char *konsol_ekrani5="[w] -> take a tile from the middle           add a tile <- [q]";
char *konsol_ekrani6="[a] -> take a tile from the side            open series <- [e]";
char *konsol_ekrani7="[s] -> go for series                         open pairs <- [r]";
char *konsol_ekrani8="[d] -> go for pairs             put a tile to the right <- [f]";


int seriler[4][28];		//seri açarken kullanılıcak


int seri_diz(int *siralama , int index , int oyuncu_no){	
	
	
	puan[oyuncu_no]=0;
	cift_seri_index=0;

	int temp,dizi[index],dizi2[index],i,j,k,m,hata_kurtarma_dizi[22];

	for (k = 0; k < index; k++)	dizi[k]=*(siralama+k);
	for (i = 0; i < 22; i++) bosluk_index[i]=0;	

	for (k = 0; k < index; k++)	hata_kurtarma_dizi[k]=*(siralama+k); //dizi hata verirse eski haline dönücek

	//dizi küçükten büyüğe sıralama
	for (i=0;i<index;i++) {
    	for(j=0;j<index;j++) {
        	if(dizi[i]<dizi[j]) {
           		temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
        	}
		}
	}


int cift_kayit[index],ckk=0,cift_index[10],ci=0;
	
	//çift sayıları sona atma
	for ( i = 0; i < index; i++){
		if (dizi[i]==dizi[i+1]){
			cift_kayit[ckk++]=dizi[i];
			for ( j = 1; j < index-i-1; j++){
				temp=dizi[i+j];
				dizi[i+j]=dizi[i+j+1];
				dizi[i+j+1]=temp;		
			}		
		}	
    }
	for (i=0;i<ckk;i++) {
    	cift_index[i]=22-ckk+i;
	}
	/*
	for (int i = 0; i < 22; i++)
	{
		printf("%d  ",dizi[i]);
	}
	*/
	
int tip_1_uc[8][3],tip_2_uc[8][3],tip_1_dort[6][4],tip_2_dort[6][4];
int uc1=0,dort1=0,uc2=0,dort2=0;



	//1. tip seri kontrolü
	for ( i = 0; i < index; i++)
	{
		if ((i+5<index)&&(dizi[i]==dizi[i+1]-1)&&(dizi[i+1]==dizi[i+2]-1)&&(dizi[i+2]==dizi[i+3]-1)&&(dizi[i+3]==dizi[i+4]-1)&&(dizi[i+4]==dizi[i+5]-1))
		{
			for ( j = 0; j < 3; j++)
			{
				tip_1_uc[uc1][j]=dizi[i+j];

			}
			uc1++;
     		i+=2;	
		}
		
		else if ((i+4<index)&&(dizi[i]==dizi[i+1]-1)&&(dizi[i+1]==dizi[i+2]-1)&&(dizi[i+2]==dizi[i+3]-1)&&(dizi[i+3]==dizi[i+4]-1))
		{
			for ( j = 0; j < 4; j++)
			{
				tip_1_dort[dort1][j]=dizi[i+1+j];
			}
			dort1++;	
			i+=4;
		}

		else if ((i+3<index)&&(dizi[i]==dizi[i+1]-1)&&(dizi[i+1]==dizi[i+2]-1)&&(dizi[i+2]==dizi[i+3]-1))
		{
			for ( j = 0; j < 4; j++)
			{
				tip_1_dort[dort1][j]=dizi[i+j];
			}
			dort1++;	
			i+=3;
		}
		else if ((i+2<index)&&(dizi[i]==dizi[i+1]-1)&&(dizi[i+1]==dizi[i+2]-1))
		{
			for ( j = 0; j < 3; j++)
			{
				tip_1_uc[uc1][j]=dizi[i+j];

			}
			uc1++;
     		i+=2;
		}
	}

for ( i = 0; i < index; i++)
{
		dizi2[i]=dizi[i];
}


int gii=0;

	//2. tip seri kontrolü
	for ( i = 0; i < index; i++){
		for ( j=i+1; j < index; j++){
			for ( k=j+1; k < index; k++){
				for ( m = k+1; m < index; m++){
					if ((dizi2[i]!=dizi2[j])&&(dizi2[j]!=dizi2[k])&&(dizi2[i]!=dizi2[k])&&(dizi2[i]!=dizi2[m])&&(dizi2[j]!=dizi2[m])&&(dizi2[m]!=dizi2[k]))
					{
						if ((dizi2[i]%100==dizi2[j]%100)&&(dizi2[j]%100==dizi2[k]%100)&&(dizi2[i]%100==dizi2[k]%100)&&(dizi2[i]%100==dizi2[m]%100)&&(dizi2[j]%100==dizi2[m]%100)&&(dizi2[m]%100==dizi2[k]%100))
						{					
							tip_2_dort[dort2][0]=dizi2[i];
							tip_2_dort[dort2][1]=dizi2[j];
							tip_2_dort[dort2][2]=dizi2[k];
							tip_2_dort[dort2][3]=dizi2[m];
							dizi2[i]=0;
							dizi2[j]=0;
							dizi2[k]=0;
							dizi2[m]=0;
							dort2++;
							gii=1;
						}												
					}
				}
					if(gii==1)	gii=0;
					else if ((dizi2[i]!=dizi2[j])&&(dizi2[j]!=dizi2[k])&&(dizi2[i]!=dizi2[k]))
					{
						if ((dizi2[i]%100==dizi2[j]%100)&&(dizi2[j]%100==dizi2[k]%100)&&(dizi2[i]%100==dizi2[k]%100))
						{					
							tip_2_uc[uc2][0]=dizi2[i];
							tip_2_uc[uc2][1]=dizi2[j];
							tip_2_uc[uc2][2]=dizi2[k];
							dizi2[i]=0;
							dizi2[j]=0;
							dizi2[k]=0;
							uc2++;
						}												
					}		
									
			}									
		}	
	}
							
//crash raport değeri için tip degerlerini kaydeder
int ck=0;
for ( j = 0; j < uc1; j++)
{
	for ( i = 0; i < 3; i++)
	{
		crash_kayit[ck++]=tip_1_uc[j][i];
	}
}
for ( j = 0; j < uc2; j++)
{
	for ( i = 0; i < 3; i++)
	{
		crash_kayit[ck++]=tip_2_uc[j][i];
	}
}for ( j = 0; j < dort1; j++)
{
	for ( i = 0; i < 4; i++)
	{
		crash_kayit[ck++]=tip_1_dort[j][i];
	}
}for ( j = 0; j < dort2; j++)
{
	for ( i = 0; i < 4; i++)
	{
		crash_kayit[ck++]=tip_2_dort[j][i];
	}
}
crash_kayit_point[0]=ck;	//bundan sonraki dörtlü tip indexlerini tutar
crash_kayit[ck++]=uc1;
crash_kayit[ck++]=uc2;
crash_kayit[ck++]=dort1;
crash_kayit[ck++]=dort2;



//hangi seride hangi tasların aynı olduğunu tutuyor
int karsilastirma_kayit[uc1*uc2+uc1*dort2+dort1*uc2+dort1*dort2+uc2*uc1+uc2*dort1+dort2*uc1+dort2*dort1],kk=0;
int dort_temp[dort1+dort2],dt=0;


/*
					seri fonksiyonu 1 değer daha alsın
					1 diğer oyuncular ,0 esas oyuncu için
					esas oyuncu seri açarken  
					yüksek puanlı seri gelme şansı fazla olsun
					diğer oyuncular seri açarken 
					yüksek puanlı seri gelme şansı daha az olsun
					oyuna başlarken zorluk seviyesi seçilsin
					(esas oyuncu şansı/diğer oyuncu şansı)
					kolay   7/3
					normal  5/5
					zor		4/6
*/

int bbb=0;
	for ( i = 0; i < uc1; i++)
	{
		for ( k = 0; k < 3; k++)
		{	
			for ( j = 0; j < uc2; j++)
			{
				for ( m = 0; m < 3; m++)
				{
					if (tip_1_uc[i][k]==tip_2_uc[j][m])
					{
						for (int n = 0; n < ckk; n++)
						{
							if (tip_1_uc[i][k]==cift_kayit[n]){	
							bbb=1;
							break;
							}
						}	
						if(bbb==1)bbb=0;
						else{			
								karsilastirma_kayit[kk]=3*1000+i*100+30+j;
								kk++;
								break;
						}
					}	
				}			
			}		
		}
	}
		for ( i = 0; i < uc1; i++)
	{
		for ( k = 0; k < 3; k++)
		{	
			for ( j = 0; j < dort2; j++)
			{
				for ( m = 0; m < 4; m++)
				{
					if (tip_1_uc[i][k]==tip_2_dort[j][m])
					{
						dort_temp[dt]=tip_1_uc[i][k];
						dt++;
						for (int n = 0; n < ckk; n++)
						{
							if (tip_1_uc[i][k]==cift_kayit[n]){	
							bbb=1;
							break;
							}
						}	
						if(bbb==1)bbb=0;
						else{
							karsilastirma_kayit[kk]=3*1000+i*100+40+j;
							kk++;
							break;
						}
					}	
				}			
			}		
		}
	}
	for ( i = 0; i < dort1; i++)
	{
		for ( k = 0; k < 4; k++)
		{	
			for ( j = 0; j < dort2; j++)
			{
				for ( m = 0; m < 4; m++)
				{
					if (tip_1_dort[i][k]==tip_2_dort[j][m])
					{
						dort_temp[dt++]=tip_1_dort[i][k];

						for (int n = 0; n < ckk; n++)
						{
							if (tip_1_dort[i][k]==cift_kayit[n]){	
							bbb=1;
							break;
							}
						}	
						if(bbb==1)bbb=0;
						else{
							karsilastirma_kayit[kk]=4000+i*100+40+j;
							kk++;
							break;
						}
					}	
				}			
			}		
		}
	}
	for ( i = 0; i < dort1; i++)
	{
		for ( k = 0; k < 4; k++)
		{	
			for ( j = 0; j < uc2; j++)
			{
				for ( m = 0; m < 3; m++)
				{
					if (tip_1_dort[i][k]==tip_2_uc[j][m])
					{
						dort_temp[dt]=tip_1_dort[i][k];
						dt++;
						for (int n = 0; n < ckk; n++)
						{
							if (tip_1_dort[i][k]==cift_kayit[n]){	
							bbb=1;
							break;
							}
						}	
						if(bbb==1)bbb=0;
						else{		
							karsilastirma_kayit[kk]=4000+i*100+30+j;
							kk++;								
							break;
						}
					}	
				}			
			}		
		}
	}

//karsilastirma kayit sıfırlanmadan önce crash_kayit
crash_kayit_point[1]=kk;
for ( i = 0; i < kk; i++)
{
	crash_kayit[ck++]=karsilastirma_kayit[i];
}

crash_kayit_point[2]=dt;
for ( i = 0; i < dt; i++)
{
	crash_kayit[ck++]=dort_temp[i];
}
crash_kayit_point[3]=ckk;
for ( i = 0; i < ckk; i++)
{
	crash_kayit[ck++]=cift_kayit[i];
}





int ek_kullanilanlar[dt][3],ek=0;
int fi=0,ki=0,fii=0,kii=0,giii=0;
	for ( i = 0; i < kk; i++)
	{
		for ( j = i+1; j < kk; j++)
		{

			//ilk iki basamak kontrolü(karsilastirma_kayit)
			for ( m = j+1; m < kk; m++)
			{	
				for ( k = m+1; k < kk; k++)
				{
					if ((karsilastirma_kayit[i]/100==karsilastirma_kayit[j]/100)&&(karsilastirma_kayit[j]/100==karsilastirma_kayit[m]/100)&&(karsilastirma_kayit[m]/100==karsilastirma_kayit[k]/100))
					{
						if(karsilastirma_kayit[i]/1000==4){
							for ( int p = 0; p < 4; p++)
							{
							tip_1_dort[(karsilastirma_kayit[i]/100)%10][p]=0;								
							}
						}
						else if(karsilastirma_kayit[i]/1000==3){
							for ( int p = 0; p < 3; p++)
							{
							tip_1_uc[(karsilastirma_kayit[i]/100)%10][p]=0;								
							}
						}
						karsilastirma_kayit[i]=0;
						karsilastirma_kayit[j]=0;
						karsilastirma_kayit[m]=0;
						karsilastirma_kayit[k]=0;
						giii=1;
						fi=1;
						break;
					}
				}	
			}
			if(fi==1)fi=0;
			else
			{
				for ( m = j+1; m < kk; m++)
				{			
					if ((karsilastirma_kayit[i]/100==karsilastirma_kayit[j]/100)&&(karsilastirma_kayit[j]/100==karsilastirma_kayit[m]/100))
					{
						if(karsilastirma_kayit[i]/1000==4){
							for ( int p = 0; p < 4; p++)
							{
							tip_1_dort[(karsilastirma_kayit[i]/100)%10][p]=0;								
							}
						}
						else if(karsilastirma_kayit[i]/1000==3){
							for ( int p = 0; p < 3; p++)
							{
							tip_1_uc[(karsilastirma_kayit[i]/100)%10][p]=0;								
							}
						}
						karsilastirma_kayit[i]=0;
						karsilastirma_kayit[j]=0;
						karsilastirma_kayit[m]=0;
						giii=1;
						fii=1;
						break;
					}
				}
			}
			if(fii==1)fii=0;
			else if (karsilastirma_kayit[i]/100==karsilastirma_kayit[j]/100)
			{
				if(karsilastirma_kayit[i]/1000==4){
					for ( int p = 0; p < 4; p++)
					{
					tip_1_dort[(karsilastirma_kayit[i]/100)%10][p]=0;								
					}
				}
				else if(karsilastirma_kayit[i]/1000==3){
					for ( int p = 0; p < 3; p++)
					{
					tip_1_uc[(karsilastirma_kayit[i]/100)%10][p]=0;								
					}
				}
				karsilastirma_kayit[i]=0;
				karsilastirma_kayit[j]=0;
				giii=1;
				break;
			}


			//diğer iki basamak kontrolü(karsilastirma_kayit)
			for ( m = j+1; m < kk; m++)
			{	
				for ( k = m+1; k < kk; k++)
				{
					if ((karsilastirma_kayit[i]%100==karsilastirma_kayit[j]%100)&&(karsilastirma_kayit[j]%100==karsilastirma_kayit[m]%100)&&(karsilastirma_kayit[m]%100==karsilastirma_kayit[k]%100))
					{
						if((karsilastirma_kayit[i]%100)/10==4){
							for ( int p = 0; p < 4; p++)
							{
							tip_2_dort[karsilastirma_kayit[i]%10][p]=0;								
							}
						}
						else if((karsilastirma_kayit[i]%100)/10==3){
							for ( int p = 0; p < 3; p++)
							{
							tip_2_uc[karsilastirma_kayit[i]%10][p]=0;								
							}
						}
						karsilastirma_kayit[i]=0;
						karsilastirma_kayit[j]=0;
						karsilastirma_kayit[m]=0;
						karsilastirma_kayit[k]=0;
						giii=1;
						ki=1;
						break;
					}	
				}	
			}
			if(ki==1)	ki=0;
			else
			{
				for ( m = j+1; m < kk; m++)
				{	
					if ((karsilastirma_kayit[i]%100==karsilastirma_kayit[j]%100)&&(karsilastirma_kayit[j]%100==karsilastirma_kayit[m]%100))
					{
						if((karsilastirma_kayit[i]%100)/10==4){
							for ( int p = 0; p < 4; p++)
							{
							tip_2_dort[karsilastirma_kayit[i]%10][p]=0;								
							}
						}
						else if((karsilastirma_kayit[i]%100)/10==3){
							for ( int p = 0; p < 3; p++)
							{
							tip_2_uc[karsilastirma_kayit[i]%10][p]=0;								
							}
						}
						karsilastirma_kayit[i]=0;
						karsilastirma_kayit[j]=0;
						karsilastirma_kayit[m]=0;
						giii=1;
						kii=1;
						break;
					}
				}
			}
			if(kii==1)	kii=0;
			else if (karsilastirma_kayit[i]%100==karsilastirma_kayit[j]%100)
			{
				if((karsilastirma_kayit[i]%100)/10==4){
					for ( int p = 0; p < 4; p++)
					{
					tip_2_dort[karsilastirma_kayit[i]%10][p]=0;
					}
				}
				else if((karsilastirma_kayit[i]%100)/10==3){
					for ( int p = 0; p < 3; p++)
					{
					tip_2_uc[karsilastirma_kayit[i]%10][p]=0;								
					}
				}
				karsilastirma_kayit[i]=0;
				karsilastirma_kayit[j]=0;
				giii=1;
				break;
			}
		}


		//diğer durumda (sadece bir eşitlik varsa)
		if(giii==1)giii=0;
		else{

			if(karsilastirma_kayit[i]/1000==4)
			{	
				if((karsilastirma_kayit[i]%100)/10==4)
				{
					if (tip_1_dort[(karsilastirma_kayit[i]/100)%10][2]%100>=tip_2_dort[karsilastirma_kayit[i]%10][2]%100)
					{
						for ( int n = 0; n < 4; n++)
						{
							for ( j = 0; j < dt; j++)
							{
								if(tip_2_dort[karsilastirma_kayit[i]%10][n]==dort_temp[j])
								{
									tip_2_dort[karsilastirma_kayit[i]%10][n]=0;
									for(int m=n;m<3;m++){
										swap_p(&tip_2_dort[karsilastirma_kayit[i]%10][m],&tip_2_dort[karsilastirma_kayit[i]%10][m+1]);
									}
									for ( k = 0; k < 3; k++){
										ek_kullanilanlar[ek][k]=tip_2_dort[karsilastirma_kayit[i]%10][k];
									}
									dort_temp[j]=0;
									ek++;
								}
							}	
						}
						for (int p = 0; p < 4; p++)
						{
							tip_2_dort[karsilastirma_kayit[i]%10][p]=0;
						}
							
					}
					else{
						for ( int n = 0; n < 4; n++)
						{
							for ( j = 0; j < dt; j++)
							{
								if(tip_1_dort[(karsilastirma_kayit[i]/100)%10][n]==dort_temp[j])
								{
									tip_1_dort[(karsilastirma_kayit[i]/100)%10][n]=0;
									for(int m=n;m<3;m++){
										swap_p(&tip_1_dort[(karsilastirma_kayit[i]/100)%10][m],&tip_1_dort[(karsilastirma_kayit[i]/100)%10][m+1]);
									}
									for ( k = 0; k < 3; k++){
										ek_kullanilanlar[ek][k]=tip_1_dort[(karsilastirma_kayit[i]/100)%10][k];
									}
									dort_temp[j]=0;
									ek++;
								}
							}	
						}
						for (int p = 0; p < 4; p++)
						{
							tip_1_dort[(karsilastirma_kayit[i]/100)%10][p]=0;
						}
					}								
				}
				else if((karsilastirma_kayit[i]%100)/10==3)
				{
					if (tip_1_dort[(karsilastirma_kayit[i]/100)%10][2]%100>=tip_2_uc[karsilastirma_kayit[i]%10][1]%100)
					{
						for (int p = 0; p < 3; p++)
						{
							tip_2_uc[karsilastirma_kayit[i]%10][p]=0;
						}
							
					}
					else
					{
						for ( int n = 0; n < 4; n++)
						{
							for ( j = 0; j < dt; j++)
							{
								if(tip_1_dort[(karsilastirma_kayit[i]/100)%10][n]==dort_temp[j])
								{
									tip_1_dort[(karsilastirma_kayit[i]/100)%10][n]=0;
									for(int m=n;m<3;m++){
										swap_p(&tip_1_dort[(karsilastirma_kayit[i]/100)%10][m],&tip_1_dort[(karsilastirma_kayit[i]/100)%10][m+1]);
									}
									for ( k = 0; k < 3; k++){
										ek_kullanilanlar[ek][k]=tip_1_dort[(karsilastirma_kayit[i]/100)%10][k];
									}
									dort_temp[j]=0;
									ek++;
								}
							}	
						}
						for (int p = 0; p < 4; p++)
						{
							tip_1_dort[(karsilastirma_kayit[i]/100)%10][p]=0;
						}
					}				
				}
			}
			else if(karsilastirma_kayit[i]/1000==3)
			{
				if((karsilastirma_kayit[i]%100)/10==4)
				{
					if (tip_1_uc[(karsilastirma_kayit[i]/100)%10][1]%100>tip_2_dort[karsilastirma_kayit[i]%10][2]%100)
					{
						for ( int n = 0; n < 4; n++)
						{
							for ( j = 0; j < dt; j++)
							{
								if(tip_2_dort[karsilastirma_kayit[i]%10][n]==dort_temp[j])
								{
									tip_2_dort[karsilastirma_kayit[i]%10][n]=0;
									for(int m=n;m<3;m++){
										swap_p(&tip_2_dort[karsilastirma_kayit[i]%10][m],&tip_2_dort[karsilastirma_kayit[i]%10][m+1]);
									}
									for ( k = 0; k < 3; k++){
										ek_kullanilanlar[ek][k]=tip_2_dort[karsilastirma_kayit[i]%10][k];
									}
									dort_temp[j]=0;
									ek++;
								}
							}	
						}
						for (int p = 0; p < 4; p++)
						{
							tip_2_dort[karsilastirma_kayit[i]%10][p]=0;
						}
							
					}
					else if(tip_1_uc[(karsilastirma_kayit[i]/100)%10][1]%100<=tip_2_dort[karsilastirma_kayit[i]%10][2]%100)
					{
						for (int p = 0; p < 3; p++)
						{
							tip_1_uc[(karsilastirma_kayit[i]/100)%10][p]=0;
						}
					}								
				}
				else if((karsilastirma_kayit[i]%100)/10==3)
				{
					if (tip_1_uc[(karsilastirma_kayit[i]/100)%10][1]%100>=tip_2_uc[karsilastirma_kayit[i]%10][1]%100)
					{
						for (int p = 0; p < 3; p++)
						{
							tip_2_uc[karsilastirma_kayit[i]%10][p]=0;
						}
							
					}
					else{
						for (int p = 0; p < 3; p++)
						{
							tip_1_uc[(karsilastirma_kayit[i]/100)%10][p]=0;
						}
					}				
				}
			}
		}	
	}

	
	
	//geri kalan taslar

satir_sonu_index=0;	//13'e kadar çıkabilir kullanırken 1 eksilt
int bi=0;//boşluk index sayacı
int kullanilanlar[index],kull=0;
int srlr=0;
	
	for ( i = 0; i < uc1; i++)
	{
		
		if (tip_1_uc[i][0]/100==0)
		{
			continue;
		}
		else{
			for ( j = 0; j < 3; j++)
			{
				kullanilanlar[kull]=tip_1_uc[i][j];
				kull++;
			}
			puan[oyuncu_no]+=(tip_1_uc[i][1]%100);
			tam_puan[oyuncu_no]+=(tip_1_uc[i][0]%100+tip_1_uc[i][1]%100+tip_1_uc[i][2]%100);
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=1;

			seriler[oyuncu_no][srlr++]=tip_1_uc[i][0];
			seriler[oyuncu_no][srlr++]=tip_1_uc[i][1];
			seriler[oyuncu_no][srlr++]=tip_1_uc[i][2];
			seriler[oyuncu_no][srlr++]=0;

			if ((satir_sonu_index>10)&&(satir_sonu_index<=13))
			{
				continue;
			}
			else{
				satir_sonu_index+=3;
			}
		}
	}
	for ( i = 0; i < dort1; i++)
	{
		
		if (tip_1_dort[i][0]/100==0)
		{
			continue;
		}
		else{
			for ( j = 0; j < 4; j++)
			{
				kullanilanlar[kull]=tip_1_dort[i][j];
				kull++;
			}
			puan[oyuncu_no]+=((tip_1_dort[i][2]%100)+((tip_1_dort[i][0]%100)/3));
			tam_puan[oyuncu_no]+=(tip_1_dort[i][0]%100+tip_1_dort[i][1]%100+tip_1_dort[i][2]%100+tip_1_dort[i][3]%100);
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=1;

			seriler[oyuncu_no][srlr++]=tip_1_dort[i][0];
			seriler[oyuncu_no][srlr++]=tip_1_dort[i][1];
			seriler[oyuncu_no][srlr++]=tip_1_dort[i][2];
			seriler[oyuncu_no][srlr++]=tip_1_dort[i][3];
			
			if(satir_sonu_index==10)
			{
				satir_sonu_index=144;
			}
			else if ((satir_sonu_index>10)&&(satir_sonu_index<=13))
			{
				continue;
			}
			else{
				satir_sonu_index+=4;
			}
		}
		
	}
	for ( i = 0; i < uc2; i++)
	{
		
		if (tip_2_uc[i][0]/100==0)
		{
			continue;
		}
		else{
			for ( j = 0; j < 3; j++)
			{
				kullanilanlar[kull]=tip_2_uc[i][j];
				kull++;
			}
			puan[oyuncu_no]+=(tip_2_uc[i][1]%100);
			tam_puan[oyuncu_no]+=(tip_2_uc[i][0]%100+tip_2_uc[i][1]%100+tip_2_uc[i][2]%100);
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=1;

			seriler[oyuncu_no][srlr++]=tip_2_uc[i][0];
			seriler[oyuncu_no][srlr++]=tip_2_uc[i][1];
			seriler[oyuncu_no][srlr++]=tip_2_uc[i][2];
			seriler[oyuncu_no][srlr++]=0;
			
			if ((satir_sonu_index>10)&&(satir_sonu_index<=13))
			{
				continue;
			}
			else{
				satir_sonu_index+=3;
			}
		}
		
	}
	for ( i = 0; i < dort2; i++)
	{
		if (tip_2_dort[i][0]/100==0)
		{
			continue;
		}
		else{
			for ( j = 0; j < 4; j++)
			{
				kullanilanlar[kull]=tip_2_dort[i][j];
				kull++;
			}
			puan[oyuncu_no]+=((tip_2_dort[i][2]%100)+((tip_2_dort[i][0]%100)/3));
			tam_puan[oyuncu_no]+=(tip_2_dort[i][0]%100+tip_2_dort[i][1]%100+tip_2_dort[i][2]%100+tip_2_dort[i][3]%100);
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=0;
			bosluk_index[bi++]=1;

			seriler[oyuncu_no][srlr++]=tip_2_dort[i][0];
			seriler[oyuncu_no][srlr++]=tip_2_dort[i][1];
			seriler[oyuncu_no][srlr++]=tip_2_dort[i][2];
			seriler[oyuncu_no][srlr++]=tip_2_dort[i][3];
			
			if(satir_sonu_index==10)
			{
				satir_sonu_index=144;
			}
			else if ((satir_sonu_index>10)&&(satir_sonu_index<=13))
			{
				continue;
			}
			else{
				satir_sonu_index+=4;
			}
		}
		
	}

//ek kullanılanlar
	int abcd=0,axx=0;
	for ( i = 0; i < ek; i++)
	{	
		for ( j = i; j < ek; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if(i!=j){
					if(ek_kullanilanlar[i][k]==ek_kullanilanlar[j][k]){
					axx=1;
					break;
					}
				}
			}
			if(axx) break;
		}
		if(axx) continue;


		for ( j = 0; j < 3; j++)
		{
			if(ek_kullanilanlar[i][j]==0){
				abcd=1;
				break;
			}
			
		}
		if(abcd==1)abcd=0;
		else{

		kullanilanlar[kull++]=ek_kullanilanlar[i][0];
		kullanilanlar[kull++]=ek_kullanilanlar[i][1];
		kullanilanlar[kull++]=ek_kullanilanlar[i][2];

		seriler[oyuncu_no][srlr++]=ek_kullanilanlar[i][0];
		seriler[oyuncu_no][srlr++]=ek_kullanilanlar[i][1];
		seriler[oyuncu_no][srlr++]=ek_kullanilanlar[i][2];
		seriler[oyuncu_no][srlr++]=0;

		puan[oyuncu_no]+=ek_kullanilanlar[i][1]%100;
		tam_puan[oyuncu_no]+=(ek_kullanilanlar[i][0]%100+ek_kullanilanlar[i][1]%100+ek_kullanilanlar[i][2]%100+tip_2_dort[i][3]%100);

		if ((satir_sonu_index>10)&&(satir_sonu_index<=13))
		{
			continue; 
		}
		else{
			satir_sonu_index+=3;
		}

		bosluk_index[bi++]=0;
		bosluk_index[bi++]=0;
		bosluk_index[bi++]=1;
		}
	}
	if(bi==0) bi=1;
	bosluk_devam=bi-1;

	int kullanilanlar_temp[kull];
	for ( i = 0; i < kull; i++)
	{
		kullanilanlar_temp[i]=kullanilanlar[i];
	}
	
	int geri_kalan[index],gk=0,aiii=0;
	for ( i = 0; i < index; i++)
	{
		for ( j = 0; j < kull; j++)
		{
			if (dizi[i]==kullanilanlar[j])
			{
				kullanilanlar[j]=0;
				aiii=1;
				break;
			}
		}	
		if(aiii==1)aiii=0;
		else{
			if (satir_sonu_index<=10)
			{
				satir_sonu_index=11;
			}
			geri_kalan[gk]=dizi[i];
			gk++;
		}
	}
	if(satir_sonu_index>=144) satir_sonu_index=10;
	if(satir_sonu_index==0) satir_sonu_index=11;
	//en sonda yazdırma
	int yunus=0;
	for ( i = 0; i < kull; i++)
	{
		*(siralama+i)=kullanilanlar_temp[i];
	}
	for ( i = kull; i < kull+gk; i++)
	{
		*(siralama+i)=geri_kalan[yunus++];
	}
	
	int sgk=0;
	for ( i = 0; i < yunus; i++)
	{
		seri_geri_kalan[oyuncu_no][sgk++]=geri_kalan[i];
	}

	if(oyuncu_no==0) puan_durumu0="[puan: ";
	if(el_acma_siniri>=pu_ci_sinir) pu_ci_sinir=el_acma_siniri;
	else if(pu_ci_sinir<=34) pu_ci_sinir=34;
	if(strcmp(cheat_code, "pointboost")==0){
		puan[0]=el_acma_siniri;
		cheat_code[0]=32;
	}
	if(oyuncu_no==0) puan_cift=puan[0];

	
	

	//ek_kullanilanlar kullanilanlar_temp ve geri_kalan için crash_kayit
	crash_kayit_point[4]=ek;
	for ( i = 0; i < ek; i++)
	{	
		for ( j = 0; j < 3; j++)
		{
			crash_kayit[ck++]=ek_kullanilanlar[i][j];
		}
	}
	crash_kayit_point[5]=kull;	//kull değeri için
	for ( i = 0; i < kull; i++)
	{
		crash_kayit[ck++]=kullanilanlar_temp[i];
	}
	crash_kayit_point[6]=gk;
	for ( i = 0; i < gk; i++)
	{
		crash_kayit[ck++]=geri_kalan[i];
	}

	//hata kontrolü
	for (i=0;i<index;i++) {
    	for(j=0;j<index;j++) {
        	if(dizi[i]<dizi[j]) {
           		temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
        	}
		}
	}
	for (int i = 0; i < index; i++)
	{
		if(dizi[i]==0) continue;
		else if ((dizi[i]==dizi[i+1])&&(dizi[i+1]==dizi[i+2]))
		{
			
			for (k = 0; k < index; k++)	*(siralama+k)=hata_kurtarma_dizi[k];	//hata çıktığında diziyi en eski haline çeviricek

			konsol_ekrani1="                       !! kritik hata !!                      ";
			konsol_ekrani2="                ayni tastan ikiden fazla olustu               ";
			konsol_ekrani3="                  [herhangi bir tusa basiniz]                 ";
			konsol_ekrani4="                      [h] -> crash raport                     ";
			konsol_ekrani5="                     !! critical error !!                     ";
		 	konsol_ekrani6="           there are more than two of the same tile           ";
			konsol_ekrani7="                       [ press any key ]                      ";
			konsol_ekrani8="                      [h] -> crash raport                     ";
			oyuncu_nu=oyuncu_no;
			oyna(2);
			int xx;
			xx=getch();
			switch (xx)
			{
			case h:
				crash_raport();
				break;
			case x:
				anamenu();
				break;
			default:
				if(oyuncu_no==0 )oyna(0);
				else break;
			}
		}
	}


}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int sondaki_sifir = 0; //dizinin sonunda kaç tane silinmiş (sıfıra dönüşen) tas olduğunu tutar
int acilan_seriler[100][4],as=0,tas_alinabilirlik[4]={0,0,0,0};

int seri_ac(int oyuncu_no){
	tasi_sona_koy(&plyrand[oyuncu_no][0]);
	seri_diz(&plyrand[oyuncu_no][0],eleman_sayisi(&plyrand[oyuncu_no][0]),oyuncu_no);
	int sinir;
	for (int i = 0; i < 28; i++)
	{	
		if(seriler[oyuncu_no][28-i]==0){
			continue;
		}
		else {
			sinir=28-i;
			break;
			}
	}
	for (int i = 0; (i+3) <= sinir+1; i++)
	{
		if(seriler[oyuncu_no][i]==0)break;
		acilan_seriler[as][0]=seriler[oyuncu_no][i];
		acilan_seriler[as][1]=seriler[oyuncu_no][i+1];
		acilan_seriler[as][2]=seriler[oyuncu_no][i+2];
		acilan_seriler[as][3]=seriler[oyuncu_no][i+3];
		i+=3;
		as++;
	}
	int ss=0;
	for (int i = 0; i < 22; i++)
	{
		for (int j = 0; j < 22; j++)
		{
			if(seriler[oyuncu_no][j]==0)continue;
			else if (plyrand[oyuncu_no][i]==seriler[oyuncu_no][j])
			{
				plyrand[oyuncu_no][i]=0;
				seriler[oyuncu_no][j]=0;
				ss++;
				break;
			}
		}
	}
	tas_alinabilirlik[oyuncu_no]=1;

	tasi_sona_koy(&plyrand[oyuncu_no][0]);
	if(oyuncu_no==0) {
		seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
		sondaki_sifir+=ss;
	}
}

int ac=0,cift_tas_atilabilir[4]={0,0,0,0}; //açılan çiftler

int cift_ac(int oyuncu_no){
	tasi_sona_koy(&plyrand[oyuncu_no][0]);
	cift_seri_diz(&plyrand[oyuncu_no][0],eleman_sayisi(&plyrand[oyuncu_no][0]),oyuncu_no);

	for ( int i = 0; i < cift_seri_index ; i++)
	{
	}
	int ss=0;
	for (int  i = 0; i < 2*cift_seri_index; i++)
	{
		plyrand[oyuncu_no][i]=0;
		ss++;
	}
	cift_tas_atilabilir[oyuncu_no]=1;

	tasi_sona_koy(&plyrand[oyuncu_no][0]);
	if(oyuncu_no==0) {
		cift_seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
		sondaki_sifir+=ss;
	}
}


char cd;


int oyun_bitti(int kazanan);



int el_kontrol(int oyuncu_no){
//el deki bütün tasların atılıp atılmadığını kontrol ediyor
int ka=0;
for (int i = 0; i < 22; i++)
{
	if (plyrand[oyuncu_no][i]==0)
	{
	ka++;	
	}
}
if(ka>=22){
	orta_index=20;
	skor[oyuncu_no]-=101;
	oyun_bitti(oyuncu_no);
}
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int islek[100],is=0;

int islek_taslar(){
int renk_toplam=10;
is=0;
	for (int i = 0; i < as; i++)
	{
		if((acilan_seriler[i][3]==0)&&(acilan_seriler[i][0]!=0)){
			if (acilan_seriler[i][0]==acilan_seriler[i][1]-1)
			{
				if(acilan_seriler[i][0]%100!=1){
				islek[is++]=acilan_seriler[i][0]-1;
				}
				if(acilan_seriler[i][2]%100!=13){
				islek[is++]=acilan_seriler[i][2]+1;
				}
			}
			else if(acilan_seriler[i][0]%100==acilan_seriler[i][1]%100)
			{
				for (int j = 0; j < 3; j++)
				{
					if(acilan_seriler[i][j]/100==1){
						renk_toplam--;
						continue;
					}
					if(acilan_seriler[i][j]/100==2){
						renk_toplam-=2;
						continue;
					}
					if(acilan_seriler[i][j]/100==3){
						renk_toplam-=3;
						continue;
					}
					if(acilan_seriler[i][j]/100==4){
						renk_toplam-=4;
						continue;
					}
				}
				islek[is++]=(renk_toplam*100)+(acilan_seriler[i][0]%100);
				renk_toplam=10;
			}
		}
	}
}


int ctrl_used=505;
int diger_oyuncular_durum();


int islek_tas_kontrol(int atilan_tas,int oyuncu_no){
	islek_taslar();
	for (int i = 0; i < is; i++)
	{
		if (atilan_tas==islek[i])
		{
			if (oyuncu_no==0)
			{
				diger_oyuncular_durum(0);
			}
			else{
			return 1;
			}
		}
	}
	if(atilan_tas==ctrl_used){
		diger_oyuncular_durum(7);
	}
	if(oyuncu_no==0){
		for (int i = 0; i < 22; i++){
			if(ctrl_used==plyrand[0][i]){
				diger_oyuncular_durum(7);
			}
		}
	}
	
	return 0;
}


int atilabilirlik_kontrol(int *gelen_dizi,int index){
int dizi[index],dizi2[index],i,j,k=0,temp;
for (int i = 0; i < index; i++)	dizi[i]=*(gelen_dizi+i);

	
	//dizi küçükten büyüğe sıralama
	for (i=0;i<index;i++) {
    	for(j=0;j<index;j++) {
        	if(dizi[i]<dizi[j]) {
           		temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
        	}
		}
	}

	for ( i = 0; i < index; i++)	dizi2[i]=dizi[i];

int cift_kayit[index],ckk=0,cift_index[10],ci=0;
	
	//çift sayıları sona atma
	for ( i = 0; i < index; i++){
		if (dizi[i]==dizi[i+1]){
			cift_kayit[ckk++]=dizi[i];
			for ( j = 1; j < index-i-1; j++){
				temp=dizi[i+j];
				dizi[i+j]=dizi[i+j+1];
				dizi[i+j+1]=temp;		
			}		
		}	
    }

	//1. tip seri kontrolü
	for ( i = 0; i < index; i++)
	{
		if ((i+2<index)&&(dizi[i]!=dizi[i+1]-1)&&(dizi[i]==dizi[i+2]-2))
		{
			dizi[i]=0;
			dizi[i+2]=0;
			i+=2;
		}
	}
	for ( i = 0; i < index; i++)
	{
		if ((i+1<index)&&(dizi[i]==dizi[i+1]-1))
		{
			dizi[i]=0;
			dizi[i+1]=0;
			i+=2;
		}
	}

	//2. tip seri kontrolü
	for ( i = 0; i < index; i++){
		for ( j=i+1; j < index; j++){
			if (dizi2[i]!=dizi2[j])
			{
				if (dizi2[i]%100==dizi2[j]%100)
				{					
					dizi2[i]=0;
					dizi2[j]=0;
				}												
			}									
		}	
	}
	int kullanilabilir[index];
	for (i = 0; i < index; i++)
	{
		for ( j = 0; j < index; j++)
		{
			if ((dizi[i]!=0)&&(dizi2[j]!=0))
			{
				if (dizi[i]==dizi2[j])
				{
					kullanilabilir[k++]=dizi[i];
					dizi[i]=0;
					break;
				}
			}
		}
	}
	
	for (i=0;i<k;i++) {
    	for(j=0;j<k;j++) {
        	if(kullanilabilir[i]%100<kullanilabilir[j]%100) {
           		temp=kullanilabilir[i];
				kullanilabilir[i]=kullanilabilir[j];
				kullanilabilir[j]=temp;
        	}
		}
	}
	if(k>0){
		for (i = 0; i < index; i++)
		{
			if(islek_tas_kontrol(kullanilabilir[i],1)==0) break;
		}
		return kullanilabilir[i];
	}
	else{
		return 0;
	}
}


int tip_belirleme(int oyuncu_no){
	int index=eleman_sayisi(&plyrand[1][0]),i,j,temp;


	if((puan[oyuncu_no]<=10)&&(cift[oyuncu_no]>2)){
		return 1;	//seri
	}
	if((puan[oyuncu_no]<=10)&&(cift[oyuncu_no]<=2)){
		return 0;	//cift
	}
	if((puan[oyuncu_no]>10)&&(cift[oyuncu_no]>2)){
		return 0;	//cift
	}
	if((puan[oyuncu_no]>10)&&(cift[oyuncu_no]<=2)){
		return 0;	//cift
	}


}



int diger_oyuncular();

int oyuncu_durum[4];	//0 -> oynuyor ;  1 -> seri acti ;  2 -> cift acti ;  3 ->tas isledi

int yan12=0,yan41=0,yan23=0,yan34=0,yan41_temp=0,yan12_temp; //1. ve2. oyuncu arasındaki taş

int diger_oyuncular_durum(int devam){
int us=600000;// usleep süresi belirleme

	if(devam==0){
		konsol_ekrani1="                          !!  uyari  !!                       ";
		konsol_ekrani2="     -- islek tas attiginiz icin 101 ceza puani aldiniz --    ";
		konsol_ekrani3="                                                              ";
		konsol_ekrani4="                                                              ";

		konsol_ekrani5="                         !!  warning  !!                      ";
		konsol_ekrani6="-- You received 101 penalty points for throwing a busy tile --";
		konsol_ekrani7="                                                              ";
		konsol_ekrani8="                                                              ";
		skor[0]+=101;
		oyna(2);
		usleep(1300000);
	}

	if(devam==1){

		if(oyuncu_durum[1]==0){
			konsol_ekrani1="                    [[ 2. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                                                              ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 2nd player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                                                              ";
			konsol_ekrani8="                                                              ";
			us=600000;
		}
		if(oyuncu_durum[1]==1){
			konsol_ekrani1="                    [[ 2. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 2. oyuncu seri acti ]]                  ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 2nd player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                [[ 2nd player opened series ]]                ";
			konsol_ekrani8="                                                              ";
			us=1100000;
		}
		if(oyuncu_durum[1]==2){
			konsol_ekrani1="                    [[ 2. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 2. oyuncu cift acti ]]                  ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 2nd player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                 [[ 2nd player opened pairs ]]                ";
			konsol_ekrani8="                                                              ";
			us=1100000;
		}
		if(oyuncu_durum[1]==3){
			konsol_ekrani1="                    [[ 2. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 2.oyuncu tas isledi ]]                  ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 2nd player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                 [[ 2nd player added a tile ]]                ";
			konsol_ekrani8="                                                              ";
			us=1500000;
		}
		tasi_sona_koy(&plyrand[0][0]);
		seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
		oyna(2);
		usleep(us);
		return 0;
	}
	if(devam==2){
		oyna(2);
		usleep(500000);
		return 0;
	}

	if(devam==3){

		if(oyuncu_durum[2]==0){
			konsol_ekrani1="                    [[ 3. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                                                              ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 3rd player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                                                              ";
			konsol_ekrani8="                                                              ";
			us=600000;
		}
		if(oyuncu_durum[2]==1){
			konsol_ekrani1="                    [[ 3. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 3. oyuncu seri acti ]]                  ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 3rd player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                [[ 3rd player opened series ]]                ";
			konsol_ekrani8="                                                              ";
			us=1100000;
		}
		if(oyuncu_durum[2]==2){
			konsol_ekrani1="                    [[ 3. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 3. oyuncu cift acti ]]                  ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 3rd player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                 [[ 3rd player opened pairs ]]                ";
			konsol_ekrani8="                                                              ";
			us=1100000;
		}
		if(oyuncu_durum[2]==3){
			konsol_ekrani1="                    [[ 3. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 3.oyuncu tas isledi ]]                  ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 3rd player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                 [[ 3rd player added a tile ]]                ";
			konsol_ekrani8="                                                              ";
			us=1500000;
		}
		tasi_sona_koy(&plyrand[0][0]);
		seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
		oyna(2);
		usleep(us);
		return 0;
	}
	if(devam==4){
		oyna(2);
		usleep(500000);
		return 0;
	}

	if(devam==5){

		if(oyuncu_durum[3]==0){
			konsol_ekrani1="                    [[ 4. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";  
			konsol_ekrani3="                                                              ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 4th player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                                                              ";
			konsol_ekrani8="                                                              ";
			us=600000;
		}
		if(oyuncu_durum[3]==1){
			konsol_ekrani1="                    [[ 4. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 4. oyuncu seri acti ]]                  ";
			konsol_ekrani4="                                                              ";
			
			konsol_ekrani5="                   [[ 4th player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                [[ 4th player opened series ]]                ";
			konsol_ekrani8="                                                              ";
			us=1100000;
		}
		if(oyuncu_durum[3]==2){
			konsol_ekrani1="                    [[ 4. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 4. oyuncu cift acti ]]                  ";
			konsol_ekrani4="                                                              ";
			
			konsol_ekrani5="                   [[ 4th player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                 [[ 4th player opened pairs ]]                ";
			konsol_ekrani8="                                                              ";
			us=1100000;
		}
		if(oyuncu_durum[3]==3){
			konsol_ekrani1="                    [[ 4. oyuncu oynuyor ]]                   ";
			konsol_ekrani2="                                                              ";
			konsol_ekrani3="                   [[ 4.oyuncu tas isledi ]]                  ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                   [[ 4th player playing ]]                   ";
			konsol_ekrani6="                                                              ";
			konsol_ekrani7="                 [[ 4th player added a tile ]]                ";
			konsol_ekrani8="                                                              ";
			us=1500000;
		}
		tasi_sona_koy(&plyrand[0][0]);
		seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
		oyna(2);
		usleep(us);
		return 0;
	}
	if(devam==6){
		oyna(2);
		usleep(500000);
		return 0;
	}

	if(devam==7){
		konsol_ekrani1="                          !!  uyari  !!                       ";
		konsol_ekrani2="     -- yandan aldiginiz tasi herzaman acmaniz gerekir --     ";
		konsol_ekrani3="                 --  101 ceza puani aldiniz --                ";
		konsol_ekrani4="                                                              ";

		konsol_ekrani5="                         !!  warning  !!                      ";
		konsol_ekrani6="- You should always use the tile you take from the left side -";
		konsol_ekrani7="              - You received 101 penalty points -             ";
		konsol_ekrani8="                                                              ";
		skor[0]+=101;
		oyna(2);
		usleep(1300000);
	}

}


int yan_al_control2(int oyuncu_no,int yan){

	plyrand[oyuncu_no][21]=yan;
	tasi_sona_koy(&plyrand[oyuncu_no][0]);
	seri_diz(&plyrand[oyuncu_no][0],eleman_sayisi(&plyrand[oyuncu_no][0]),oyuncu_no);
	cift_seri_diz(&plyrand[oyuncu_no][0],eleman_sayisi(&plyrand[oyuncu_no][0]),oyuncu_no);

if(puan[oyuncu_no]>=el_acma_siniri){
	if(oyuncu_no==0) seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
	return 1;
}
else if(cift[oyuncu_no]>=cift_acma_siniri){
	if(oyuncu_no==0) cift_seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
	return 1;
}
else{
	for (int i = 0; i < 22; i++)
	{
		if(plyrand[oyuncu_no][i]==yan){
			plyrand[oyuncu_no][i]=0;
			if(oyuncu_no==0) seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
			tasi_sona_koy(&plyrand[oyuncu_no][0]);
			break;
		}
	}
	return 0;
}

//eğer alınan tas ile seri açılıyorsa return 1 değilse 0
//tası alıp plyrandın içine at sonra seri diz eğer puan sınırı geçiyorsa tası al
//geçmiyorsa o tası plyranddan sil ve sıfırı sona at

}


int yan_al_kontrol(int *dizi,int index,int *yan){
int i,j,temp,dizi2[index];

	//dizi küçükten büyüğe sıralama
	for (i=0;i<index;i++) {
    	for(j=0;j<index;j++){
        	if(*(dizi+i)<*(dizi+j)){
           		swap_p((dizi+i),(dizi+j));
        	}
		}
	}

	int cift_kayit[index],ckk=0;
	//çift sayıları sona atma
	for ( i = 0; i < index; i++){
		if (*(dizi+i)==*(dizi+i+1)){
			cift_kayit[ckk++]=*(dizi+i);
			for ( j = 1; j < index-i-1; j++){
				swap_p((dizi+i+j),(dizi+i+j+1));	
			}		
		}	
    }
	for (int  i = 0; i < index; i++)
	{
		if((i+1<index)&&(*(dizi+i)==*(dizi+i+1)-1)&&(*(dizi+i+1)==*yan-1)){
			return 1;
		}
		if ((i+1<index)&&(*yan==*(dizi+i)-1)&&(*(dizi+i)==*(dizi+i+1)-1))
		{
			return 1;
		}
	}

	for ( i = 0; i < index; i++)	dizi2[i]=*(dizi+i);

	for ( i = 0; i < index; i++){
		for ( j=i+1; j < index; j++){
			if (dizi2[i]!=dizi2[j])
			{
				if ((dizi2[i]%100==dizi2[j]%100)&&(dizi2[i+1]%100==(*yan)%100))
				{	
					return 1;
				}												
			}									
		}	
	}

	for ( i = 0; i < index; i++)
	{
		if (*(dizi+i)==*yan){
			return 1;
		}
	}
return 0;
}



int diger_oyuncu_tas_isle(int oyuncu_no){

	islek_taslar();

for (int i = 0; i < 22; i++)
{
	for (int j = 0; j < is; j++)
	{
		if(islek[j]!=0||plyrand[oyuncu_no][i]!=0){
			if (plyrand[oyuncu_no][i]==islek[j])
			{
				for (int k = 0; k < as; k++)
				{
					if(islek[j]==(acilan_seriler[k][0]-1)){
						swap_p(&acilan_seriler[k][3],&acilan_seriler[k][2]);
						swap_p(&acilan_seriler[k][2],&acilan_seriler[k][1]);
						swap_p(&acilan_seriler[k][1],&acilan_seriler[k][0]);
						acilan_seriler[k][0]=islek[j];
						islek[j]=0;
						plyrand[oyuncu_no][i]=0;
						oyuncu_durum[oyuncu_no]=3;
						diger_oyuncular_durum((oyuncu_no==1?1:((oyuncu_no==2?3:5))));
					}
				}
				for (int k = 0; k < as; k++)
				{
					if(islek[j]==(acilan_seriler[k][2]+1)){
						acilan_seriler[k][3]=islek[j];
						islek[j]=0;
						plyrand[oyuncu_no][i]=0;
						oyuncu_durum[oyuncu_no]=3;
						diger_oyuncular_durum((oyuncu_no==1?1:((oyuncu_no==2?3:5))));
					}
				}
				for (int k = 0; k < as; k++)
				{
					if((islek[j]!=acilan_seriler[k][2])&&(islek[j]!=acilan_seriler[k][1])&&(islek[j]!=acilan_seriler[k][0])){
						if(islek[j]%100==acilan_seriler[k][1]%100){
							acilan_seriler[k][3]=islek[j];
							islek[j]=0;
							plyrand[oyuncu_no][i]=0;
							oyuncu_durum[oyuncu_no]=3;
							diger_oyuncular_durum((oyuncu_no==1?1:((oyuncu_no==2?3:5))));
						}
					}
				}
			}
		}
	}
}

}


int doca=0;	//diğer oyuncular çift açtı mı?

int diger_oyuncular(){

	int at1[eleman_sayisi(&plyrand[1][0])],at2[eleman_sayisi(&plyrand[2][0])],at3[eleman_sayisi(&plyrand[3][0])],tt=0,i,j,k;
	int yan_tas_ctrl_dizi[4][22];

//2.oyuncu

	oyuncu_durum[1]=0;

	if(yan_al_control2(1,yan12)==1){
		yan12=0;
		tasi_sona_koy(&plyrand[1][0]);
	}
	else if ( ((tas_alinabilirlik[1]==1)||(cift_tas_atilabilir[1]==1))&&(yan_al_kontrol(&plyrand[1][0],eleman_sayisi(&plyrand[1][0]),&yan12)) )
	{
		plyrand[1][21]=yan12;
		yan12=0;
		tasi_sona_koy(&plyrand[1][0]);
	}
	else{
		plyrand[1][21]=orta[orta_index];	//yandan tas almiyacaksa şimdilik böyle
		orta_index++;
		tasi_sona_koy(&plyrand[1][0]);
	}
	seri_diz(&plyrand[1][0],eleman_sayisi(&plyrand[1][0]),1);
	cift_seri_diz(&plyrand[1][0],eleman_sayisi(&plyrand[1][0]),1);
	if((tas_alinabilirlik[1]==1)&&(puan[1]!=0)){
		seri_ac(1);
		oyuncu_durum[1]=1;
	}
	else if (puan[1]>=el_acma_siniri)
	{
		el_acma_siniri=puan[1]+1;
		seri_ac(1);
		oyuncu_durum[1]=1;
	}
	else if ((cift_tas_atilabilir[1]==1)&&(cift[1]!=0))
	{
		cift_ac(1);
		oyuncu_durum[1]=2;
	}
	else if ((doca==1)&&(tas_alinabilirlik[1]==1))
	{
		cift_ac(1);
		oyuncu_durum[1]=2;
	}
	else if (cift[1]>=cift_acma_siniri)
	{
		cift_ac(1);
		cift_acma_siniri=cift[1]+1;
		doca=1;
		oyuncu_durum[1]=2;
	}

	diger_oyuncular_durum(1);

	if ((tas_alinabilirlik[1]==1)||(cift_tas_atilabilir[1]==1))
	{
		diger_oyuncu_tas_isle(1);
	}
	
	for (int i = 0; i < eleman_sayisi(&plyrand[1][0]); i++)
	{
		for (int j = 0; j < eleman_sayisi(&plyrand[1][0]); j++)
		{
			if ((seri_geri_kalan[1][i]!=0)&&(cift_geri_kalan[1][j]!=0))
			{
				if (seri_geri_kalan[1][i]==cift_geri_kalan[1][j])
				{
					at1[tt++]=seri_geri_kalan[1][i];
				}
			}
		}
	}
	int ser=0,cif=0;
	for ( i = 0; i < 22; i++)
	{
		if(seri_geri_kalan[1][i]!=0)
		{
			ser++;
		}
	}
	for ( i = 0; i < 22; i++)
	{
		if(cift_geri_kalan[1][i]!=0)
		{
			cif++;
		}
	}

	if((tt==0)||(atilabilirlik_kontrol(&at1[0],tt)==0)){
		if (tip_belirleme(1))
		{
			if(atilabilirlik_kontrol(&seri_geri_kalan[1][0],ser)==0){
				int index=eleman_sayisi(&plyrand[1][0]),i,j,temp;
				
				//dizi küçükten büyüğe sıralama
				for ( i=0;i<index;i++) {
					for( j=0;j<index;j++) {
						if(seri_geri_kalan[1][i]%100<seri_geri_kalan[1][j]%100) {
							temp=seri_geri_kalan[1][i];
							seri_geri_kalan[1][i]=seri_geri_kalan[1][j];
							seri_geri_kalan[1][j]=temp;
						}
					}
				}
				yan23=seri_geri_kalan[1][0];
				for (int i = 0; i < eleman_sayisi(&plyrand[1][0]); i++)
				{
					if(yan23==plyrand[1][i]){
						plyrand[1][i]=0;
						break;
					}
				}
				tasi_sona_koy(&plyrand[1][0]);
			}
		}
		else{
			if(atilabilirlik_kontrol(&cift_geri_kalan[1][0],cif)!=0){
				yan23=atilabilirlik_kontrol(&cift_geri_kalan[1][0],cif);
				for (int i = 0; i < eleman_sayisi(&plyrand[1][0]); i++)
				{
					if(yan23==plyrand[1][i]){
						plyrand[1][i]=0;
						break;
					}
				}
				tasi_sona_koy(&plyrand[1][0]);
			}
		}
	}
	
	else
	{
		if(atilabilirlik_kontrol(&at1[0],tt)!=0){
			yan23=atilabilirlik_kontrol(&at1[0],tt);
			for (int i = 0; i < eleman_sayisi(&plyrand[1][0]); i++)
			{
				if(yan23==plyrand[1][i]){
					plyrand[1][i]=0;
					break;
				}
			}
			tasi_sona_koy(&plyrand[1][0]);
		}
	}
	tasi_sona_koy(&plyrand[0][0]);
	seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);

	diger_oyuncular_durum(2);
	el_kontrol(1);



//3.oyuncu


	oyuncu_durum[2]=0;
	if(yan_al_control2(2,yan23)==1){
		yan23=0;
		tasi_sona_koy(&plyrand[2][0]);
	}
	else if ( ((tas_alinabilirlik[2]==1)||(cift_tas_atilabilir[2]==1))&&(yan_al_kontrol(&plyrand[2][0],eleman_sayisi(&plyrand[2][0]),&yan23)) )
	{
		plyrand[2][21]=yan12;
		yan23=0;
		tasi_sona_koy(&plyrand[2][0]);
	}
	else{
		plyrand[2][21]=orta[orta_index];	//yandan tas almiyacaksa şimdilik böyle yandan taş alıcaksa onu sıfırla ki taşın alındığı belli olsun
		orta_index++;
		tasi_sona_koy(&plyrand[2][0]);
	}
	tt=0;
	seri_diz(&plyrand[2][0],eleman_sayisi(&plyrand[2][0]),2);
	cift_seri_diz(&plyrand[2][0],eleman_sayisi(&plyrand[2][0]),2);
	
	if((tas_alinabilirlik[2]==1)&&(puan[2]!=0)){
		seri_ac(2);
		oyuncu_durum[2]=1;
	}
	if (puan[2]>=el_acma_siniri)
	{
		el_acma_siniri=puan[2]+1;
		seri_ac(2);
		oyuncu_durum[2]=1;
	}
	else if ((cift_tas_atilabilir[2]==1)&&(cift[2]!=0))
	{
		cift_ac(2);
		oyuncu_durum[2]=2;
	}
	else if ((doca==1)&&(tas_alinabilirlik[2]==1))
	{
		cift_ac(2);
		oyuncu_durum[2]=2;
	}
	else if (cift[2]>=cift_acma_siniri)
	{
		cift_ac(2);
		cift_acma_siniri=cift[2]+1;
		doca=1;
		oyuncu_durum[2]=2;
	}

	diger_oyuncular_durum(3);

	if ((tas_alinabilirlik[2]==1)||(cift_tas_atilabilir[2]==1))
	{
		diger_oyuncu_tas_isle(2);
	}
	for (int i = 0; i < eleman_sayisi(&plyrand[2][0]); i++)
	{
		for (int j = 0; j < eleman_sayisi(&plyrand[2][0]); j++)
		{
			if ((seri_geri_kalan[2][i]!=0)&&(cift_geri_kalan[2][j]!=0))
			{
				if (seri_geri_kalan[2][i]==cift_geri_kalan[2][j])
				{
					at2[tt++]=seri_geri_kalan[2][i];
				}
			}
		}
	}

	ser=0;
	cif=0;
	for ( i = 0; i < 22; i++)
	{
		if(seri_geri_kalan[2][i]!=0)
		{
			ser++;
		}
	}
	for ( i = 0; i < 22; i++)
	{
		if(cift_geri_kalan[2][i]!=0)
		{
			cif++;
		}
	}
	
	if((tt==0)||(atilabilirlik_kontrol(&at3[0],tt)==0)){
		if (tip_belirleme(2))
		{
			if(atilabilirlik_kontrol(&seri_geri_kalan[2][0],ser)==0){
				int index=eleman_sayisi(&plyrand[2][0]),i,j,temp;
				
				//dizi küçükten büyüğe sıralama
				for ( i=0;i<index;i++) {
					for( j=0;j<index;j++) {
						if(seri_geri_kalan[2][i]%100<seri_geri_kalan[2][j]%100) {
							temp=seri_geri_kalan[2][i];
							seri_geri_kalan[2][i]=seri_geri_kalan[2][j];
							seri_geri_kalan[2][j]=temp;
						}
					}
				}
				yan34=seri_geri_kalan[2][0];
				for (int i = 0; i < eleman_sayisi(&plyrand[2][0]); i++)
				{
					if(yan34==plyrand[2][i]){
						plyrand[2][i]=0;
						break;
					}
				}
				tasi_sona_koy(&plyrand[2][0]);
			}
		}
		else{
			if(atilabilirlik_kontrol(&cift_geri_kalan[2][0],cif)!=0){
				yan34=atilabilirlik_kontrol(&cift_geri_kalan[2][0],cif);
				for (int i = 0; i < eleman_sayisi(&plyrand[2][0]); i++)
				{
					if(yan34==plyrand[2][i]){
						plyrand[2][i]=0;
						break;
					}
				}
				tasi_sona_koy(&plyrand[2][0]);
			}
		}
	}
	
	else
	{
		if(atilabilirlik_kontrol(&at2[0],tt)!=0){
			yan34=atilabilirlik_kontrol(&at2[0],tt);
			for (int i = 0; i < eleman_sayisi(&plyrand[2][0]); i++)
			{
				if(yan34==plyrand[2][i]){
					plyrand[2][i]=0;
					break;
				}
			}
			tasi_sona_koy(&plyrand[2][0]);
		}
	}
	tasi_sona_koy(&plyrand[0][0]);
	seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);

diger_oyuncular_durum(4);
el_kontrol(2);

//4.oyuncu

	oyuncu_durum[3]=0;

	tasi_sona_koy(&plyrand[3][0]);

	if(yan_al_control2(3,yan34)==1){
		yan34=0;
		tasi_sona_koy(&plyrand[3][0]);
	}
	else if ( ((tas_alinabilirlik[3]==1)||(cift_tas_atilabilir[3]==1))&&(yan_al_kontrol(&plyrand[3][0],eleman_sayisi(&plyrand[3][0]),&yan34)) )
	{
		plyrand[3][21]=yan12;
		yan34=0;
		tasi_sona_koy(&plyrand[3][0]);
	}
	else{
		plyrand[3][21]=orta[orta_index];	//yandan tas almiyacaksa şimdilik böyle yandan taş alıcaksa onu sıfırla ki taşın alındığı belli olsun
		orta_index++;
		tasi_sona_koy(&plyrand[3][0]);
	}
		
	tasi_sona_koy(&plyrand[3][0]);

	tt=0;
	seri_diz(&plyrand[3][0],eleman_sayisi(&plyrand[3][0]),3);
	cift_seri_diz(&plyrand[3][0],eleman_sayisi(&plyrand[3][0]),3);

	if((tas_alinabilirlik[3]==1)&&(puan[3]!=0)){
		seri_ac(3);
		oyuncu_durum[3]=1;
	}
	if (puan[3]>=el_acma_siniri)
	{
		el_acma_siniri=puan[3]+1;
		seri_ac(3);
		oyuncu_durum[3]=1;
	}
	else if ((cift_tas_atilabilir[3]==1)&&(cift[3]!=0))
	{
		cift_ac(3);
		oyuncu_durum[3]=2;
	}
	else if ((doca==1)&&(tas_alinabilirlik[3]==1))
	{
		cift_ac(3);
		oyuncu_durum[3]=2;
	}
	else if (cift[3]>=cift_acma_siniri)
	{
		cift_ac(3);
		cift_acma_siniri=cift[3]+1;
		doca=1;
		oyuncu_durum[3]=2;
	}

	diger_oyuncular_durum(5);

	if ((tas_alinabilirlik[3]==1)||(cift_tas_atilabilir[3]==1))
	{
		diger_oyuncu_tas_isle(3);
	}

	for (int i = 0; i < eleman_sayisi(&plyrand[3][0]); i++)
	{
		for (int j = 0; j < eleman_sayisi(&plyrand[3][0]); j++)
		{
			if ((seri_geri_kalan[3][i]!=0)&&(cift_geri_kalan[3][j]!=0))
			{
				if (seri_geri_kalan[3][i]==cift_geri_kalan[3][j])
				{
					at3[tt++]=seri_geri_kalan[3][i];
				}
			}
		}
	}

	ser=0;
	cif=0;
	for ( i = 0; i < 22; i++)
	{
		if(seri_geri_kalan[3][i]!=0)
		{
			ser++;
		}
	}
	for ( i = 0; i < 22; i++)
	{
		if(cift_geri_kalan[3][i]!=0)
		{
			cif++;
		}
	}
	yan41_temp=yan41;

	if((tt==0)||(atilabilirlik_kontrol(&at3[0],tt)==0)){		//bozuldu
		if (tip_belirleme(3))
		{
			if(atilabilirlik_kontrol(&seri_geri_kalan[3][0],ser)==0){
				int index=eleman_sayisi(&plyrand[3][0]),i,j,temp;
				
				//dizi küçükten büyüğe sıralama
				for ( i=0;i<index;i++) {
					for( j=0;j<index;j++) {
						if(seri_geri_kalan[3][i]%100<seri_geri_kalan[3][j]%100) {
							temp=seri_geri_kalan[3][i];
							seri_geri_kalan[3][i]=seri_geri_kalan[3][j];
							seri_geri_kalan[3][j]=temp;
						}
					}
				}
				yan41=seri_geri_kalan[3][0];
				for (int i = 0; i < eleman_sayisi(&plyrand[3][0]); i++)
				{
					if(yan41==plyrand[3][i]){
						plyrand[3][i]=0;
						break;
					}
				}
				tasi_sona_koy(&plyrand[3][0]);
			}
		}
		else{
			if(atilabilirlik_kontrol(&cift_geri_kalan[3][0],cif)!=0){
				yan41=atilabilirlik_kontrol(&cift_geri_kalan[3][0],cif);
				for (int i = 0; i < eleman_sayisi(&plyrand[3][0]); i++)
				{
					if(yan41==plyrand[2][i]){
						plyrand[3][i]=0;
						break;
					}
				}
				tasi_sona_koy(&plyrand[3][0]);
			}
		}
	}
	else
	{
		if(atilabilirlik_kontrol(&at3[0],tt)!=0){
			yan41=atilabilirlik_kontrol(&at3[0],tt);
			for (int i = 0; i < eleman_sayisi(&plyrand[3][0]); i++)
			{
				if(yan41==plyrand[3][i]){
					plyrand[3][i]=0;
					break;
				}
			}
			tasi_sona_koy(&plyrand[3][0]);
		}
	}
	diger_oyuncular_durum(6);
	el_kontrol(3);
	konsol_ekrani1="  [w] ->  ortadan tas cek                   tas isle  <- [q]  ";
	konsol_ekrani2="  [a] ->  yandan tas al                      seri ac  <- [e]  ";
	konsol_ekrani3="  [s] ->  seri diz (beta)                    cift ac  <- [r]  ";
	konsol_ekrani4="  [d] ->  cift diz                            tas at  <- [f]  ";	

	konsol_ekrani5="[w] -> take a tile from the middle           add a tile <- [q]";
	konsol_ekrani6="[a] -> take a tile from the side            open series <- [e]";
	konsol_ekrani7="[s] -> go for series                         open pairs <- [r]";
	konsol_ekrani8="[d] -> go for pairs             put a tile to the right <- [f]";
	oyna(0);
	return 0;

}




int pause(){
    system("cls");
    ust_cerceve2;
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
	if(lang_i==0){
    printf("%c      [ oyun durduruldu ]                                                                              %c\n",186,186); 
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c      [a]  ->  devam et                                                                                %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c      [x]  ->  ana menu                                                                                %c\n",186,186);
	}
	else{
    printf("%c      [ GAME PAUSED ]                                                                                  %c\n",186,186); 
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c      [a]  ->  continue                                                                                %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c      [x]  ->  main menu                                                                               %c\n",186,186);		
	}
	bos_satir_cerceve(17);
    alt_cerceve1;
    imza;
	while(1){
		cd = getch();
		switch (cd)
		{
		case x :
			sifirlama_sayaci++;
			anamenu();                 
			break;
		case a :
			oyna(0);
			return 0;
		default:
		break;
		}
	}
}



void tasi_sona_koy(int *dizi){
	int sinir;
	for (int i = 0; i < 22; i++)
	{	
		if(*(dizi+21-i)==0){
			continue;
		}
		else {
			sinir=22-i;
			break;
			}
	}
	for (int i = 0; i < sinir; i++)
    {
		for (int i = 0; i < 22; i++)
		{	
			if(*(dizi+21-i)==0){
				continue;
			}
			else {
				sinir=22-i;
				break;
				}
		}
        if (*(dizi+i)==0)
        {
            for (int j = i; j < 21; j++)
            {
                swap_p((dizi+j),(dizi+j+1));
            }
			if (*(dizi+i)==0)i--;
        }   
    }
}

int sc=0;	//aynı anda birden fazla tas çekmemek için
int tc=0;   //tas alınıp alınmadığını kontrol eder
int orta_tas_cek(){
	tasi_sona_koy(&plyrand[0][0]);
	if (sc) 
	{
		konsol_ekrani1="                             hata:                            ";
        konsol_ekrani2="          -- ayni anda birden fazla tas cekemezsin --         ";
		konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
		konsol_ekrani4="                                                              ";

		konsol_ekrani5="                             eror:                            ";
		konsol_ekrani6="   -- you can't take more than one tile at the same time --   ";
		konsol_ekrani7="                       [ press any key ]                      ";
		konsol_ekrani8="                                                              ";
        oyna(0);
		return 0;
	}
	else if(eleman_sayisi(&plyrand[0][0])==22){
		konsol_ekrani1="                             hata:                            ";
        konsol_ekrani2="                -- 22 tastan fazla alamazsin --               ";
		konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
		konsol_ekrani4="                                                              ";

		konsol_ekrani5="                             eror:                            ";
		konsol_ekrani6="            -- you can't take more than 22 tile --            ";
		konsol_ekrani7="                       [ press any key ]                      ";
		konsol_ekrani8="                                                              ";
        oyna(0);
		return 0;
	}
    else if (plyrand[0][22-sondaki_sifir]==0)
    {
        plyrand[0][22-sondaki_sifir]=orta[orta_index];
        orta_index++;
		sondaki_sifir--;
		sc=1;
		tc=1;
        oyna(0);
		return 0;   
    }
	konsol_ekrani1="                       !! kritik hata !!                      ";
	konsol_ekrani2="                   ortadan tas cekme hatasi                   ";
	konsol_ekrani3="                      [x] -> ana menu                         ";
	konsol_ekrani4="                      [h] -> crash raport                     ";

	konsol_ekrani5="                     !! critical eror !!                      ";
	konsol_ekrani6="                                                              ";
	konsol_ekrani7="                      [x] -> main menu                        ";
	konsol_ekrani8="                      [h] -> crash raport                     ";
	oyna(2);
	int xx;
	while(1){
		xx=getch();
		switch (xx)
		{
		case h:
			crash_raport();
			break;
		case x:
			anamenu();
			break;
		default:
			break;
		}
	}
}


int yandan_tas_cek(){
	tasi_sona_koy(&plyrand[0][0]);

	if(yan_al_control2(0,yan41)==1){
		yan41=0;
		sc=1;
		tc=1;
	}
	else if((tas_alinabilirlik[0]==0)&&(cift_tas_atilabilir[0]==0)){
		konsol_ekrani1="                             hata:                            ";
        konsol_ekrani2="     -- yandan tas cekmeniz icin eli acmaniz gerekiyor --     ";
		konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
		konsol_ekrani4="                                                              ";

		konsol_ekrani5="                             eror:                            ";
		konsol_ekrani6=" to take a tile from the left side you have to open your game ";
		konsol_ekrani7="                       [ press any key ]                      ";
		konsol_ekrani8="                                                              ";
        oyna(0);
		return 0;
	}
	else if (sc==1) 
	{
		konsol_ekrani1="                             hata:                            ";
        konsol_ekrani2="          -- ayni anda birden fazla tas cekemezsin --         ";
		konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
		konsol_ekrani4="                                                              ";

		konsol_ekrani5="                             eror:                            ";
		konsol_ekrani6="   -- you can't take more than one tile at the same time --   ";
		konsol_ekrani7="                       [ press any key ]                      ";
		konsol_ekrani8="                                                              ";
        oyna(0);
		return 0;
	}
	else if(eleman_sayisi(&plyrand[0][0])==22){
		konsol_ekrani1="                             hata:                            ";
        konsol_ekrani2="                -- 22 tastan fazla alamazsin --               ";
		konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
		konsol_ekrani4="                                                              ";

		konsol_ekrani5="                             eror:                            ";
		konsol_ekrani6="            -- you can't take more than 22 tile --            ";
		konsol_ekrani7="                       [ press any key ]                      ";
		konsol_ekrani8="                                                              ";
        oyna(0);
		return 0;
	}
    else if (plyrand[0][22-sondaki_sifir]==0)
    {
        plyrand[0][22-sondaki_sifir]=yan41;
		ctrl_used=yan41;
		yan41=yan41_temp;
		sondaki_sifir--;
		sc=1;
		tc=1;
        oyna(0);
		return 0;   
    }
	return 0;
}





int crash_raport(){
	system("cls");
	printf("CRASH RAPORT:\n\nbir onceki oyuncu no:%d \n\ntaslar:\nP1    P2    P3    P4\n",oyuncu_nu+1);
	for(int i=0 ; i<22 ; i++){
		printf("%d   %d   %d   %d\n",plyrand[0][i],plyrand[1][i],plyrand[2][i],plyrand[3][i]);
	}
	printf("\nsatir sonu index: %d\n",satir_sonu_index);
	printf("aabs: %d\n",aabs);
	printf("atik: %d\n",atik);
	printf("temp atik: %d\n",temp_atik);
	printf("sifirlama sayaci: %d\n",sifirlama_sayaci);
	printf("\norta:  ");
	for(int i=0 ; i<19 ; i++){
		printf("%d  ",orta[i]);
	}
	printf("\n\norta index: %d\n\n",orta_index); 

	printf("sc (ayni anda birden fazla tas cekmemek icin) : %d\n",sc);
	printf("tc (tas alinip alinmadigini kontrol eder) : %d\n",tc);
	printf("doca (diger oyuncular cift acti mi?): %d\n",doca);
	printf("\nseri acanlar (1-0) :  \n");
	for(int i=0 ; i<4 ; i++){
		printf("%d. oyuncu: %d\n",i+1,tas_alinabilirlik[i]);
	}
	printf("\ncift acanlar (1-0) :  \n");
	for(int i=0 ; i<4 ; i++){
		printf("%d. oyuncu: %d\n",i+1,cift_tas_atilabilir[i]);
	}
	printf("\nas: %d\n",as);
	printf("acilan_seriler:\n");
	for(int i=0 ; i<as ; i++){
		printf("%d  %d  %d  %d  \n",acilan_seriler[i][0],acilan_seriler[i][1],acilan_seriler[i][2],acilan_seriler[i][3]);
	}
	printf("islek taslar:\n");
	for(int i=0 ; i< is ; i++){
		printf("%d  ",islek[i]);
	}
	printf("\n\npu_ci_sinir: %d\n",pu_ci_sinir);
	printf("puan_cift: %d\n",puan_cift);
	printf("el_acma_siniri: %d\n",el_acma_siniri);
	printf("cift_acma_siniri: %d\n",cift_acma_siniri);
	printf("bosluk_devam: %d\n",bosluk_devam);
	printf("\nbosluk_index:  ");
	for(int i=0 ; i<22 ; i++){
		printf("%d ",bosluk_index[i]);
	}
	printf("\ncift_seri_index: %d\n",cift_seri_index);
	printf("\noyuncularin puanlari: \n");
	for(int i=0 ; i<4 ; i++){
		printf("%d. oyuncu: %d\n",i+1,puan[i]);
	}
	printf("\noyuncularin ciftleri: \n");
	for(int i=0 ; i<4 ; i++){
		printf("%d. oyuncu: %d\n",i+1,cift[i]);
	}
	printf("\ncift_geri_kalan: \nP1    P2    P3    P4\n");
	for(int i=0 ; i<22 ; i++){
		if((cift_geri_kalan[0][i]==0)&&(cift_geri_kalan[1][i]==0)&&(cift_geri_kalan[2][i]==0)&&(cift_geri_kalan[3][i]==0)) break;
		printf("%d   %d   %d   %d\n",cift_geri_kalan[0][i],cift_geri_kalan[1][i],cift_geri_kalan[2][i],cift_geri_kalan[3][i]);
	}
	printf("\nseri_geri_kalan: \np1    P2    P3    P4\n");
	for(int i=0 ; i<22 ; i++){
		if((seri_geri_kalan[0][i]==0)&&(seri_geri_kalan[1][i]==0)&&(seri_geri_kalan[2][i]==0)&&(seri_geri_kalan[3][i]==0)) break;
		printf("%d   %d   %d   %d\n",seri_geri_kalan[0][i],seri_geri_kalan[1][i],seri_geri_kalan[2][i],seri_geri_kalan[3][i]);
	}
	printf("\nsondaki_sifir: %d\n\n",sondaki_sifir);
	printf("yan12: %d\n",yan12);
	printf("yan23: %d\n",yan23);	
	printf("yan34: %d\n",yan34);
	printf("yan41: %d\n",yan41);

	int uc=0;//crash kayıt indexidir diğeri ile karıştırmayın

	printf("\n\n\nsifirlanmadan once 'seri_diz' degerleri:\n\n(seri_diz 'i son kullanan oyuncuya aittir)\n\n");
	printf("\ntip_1_uc [%d]:",crash_kayit[crash_kayit_point[0]]);
	for(int i=0 ; i<crash_kayit[crash_kayit_point[0]] ; i++){
		printf("  %d %d %d    ",crash_kayit[uc++],crash_kayit[uc++],crash_kayit[uc++]);
	}
	printf("\n\ntip_2_uc [%d]:",crash_kayit[crash_kayit_point[0]+1]);
	for(int i=0 ; i<crash_kayit[crash_kayit_point[0]+1] ; i++){
		printf("  %d %d %d    ",crash_kayit[uc++],crash_kayit[uc++],crash_kayit[uc++]);
	}
	printf("\n\ntip_1_dort [%d]:",crash_kayit[crash_kayit_point[0]+2]);
	for(int i=0 ; i<crash_kayit[crash_kayit_point[0]+2] ; i++){
		printf("  %d %d %d %d    ",crash_kayit[uc++],crash_kayit[uc++],crash_kayit[uc++],crash_kayit[uc++]);
	}
	printf("\n\ntip_2_dort [%d]:",crash_kayit[crash_kayit_point[0]+3]);
	for(int i=0 ; i<crash_kayit[crash_kayit_point[0]+3] ; i++){
		printf("  %d %d %d %d    ",crash_kayit[uc++],crash_kayit[uc++],crash_kayit[uc++],crash_kayit[uc++]);
	}
	uc+=4;
	printf("\n\nkarsilastirma kayit:\n");
	for(int i=0; i<crash_kayit_point[1];i++){
		printf("%d\n",crash_kayit[uc++]);
	}
	printf("\ndort_temp:\n");
	for(int i=0; i<crash_kayit_point[2];i++){ 
		printf("%d\n",crash_kayit[uc++]);
	}
	printf("\ncift kayit:\n");
	for(int i=0; i<crash_kayit_point[3];i++){ 
		printf("%d\n",crash_kayit[uc++]);
	}
	printf("\nek kullanilanlar:\n");
	for(int i=0; i<crash_kayit_point[4];i++){ 
		printf("%d %d %d    ",crash_kayit[uc++],crash_kayit[uc++],crash_kayit[uc++]);
	}

	printf("\n\nkull: %d\n",crash_kayit_point[5]);

	printf("\nkullanilanlar_temp:\n");
	for(int i=0; i<crash_kayit_point[5];i++){ 
		printf("%d  ",crash_kayit[uc++]);
	}
	printf("\n\ngeri kalanlar:\n");
	for(int i=0; i<crash_kayit_point[6];i++){ 
		printf("%d  ",crash_kayit[uc++]);
	}
	if(lang_i==0){
		printf("\n\n[ herhangi bir tusa bas ]\n\n");
	}
	else{
		printf("\n\n[ press any key ]\n\n");
	}
	
	getch();
	oyna(0);
	return 0;
    
}


	int *temp_konum1;	//tas islemek için
	int konum1[9][2];	//tas islemek için

	int oyun_baslangici=1;
	int x1=0,x2=0,x3=0;
	int z1=0,z3=0;
void acilan_ust_satir(){
	for (int i = x1; i < 100 ; i++)
	{
	if (acilan_seriler[i][0]==0)x1++;
	else break;
	}
	int sa=1;
	if (x1<(as-1)) sa=2;
	for (int i = 0; i<4 ; i++)
	{
		if (acilan_seriler[x1][i]==0) printf("    ");
		else if (konum1[z1][0]==1)
		{
			temp_konum1=&acilan_seriler[x1][3];
			printf("%c%c%c%c",201,205,205,(SetConsoleTextAttribute(ha, 15),187));
		}
		else printf("%c%c%c%c",201,205,205,187,( renk_degis(acilan_seriler[x1][i])));
		SetConsoleTextAttribute(ha, 7);
	}
	printf("  ");
	x1++;
	if(as-1==x1) sa=2;
	if(sa==2){
		for (int i = 0; i<4 ; i++)
		{
			if (acilan_seriler[x1][i]==0) printf("    ");
			else if (konum1[z1][1]==1)
            {
				temp_konum1=&acilan_seriler[x1][3];
                printf("%c%c%c%c",201,205,205,(SetConsoleTextAttribute(ha, 15),187));
            }
			else printf("%c%c%c%c",201,205,205,187,( renk_degis(acilan_seriler[x1][i])));
			SetConsoleTextAttribute(ha, 7);
		}
	printf("%c\n",186);
	x1++;
	z1++;
	}
	else printf("                %c\n",186);
}
void acilan_orta_satir(){
	for (int i = x2; i < 100 ; i++)
	{
	if (acilan_seriler[i][0]==0)x2++;
	else break;
	}
	int sa=1;
	if (x2<(as-1)) sa=2;
	for (int i = 0; i<4 ; i++)
	{
		if (acilan_seriler[x2][i]==0) printf("    ");
		else printf("%c%d%c%c",186,acilan_seriler[x2][i]%100,( renk_degis(acilan_seriler[x2][i]),(sayi_bosluk(acilan_seriler[x2][i]))),186);
		SetConsoleTextAttribute(ha, 7);
	}
	printf("  ");
	x2++;
	if(as-1==x2) sa=2;
	if(sa==2){
		for (int i = 0; i<4 ; i++)
		{
			if (acilan_seriler[x2][i]==0) printf("    ");
			else printf("%c%d%c%c",186,acilan_seriler[x2][i]%100,( renk_degis(acilan_seriler[x2][i]),(sayi_bosluk(acilan_seriler[x2][i]))),186);
			SetConsoleTextAttribute(ha, 7);
		}
	printf("%c\n",186);
	x2++;
	}
	else printf("                %c\n",186);
}
void acilan_alt_satir(){
	for (int i = x3; i < 100 ; i++)
	{
	if (acilan_seriler[i][0]==0)x3++;
	else break;
	}
	int sa=1;
	if (x3<(as-1)) sa=2;
	for (int i = 0; i<4 ; i++)
	{
		if (acilan_seriler[x3][i]==0) printf("    ");
		else if (konum1[z3][0]==1)
		{
			temp_konum1=&acilan_seriler[x3][3];
			printf("%c%c%c%c",200,205,205,(SetConsoleTextAttribute(ha, 15),188));
		}
		else printf("%c%c%c%c",200,205,205,188,( renk_degis(acilan_seriler[x3][i])));
		SetConsoleTextAttribute(ha, 7);
	}
	printf("  ");
	x3++;
	if(as-1==x3) sa=2;
	if(sa==2){
		for (int i = 0; i<4 ; i++)
		{
			if (acilan_seriler[x3][i]==0) printf("    ");
			else if (konum1[z3][1]==1)
			{
				temp_konum1=&acilan_seriler[x3][3];
				printf("%c%c%c%c",200,205,205,(SetConsoleTextAttribute(ha, 15),188));
			}
			else printf("%c%c%c%c",200,205,205,188,( renk_degis(acilan_seriler[x3][i])));
			SetConsoleTextAttribute(ha, 7);
		}
	printf("%c\n",186);
	x3++;
	z3++;
	}
	else printf("                %c\n",186);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tas_isle();



int tas_isle3(int *isle,int *alinan_tas){

if (*isle==0)
{
	if((*(isle-3)==*(isle-2)-1)&&(*(isle-2)==*(isle-1)-1)){
		if(*alinan_tas==*(isle-3)-1){
			swap_p((isle-1),isle);
			swap_p((isle-2),(isle-1));
			swap_p((isle-3),(isle-2));
			*(isle-3)=*alinan_tas;
			*alinan_tas=0;
			sondaki_sifir++;
		}
		else if(*(isle-1)==*alinan_tas-1){
			*(isle)=*alinan_tas;
			*alinan_tas=0;
			sondaki_sifir++;
		}
		else{
			konsol_ekrani1="                             hata:                            ";
			konsol_ekrani2="    -- hatali isleme yaptigin icin 101 ceza puani aldin --    ";
			konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                             eror:                            ";
			konsol_ekrani6=" You received 101 penalty points for adding an incorrect tile ";
			konsol_ekrani7="                       [ press any key ]                      ";
			konsol_ekrani8="                                                              ";
			skor[0]+=101;
			oyna(2);
			usleep(1000000);
			oyna(0);
		}
	}

	if((*(isle-3)%100==*(isle-2)%100)&&(*(isle-2)%100==*(isle-1)%100)){
		if((*alinan_tas!=*(isle-3))&&(*alinan_tas!=*(isle-2))&&(*alinan_tas!=*(isle-1))){
			if(*alinan_tas%100==*(isle-1)%100){
				*(isle)=*alinan_tas;
				*alinan_tas=0;
				sondaki_sifir++;
			}
			else{
			konsol_ekrani1="                             hata:                            ";
			konsol_ekrani2="    -- hatali isleme yaptigin icin 101 ceza puani aldin --    ";
			konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
			konsol_ekrani4="                                                              ";

			konsol_ekrani5="                             eror:                            ";
			konsol_ekrani6=" You received 101 penalty points for adding an incorrect tile ";
			konsol_ekrani7="                       [ press any key ]                      ";
			konsol_ekrani8="                                                              ";
			skor[0]+=101;
			oyna(2);
			usleep(1000000);
			oyna(0);
			}
		}
		else{
			konsol_ekrani1="                             hata:                            ";
			konsol_ekrani2="    -- hatali isleme yaptigin icin 101 ceza puani aldin --    ";
			konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
			konsol_ekrani4="                                                              ";
			
			konsol_ekrani5="                             eror:                            ";
			konsol_ekrani6=" You received 101 penalty points for adding an incorrect tile ";
			konsol_ekrani7="                       [ press any key ]                      ";
			konsol_ekrani8="                                                              ";
			skor[0]+=101;
			oyna(2);
			usleep(1000000);
			oyna(0);
		}
	}
	tasi_sona_koy(&plyrand[0][0]);
	oyna(0);
}
else{
	konsol_ekrani1="                             hata:                            ";
	konsol_ekrani2="     -- zaten 4 tastan olusan seriye ekleme yapamazsin --     ";
	konsol_ekrani3="                    [herhangi bir tusa bas]                   ";
	konsol_ekrani4="                                                              ";
	
	konsol_ekrani5="                             eror:                            ";
	konsol_ekrani6="   -- You can't add to a series that have already 4 tiles --  ";
	konsol_ekrani7="                       [ press any key ]                      ";
	konsol_ekrani8="                                                              ";
	oyna(0);
}


}


int tas_isle2(int *islenen){

	int *tam_konum;
    int k1=0,k2=0,i,gs=0;
    for ( i = 0; i < 9; i++)
	{   
		konum1[i][0]=0;
		konum1[i][1]=0;
	}
    konum1[0][0]=1;

	char c1=95;
    int kii=1,nii=0,tur_say=0;
    char *yontus3="   [s]            ";
    char *yon_tus1="[w]",*yon_tus2="[a]   [d]",*onay_tus="onayla: [e]    ";
	
	if(lang_i==1) onay_tus="confirm: [e]   ";
	while(1)
    {
        if (tur_say==1)
        {
        yontus3="eminmisin? [e] [r]  ";
		if(lang_i==1) yontus3="are you sure? [e] [r]";
        yon_tus1="   ";
        yon_tus2="         ";
        onay_tus="               ";
        tur_say=2;    
        }
        else if (tur_say==2)
        {
            kii=1;
            while (kii)
            {
                cd=getch();
				cd = tolower(cd);
                switch (cd)
                {
                    case e:
						tam_konum=temp_konum1;
						tas_isle3(tam_konum,islenen);
						for ( i = 0; i < 9; i++)
						{   
							konum1[i][0]=0;
							konum1[i][1]=0;
						}
						oyna(0);
						return 0;                     
                        break;
                    case r:
						tas_isle();
						return 0;
						break;
                    case x :
					for ( i = 0; i < 9; i++)
						{   
							konum1[i][0]=0;
							konum1[i][1]=0;
						}
                        oyna(0);                        
                        return 0;                 
                        break;
                    default:
                        break;
                }
                
            }
        }
    
	system("cls");
		
    ust_cerceve1;
	printf("%c                                                                    %c",186,186); 
		if(as==0) printf("                                  %c\n",186);
		else acilan_ust_satir();
	printf("%c                                                                    %c",186,186);
		if(as==0) printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c                                                                    %c",186,186);
		if(as==0) printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c                                                                    %c",186,186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_ust_satir();
	printf("%c                                ",186);
	printf("%c%c%c%c",201,205,205,187,( renk_degis(*islenen)));
	SetConsoleTextAttribute(ha, 7);
	printf("                                %c",186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_orta_satir();
	if(lang_i==0){
		printf("%c                  secilen tas:  ",186);
	}
	else{
		printf("%c                selected tile:  ",186);
	}
	printf("%c%d%c%c",186,*islenen%100,( renk_degis(*islenen),(sayi_bosluk(*islenen))),186);
	SetConsoleTextAttribute(ha, 7);
	printf("                                %c",186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_alt_satir();
	printf("%c                                ",186);
	printf("%c%c%c%c",200,205,205,188,( renk_degis(*islenen)));
	SetConsoleTextAttribute(ha, 7);
	printf("                                %c",186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_ust_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_ust_satir();
	printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_orta_satir();


    printf("%c ",186);
	istaka_ust_cerceve;SetConsoleTextAttribute(ha, 7);
	printf(" %c",186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_alt_satir();
    
	
	//en ust hat
	printf("%c %c     ",186,186);        
	for (int i = 0; i<11 ; i++)
	{	
		if (plyrand[0][i]==0) printf("     ");
		else    printf("%c%c%c%c ",201,205,205,187,( renk_degis(plyrand[0][i])));
	}
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_ust_satir();
    

    //ust orta hat
	printf("%c %c     ",186,186);        
	for (int i = 0; i < 11; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else{
		printf("%c%d%c%c ",186,plyrand[0][i]%100,( renk_degis(plyrand[0][i]),(sayi_bosluk(plyrand[0][i]))),186);
		}
	}
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_orta_satir();


	//alt hat
	printf("%c %c     ",186,186);        
	for (int i = 0 ; i<11 ; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else    printf("%c%c%c%c ",200,205,205,188,( renk_degis(plyrand[0][i])));
	}
	SetConsoleTextAttribute(ha, 7);
    printf("    %c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_alt_satir();


    //alt satır
	//ust hat
	printf("%c %c     ",186,186);        
	for (int i = 11; i < 22; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else    printf("%c%c%c%c ",201,205,205,187,( renk_degis(plyrand[0][i])));
	}
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_ust_satir();


    //alt orta hat
	printf("%c %c     ",186,186);        
	for (int i = 11; i < 22; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else{
		printf("%c%d%c%c ",186,plyrand[0][i]%100,( renk_degis(plyrand[0][i]),(sayi_bosluk(plyrand[0][i]))),186);
		}
	}   
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_orta_satir();

    
    //en alt hat
	printf("%c %c     ",186,186);        
	for (int i = 11 ; i<22 ; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else printf("%c%c%c%c ",200,205,205,188,( renk_degis(plyrand[0][i])));
	}
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_alt_satir();

	printf("%c ",186);
	istaka_alt_cerceve;SetConsoleTextAttribute(ha, 7);
	printf(" %c",186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_ust_satir();
        
    //kontrol paneli
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_orta_satir();
	printf("%c             %s                                                    %c",186,yon_tus1,186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c          %s                       %s           %c",186,yon_tus2,onay_tus,186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_ust_satir();
    printf("%c          %s                                      %c",186,yontus3,186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_alt_satir();

    SetConsoleTextAttribute(ha,  7);
    alt_cerceve2;
    imza;
	
    x1=0;
	x2=0;
	x3=0;
	z1=0;
	z3=0;
	
	   if (tur_say==0)  
        {
			
            nii=1;
            while (nii)
            {
				int aaaa=0;
                c1=getche();
				c1 = tolower(c1);
                switch(c1)
                {
                case e:
                tur_say=1; 
                nii=0;   
                break;
                case a:
                    if (k1==0) nii=1;
                    else{
                    for ( i = 0; i < 9; i++)
					{   
						konum1[i][0]=0;
						konum1[i][1]=0;
					}
                    k1=0;
                    konum1[k2][k1]=1;
                    nii=0;
					gs--;
                    }
                    break;
                case d:
					gs++;
					if(acilan_seriler[gs][0]==0) {gs--; nii=1;}
                    else if(k1==1) {gs--; nii=1;}
                    else{
                    for ( i = 0; i < 9; i++)
					{   
						konum1[i][0]=0;
						konum1[i][1]=0;
					}
					k1=1;
                    konum1[k2][k1]=1;
                    nii=0;
                    }
                    break;
                case w:
                    if(k2==0)   nii=1;
                    else{
                    for ( i = 0; i < 9; i++)
					{   
						konum1[i][0]=0;
						konum1[i][1]=0;
					}
                    k2--;
                    konum1[k2][k1]=1;
                    nii=0;
					gs-=2;
                    }
                    break;
                case s:
					
                    if(k2==8)   nii=1;
                    else{
						for ( i = 0; i < 9; i++)
						{   
							konum1[i][0]=0;
							konum1[i][1]=0;
						}
						if(k1){
							gs+=2;
							if(acilan_seriler[gs][0]==0) {gs-=2; nii=1;}
							else{
								k2++;
								konum1[k2][1]=1;
								nii=0;
								break;
							}
						}
						else{
							gs+=2;
							if(acilan_seriler[gs][0]==0){
								gs-=2; nii=1;
							}
							else{
								k2++;
								konum1[k2][0]=1;
								nii=0;
								break;
							}
						}
                    }
                    break;
                case x :
					for ( i = 0; i < 9; i++)
					{   
						konum1[i][0]=0;
						konum1[i][1]=0;
					}
                    oyna(0);                        
                    return 0;
                    nii=0;                 
                    break;
                default:
                    break;
                }
            }
        }
    }
}


int tas_isle(){
	tasi_sona_koy(&plyrand[0][0]);
    int *temp_konum;
	int konum[2][11]; 
    int k1=0,k2=5,i;
	for ( i = 0; i < 11; i++)
	{   
		if(plyrand[0][i]==0){
			k2=i-1;
			break;
		}
	}
    for ( i = 0; i < 11; i++)
        {   
            konum[0][i]=0;
            konum[1][i]=0;
        }
    konum[0][k2]=1;

	char c1=95;
    int kii=1,nii=0,tur_say=0;
    char *yontus3="   [s]";
    char *yon_tus1="[w]",*yon_tus2="[a]   [d]",*onay_tus="sec: [e]";
    while(1)
    {
		
	system("cls");
		
    ust_cerceve1;
	printf("%c                                                                    %c",186,186); 
		if(as==0) printf("                                  %c\n",186);
		else acilan_ust_satir();
	printf("%c                                                                    %c",186,186);
		if(as==0) printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c                                                                    %c",186,186);
		if(as==0) printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c                                                                    %c",186,186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_ust_satir();
    printf("%c                                                                    %c",186,186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c                                                                    %c",186,186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_ust_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_ust_satir();
	printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_orta_satir();


    printf("%c ",186);
	istaka_ust_cerceve;SetConsoleTextAttribute(ha, 7);
	printf(" %c",186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_alt_satir();
    
	
	//en ust hat
	printf("%c %c     ",186,186);        
	for (int i = 0; i<11 ; i++)
	{	
		if (plyrand[0][i]==0) printf("     ");
		else if (konum[0][i]==1)
		{
			temp_konum=&plyrand[0][i];
			printf("%c%c%c%c ",201,205,205,(SetConsoleTextAttribute(ha, 15),187));
		}
		else    printf("%c%c%c%c ",201,205,205,187,( renk_degis(plyrand[0][i])));
	}
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_ust_satir();
    

    //ust orta hat
	printf("%c %c     ",186,186);        
	for (int i = 0; i < 11; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else{
		printf("%c%d%c%c ",186,plyrand[0][i]%100,( renk_degis(plyrand[0][i]),(sayi_bosluk(plyrand[0][i]))),186);
		}
	}
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_orta_satir();


	//alt hat
	printf("%c %c     ",186,186);        
	for (int i = 0 ; i<11 ; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else if (konum[0][i]==1)
		{
			printf("%c%c%c%c ",200,205,205,(SetConsoleTextAttribute(ha, 15),188));
		}
		else    printf("%c%c%c%c ",200,205,205,188,( renk_degis(plyrand[0][i])));
	}
	SetConsoleTextAttribute(ha, 7);
    printf("    %c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_alt_satir();


    //alt satır
	//ust hat
	printf("%c %c     ",186,186);        
	for (int i = 11; i < 22; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else if (konum[1][i-11]==1)
		{
			temp_konum=&plyrand[0][i];
			printf("%c%c%c%c ",201,205,205,(SetConsoleTextAttribute(ha, 15),187));
		}
		else    printf("%c%c%c%c ",201,205,205,187,( renk_degis(plyrand[0][i])));
	}
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_ust_satir();


    //alt orta hat
	printf("%c %c     ",186,186);        
	for (int i = 11; i < 22; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else{
		printf("%c%d%c%c ",186,plyrand[0][i]%100,( renk_degis(plyrand[0][i]),(sayi_bosluk(plyrand[0][i]))),186);
		}
	}   
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_orta_satir();

    
    //en alt hat
	printf("%c %c     ",186,186);        
	for (int i = 11 ; i<22 ; i++)
	{
		if (plyrand[0][i]==0) printf("     ");
		else if (konum[1][i-11]==1)
		{
			printf("%c%c%c%c ",200,205,205,(SetConsoleTextAttribute(ha, 15),188));
		}
		else printf("%c%c%c%c ",200,205,205,188,( renk_degis(plyrand[0][i])));
	}
	SetConsoleTextAttribute(ha, 7);
	printf("    %c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_alt_satir();

	printf("%c ",186);
	istaka_alt_cerceve;SetConsoleTextAttribute(ha, 7);
	printf(" %c",186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_ust_satir();
        
    //kontrol paneli
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_orta_satir();
	printf("%c             %s                                                    %c",186,yon_tus1,186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c          %s                           %s              %c",186,yon_tus2,onay_tus,186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_ust_satir();
    printf("%c          %s                                                    %c",186,yontus3,186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_alt_satir();

    SetConsoleTextAttribute(ha,  7);
    alt_cerceve2;
    imza;
	
    x1=0;
	x2=0;
	x3=0;
	z1=0;
	z3=0;

		nii=1;
		while (nii)
		{
			int aaaa=0;
			c1=getche();
			c1 = tolower(c1);
			switch(c1)
			{
			case e:
				tas_isle2(temp_konum);
				oyna(0);
				return 0;                     
				break;
			case w:
				if (k1==0) nii=1;
				else{
				for ( int i = 0; i < 11; i++)   //önce hepsini sıfırla sonra gereken konumu 1 yap
				{   
					konum[0][i]=0;
					konum[1][i]=0;
				}
				k1=0;
				konum[k1][k2]=1;
				nii=0;
				}
				break;
			case s:
				if(plyrand[0][11]==0) nii=1;
				else if(k1==1)   nii=1;
				else{
				for ( i = 0; i < 11; i++)   
				{   
					konum[0][i]=0;
					konum[1][i]=0;
				}
				for ( i = 11; i < 22; i++)
				{
					if(plyrand[0][i]==0){
						if(k2>i-12) k2=i-12;
						break;
					}
				}
				k1=1;
				konum[k1][k2]=1;
				nii=0;
				}
				break;
			case a:
				if(k2==0)   nii=1;
				else{
				for ( i = 0; i < 11; i++)   
				{   
					konum[0][i]=0;
					konum[1][i]=0;
				}
				k2--;
				konum[k1][k2]=1;
				nii=0;
				}
				break;
			case d:
				
				if(k2==10)   nii=1;
				else{
					for ( i = 0; i < 11; i++)   
					{   
						konum[0][i]=0;
						konum[1][i]=0;
					}
					if(k1){
						for ( i = 12; i < 22; i++)
						{
							if(plyrand[0][i]==0){	
								if(k2==i-12){
									nii=1;
									aaaa=1;
									break;
								}
								else{
									k2++;
									konum[k1][k2]=1;
									nii=0;
									aaaa=1;
									break;
								}
							}
						}
						if(aaaa==1)aaaa=0;
						else{
							k2++;
							konum[k1][k2]=1;
							nii=0;
							break;
						}
					}
					else{
						for ( i = 0; i < 11; i++)
						{
							if(plyrand[0][i]==0){
								if(k2==i-1){
									nii=1;
									aaaa=1;
									break;
								}
								else{
									k2++;
									konum[k1][k2]=1;
									nii=0;
									aaaa=1;
									break;
								}
							}
						}
						if(aaaa==1)aaaa=0;
						else{
							k2++;
							konum[k1][k2]=1;
							nii=0;
							break;
						}
					}
					aaaa=0;
				}
				break;
			case x :
				oyna(0);                        
				return 0;
				nii=0;                 
				break;
			default:
				break;
			}
		}
	}
}


int tas_at2(int *tas){
    
    temp_atik=*tas;
	*tas=0;
	sondaki_sifir++;
	yan12_temp=yan12;
	yan12=temp_atik;

}



int tas_at(){
	tasi_sona_koy(&plyrand[0][0]);
    int *temp_konum;
	int konum[2][11]; 
    int k1=0,k2=5,i;
	for ( i = 0; i < 11; i++)
	{   
		if(plyrand[0][i]==0){
			k2=i-1;
			break;
		}
	}
    for ( i = 0; i < 11; i++)
        {   
            konum[0][i]=0;
            konum[1][i]=0;
        }
    konum[0][k2]=1;
    char c1=95;
    int kii=1,nii=0,tur_say=0;
    char *eminmisin="   [s]               ";
    char *yon_tus1="[w]",*yon_tus2="[a]   [d]",*onay_tus="onayla: [e]    ";
	if(lang_i==1) onay_tus="confirm: [e]   ";
    while(1)
    {
        if (tur_say==1)
        {
        eminmisin="eminmisin? [e] [r]   ";
		if(lang_i==1) eminmisin="are you sure? [e] [r]";
        yon_tus1="   ";
        yon_tus2="         ";
        onay_tus="               ";
        tur_say=2;    
        }
        else if (tur_say==2)
        {
            kii=1;
            while (kii)
            {
                cd=getch();
				cd = tolower(cd);
                switch (cd)
                {
                    case e:
						el_kontrol(0);
						if (orta_index>=19){
							oyna(19);
							return 0;
						}
						sc=0;
						tc=0;
						sifirlama_sayaci++;
						atik=*temp_konum;
						tas_at2(temp_konum);
						islek_tas_kontrol(atik,0);
						diger_oyuncular();
						return 0;                     
                        break;
                    case r:
                        yon_tus1="[w]";
                        yon_tus2="[a]   [d]";
                        onay_tus="onayla: [e]    ";
                        eminmisin="   [s]               ";
                        atik=temp_atik;
                        kii=0;
                        tur_say=0;
                        break;
                    case x :
                        atik=temp_atik;
                        oyna(0);                        
                        return 0;                 
                        break;
                    default:
                        break;
                }
                
            }
        }
        
        

        system("cls");
        ust_cerceve1;
        printf("%c                                                                    %c                                  %c\n",186,186,186);
        printf("%c                                                                    %c                                  %c\n",186,186,186);
        printf("%c                                                                    %c                                  %C\n",186,186,186);
        printf("%c                                                                    %C                                  %c\n",186,186,186);
        printf("%c                                                                    %c                                  %c\n",186,186,186);
        printf("%c                              %c%c%c%c%c%c%c%c                              %c                                  %c\n",186, 201,205,205,187, 201,205,205,187, 186,186);
    	printf("%c                              %cOK%c%c%d%c%c                              %c                                  %c\n",186,186,186,186,19-orta_index,(sayi_bosluk(19-orta_index)),186,186,186);
        printf("%c                              %c%c%c%c%c%c%c%c                              %c                                  %c\n",186, 200,205,205,188, 200,205,205,188, 186,186);


         //alınan verilen tasların yeri
        printf("%c    ",186);
		printf("%c%c%c%c                                                    ",(renk_degis(yan41),201),205,205,187);SetConsoleTextAttribute(ha, 7);
		printf("%c%c%c%c",(renk_degis(atik),201),205,205,187);SetConsoleTextAttribute(ha, 7);
		printf("    %c                                  %c\n",186,186);
		printf("%c    ",186);
		if (yan41==0)printf("%c  %c                                                    ",186,186);
		else printf("%c%d%c%c                                                    ",186,yan41%100,( renk_degis(yan41),(sayi_bosluk(yan41))),186);SetConsoleTextAttribute(ha, 7);
		if (atik==0)printf("%c  %c",186,186);
		else printf("%c%d%c%c",186,atik%100,( renk_degis(atik),(sayi_bosluk(atik))),186);SetConsoleTextAttribute(ha, 7);
		printf("    %c                                  %c\n",186,186);
		printf("%c    ",186);
		printf("%c%c%c%c                                                    ",(renk_degis(yan41),200),205,205,188);SetConsoleTextAttribute(ha, 7);
		printf("%c%c%c%c",(renk_degis(atik),200),205,205,188);SetConsoleTextAttribute(ha, 7);
		printf("    %c                                  %c\n",186,186);


		printf("%c ",186);
		istaka_ust_cerceve;SetConsoleTextAttribute(ha, 7);
		printf(" %c                                  %c\n",186,186);



        //en ust hat
        printf("%c %c     ",186,186);        
        for (int i = 0; i<11 ; i++)
        {	
			if (plyrand[0][i]==0) printf("     ");
			else if (konum[0][i]==1)
            {
                temp_konum=&plyrand[0][i];
                printf("%c%c%c%c ",201,205,205,(SetConsoleTextAttribute(ha, 15),187));
            }
            else    printf("%c%c%c%c ",201,205,205,187,( renk_degis(plyrand[0][i])));
        }
        SetConsoleTextAttribute(ha, 7);
        printf("    %c %c                                  %c\n",186,186,186);
        
        //ust orta hat
        printf("%c %c     ",186,186);        
        for (int i = 0; i < 11; i++)
        {
			if (plyrand[0][i]==0) printf("     ");
			else{
            printf("%c%d%c%c ",186,plyrand[0][i]%100,( renk_degis(plyrand[0][i]),(sayi_bosluk(plyrand[0][i]))),186);
			}
        }
        SetConsoleTextAttribute(ha, 7);
        printf("    %c %c                                  %c\n",186,186,186);
        
        //alt hat
        printf("%c %c     ",186,186);        
        for (int i = 0 ; i<11 ; i++)
        {
			if (plyrand[0][i]==0) printf("     ");
			else if (konum[0][i]==1)
            {
                printf("%c%c%c%c ",200,205,205,(SetConsoleTextAttribute(ha, 15),188));
            }
            else    printf("%c%c%c%c ",200,205,205,188,( renk_degis(plyrand[0][i])));
        }
        SetConsoleTextAttribute(ha, 7);
        printf("    %c %c                                  %c\n",186,186,186);

        
		//alt satır
        //ust hat
        printf("%c %c     ",186,186);        
        for (int i = 11; i < 22; i++)
        {
			if (plyrand[0][i]==0) printf("     ");
			else if (konum[1][i-11]==1)
            {
                temp_konum=&plyrand[0][i];
                printf("%c%c%c%c ",201,205,205,(SetConsoleTextAttribute(ha, 15),187));
            }
            else    printf("%c%c%c%c ",201,205,205,187,( renk_degis(plyrand[0][i])));
        }
        SetConsoleTextAttribute(ha, 7);
        printf("    %c %c                                  %c\n",186,186,186);

        //alt orta hat
        printf("%c %c     ",186,186);        
        for (int i = 11; i < 22; i++)
        {
			if (plyrand[0][i]==0) printf("     ");
			else{
            printf("%c%d%c%c ",186,plyrand[0][i]%100,( renk_degis(plyrand[0][i]),(sayi_bosluk(plyrand[0][i]))),186);
			}
		}   
        SetConsoleTextAttribute(ha, 7);
        printf("    %c %c                                  %c\n",186,186,186);
        
        //en alt hat
        printf("%c %c     ",186,186);        
        for (int i = 11 ; i<22 ; i++)
        {
			if (plyrand[0][i]==0) printf("     ");
			else if (konum[1][i-11]==1)
            {
                printf("%c%c%c%c ",200,205,205,(SetConsoleTextAttribute(ha, 15),188));
            }
            else printf("%c%c%c%c ",200,205,205,188,( renk_degis(plyrand[0][i])));
        }
        SetConsoleTextAttribute(ha, 7);
        printf("    %c %c                                  %c\n",186,186,186);

		printf("%c ",186);
		istaka_alt_cerceve;SetConsoleTextAttribute(ha, 7);
		//uyari_cerceve;
		printf(" %c                                  %c\n",186,186);

        printf("%c                                                                    %c                                  %c\n",186,186,186);
        printf("%c             %s                                                    %c                                  %c\n",186,yon_tus1,186, 186);
        printf("%c          %s                           %s       %c                                  %c\n",186,yon_tus2,onay_tus,186, 186);
        printf("%c          %s                                     %c                                  %c\n",186,eminmisin,186, 186);
        printf("%c                                                                    %c                                  %c\n",186,186,186);
        alt_cerceve2;
        
        SetConsoleTextAttribute(ha,  7);
        imza;

        
        if (tur_say==0)  
        {
            nii=1;
            while (nii)
            {
				int aaaa=0;
                c1=getche();
				c1 = tolower(c1);
                switch(c1)
                {
                case e:
                tur_say=1; 
                nii=0;   
                break;
                case w:
                    if (k1==0) nii=1;
                    else{
                    for ( int i = 0; i < 11; i++)   //önce hepsini sıfırla sonra gereken konumu 1 yap
                    {   
                        konum[0][i]=0;
                        konum[1][i]=0;
                    }
                    k1=0;
                    konum[k1][k2]=1;
                    nii=0;
                    }
                    break;
                case s:
					if(plyrand[0][11]==0) nii=1;
                    else if(k1==1)   nii=1;
                    else{
                    for ( i = 0; i < 11; i++)   
                    {   
                        konum[0][i]=0;
                        konum[1][i]=0;
                    }
					for ( i = 11; i < 22; i++)
					{
						if(plyrand[0][i]==0){
							if(k2>i-12) k2=i-12;
							break;
						}
					}
					k1=1;
                    konum[k1][k2]=1;
                    nii=0;
                    }
                    break;
                case a:
                    if(k2==0)   nii=1;
                    else{
                    for ( i = 0; i < 11; i++)   
                    {   
                        konum[0][i]=0;
                        konum[1][i]=0;
                    }
                    k2--;
                    konum[k1][k2]=1;
                    nii=0;
                    }
                    break;
                case d:
					
                    if(k2==10)   nii=1;
                    else{
						for ( i = 0; i < 11; i++)   
						{   
							konum[0][i]=0;
							konum[1][i]=0;
						}
						if(k1){
							for ( i = 12; i < 22; i++)
							{
								if(plyrand[0][i]==0){	
									if(k2==i-12){
										nii=1;
										aaaa=1;
										break;
									}
									else{
										k2++;
										konum[k1][k2]=1;
										nii=0;
										aaaa=1;
										break;
									}
								}
							}
							if(aaaa==1)aaaa=0;
							else{
								k2++;
								konum[k1][k2]=1;
								nii=0;
								break;
							}
						}
						else{
							for ( i = 0; i < 11; i++)
							{
								if(plyrand[0][i]==0){
									if(k2==i-1){
										nii=1;
										aaaa=1;
										break;
									}
									else{
										k2++;
										konum[k1][k2]=1;
										nii=0;
										aaaa=1;
										break;
									}
								}
							}
							if(aaaa==1)aaaa=0;
							else{
								k2++;
								konum[k1][k2]=1;
								nii=0;
								break;
							}
						}
						aaaa=0;
                    }
                    break;
                case x :
                    atik=temp_atik;
                    oyna(0);                        
                    return 0;
                    nii=0;                 
                    break;
                default:
                    break;
                }
            }
        }
    }
	return 0;         
}



int oyna(int devam){


if (orta_index>=19){
	orta_index++;
	oyun_bitti(10);
	return 0;
}
if(devam==19){
	orta_index++;
	oyun_bitti(10);
	return 0;
}

	for ( int i = 0; i < 9; i++)
	{   
		konum1[i][0]=0;
		konum1[i][1]=0;
	}
    while(1){
        system("cls");
		
    ust_cerceve1;
	printf("%c                                                                    %c",186,186); 
		if(as==0) printf("                                  %c\n",186);
		else acilan_ust_satir();
	printf("%c        ",186);
	printf("%c%c%c%c                                            ",(renk_degis(yan34),201),205,205,187);SetConsoleTextAttribute(ha, 7);
    printf("%c%c%c%c",(renk_degis(yan23),201),205,205,187);SetConsoleTextAttribute(ha, 7);
    printf("        %c",186);
		if(as==0) printf("                                  %c\n",186);
		else acilan_orta_satir();
     printf("%c        ",186);
	if (yan34==0)printf("%c  %c                                            ",186,186);
	else printf("%c%d%c%c                                            ",186,yan34%100,(sayi_bosluk(yan34)),( renk_degis(yan34),186));SetConsoleTextAttribute(ha, 7);
    if (yan23==0)printf("%c  %c",186,186);
    else printf("%c%d%c%c",186,yan23%100,(sayi_bosluk(yan23)),( renk_degis(yan23),186));SetConsoleTextAttribute(ha, 7);
	printf("        %c",186);
		if(as==0) printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c        ",186);
    printf("%c%c%c%c                                            ",(renk_degis(yan34),200),205,205,188);SetConsoleTextAttribute(ha, 7);
    printf("%c%c%c%c",(renk_degis(yan23),200),205,205,188);SetConsoleTextAttribute(ha, 7);
    printf("        %c",186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_ust_satir();
    printf("%c                                                                    %c",186,186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c                              %c%c%c%c%c%c%c%c                              %c",186, 201,205,205,187, 201,205,205,187, 186);
		if((as>=0)&&(as<=2))printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c                              %cOK%c%c%d%c%c                              %c",186,186,186,186,19-orta_index,(sayi_bosluk(19-orta_index)),186,186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_ust_satir();
	printf("%c                              %c%c%c%c%c%c%c%c                              %c",186, 200,205,205,188, 200,205,205,188, 186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_orta_satir();
        
    //alınan verilen tasların yeri
    printf("%c    ",186);
	printf("%c%c%c%c                                                    ",(renk_degis(yan41),201),205,205,187);SetConsoleTextAttribute(ha, 7);
    printf("%c%c%c%c",(renk_degis(atik),201),205,205,187);SetConsoleTextAttribute(ha, 7);
    printf("    %c",186);
		if((as==0)||(as>=3)&&(as<=4))printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c    ",186);
	if (yan41==0)printf("%c  %c                                                    ",186,186);
	else printf("%c%d%c%c                                                    ",186,yan41%100,( renk_degis(yan41),(sayi_bosluk(yan41))),186);SetConsoleTextAttribute(ha, 7);
    if (atik==0)printf("%c  %c",186,186);
    else printf("%c%d%c%c",186,atik%100,( renk_degis(atik),(sayi_bosluk(atik))),186);SetConsoleTextAttribute(ha, 7);
	printf("    %c",186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_ust_satir();

	//puan durumu yazan kısım
	printf("%c    ",186);
    printf("%c%c%c%c",(renk_degis(yan41),200),205,205,188);SetConsoleTextAttribute(ha, 7);
	printf("                   %s%c%d /%c%d]                   ",puan_durumu0,sayi_bosluk(puan_cift),puan_cift,sayi_bosluk(pu_ci_sinir),pu_ci_sinir);
    printf("%c%c%c%c",(renk_degis(atik),200),205,205,188);SetConsoleTextAttribute(ha, 7);
    printf("    %c",186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_orta_satir();


    printf("%c ",186);
	istaka_ust_cerceve;SetConsoleTextAttribute(ha, 7);
	printf(" %c",186);
		if((as==0)||(as>=5)&&(as<=6))printf("                                  %c\n",186);
		else acilan_alt_satir();
    
	
	//en ust hat 
    printf("%c %c ",186,186);        
    if(satir_sonu_index==11||satir_sonu_index==10)printf("    ");            
    for (int i = 0; i<satir_sonu_index ; i++)
    {
		if (plyrand[0][i]==0) printf("    ");
		else{
        printf("%c%c%c%c",201,205,205,187,( renk_degis(plyrand[0][i])));
		}
		SetConsoleTextAttribute(ha, 7);
		if(bosluk_devam==0||bosluk_devam<=i) printf(" ");
		else if (bosluk_index[i]) printf(" ");
    }

    SetConsoleTextAttribute(ha, 7);
    ayarli_bosluk;
	if(satir_sonu_index==10)printf("           ");
    else if(satir_sonu_index==13)printf(" ");
	printf("%c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_ust_satir();
    

    //ust orta hat
    printf("%c %c ",186,186);        
    if(satir_sonu_index==11||satir_sonu_index==10)printf("    ");            
    for (int i = 0; i < satir_sonu_index; i++)
    {
		if (plyrand[0][i]==0) printf("    ");
		else{
        printf("%c%d%c%c",186,plyrand[0][i]%100,( renk_degis(plyrand[0][i]),(sayi_bosluk(plyrand[0][i]))),186);
		}
		SetConsoleTextAttribute(ha, 7);
		if(bosluk_devam==0||bosluk_devam<=i) printf(" ");
		else if (bosluk_index[i]) printf(" ");
	}
    SetConsoleTextAttribute(ha, 7);

	ayarli_bosluk;    
	if(satir_sonu_index==10)printf("           ");
    else if(satir_sonu_index==13)printf(" ");
	printf("%c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_orta_satir();

    //alt hat
    printf("%c %c ",186,186);        
    if(satir_sonu_index==11||satir_sonu_index==10)printf("    ");            
    for (int i = 0 ; i<satir_sonu_index ; i++)
    {
		if (plyrand[0][i]==0) printf("    ");
		else{
        printf("%c%c%c%c",200,205,205,188,( renk_degis(plyrand[0][i])));
		}
		SetConsoleTextAttribute(ha, 7);
		if(bosluk_devam==0||bosluk_devam<=i) printf(" ");
		else if (bosluk_index[i]) printf(" ");
    }

    SetConsoleTextAttribute(ha, 7);
	ayarli_bosluk;
    if(satir_sonu_index==10)printf("           ");
    else if(satir_sonu_index==13)printf(" ");
    printf("%c %c",186,186);
		if((as==0)||(as>=7)&&(as<=8))printf("                                  %c\n",186);
		else acilan_alt_satir();


    //alt satır
    //ust hat
    printf("%c %c ",186,186);        
    if(satir_sonu_index==11||satir_sonu_index==10)printf("    ");            
    for (int i = satir_sonu_index; i<22; i++)
    {
		if (plyrand[0][i]==0) printf("    ");
		else{
        printf("%c%c%c%c",201,205,205,187,( renk_degis(plyrand[0][i])));
		}
		SetConsoleTextAttribute(ha, 7);
		if(bosluk_devam==0||bosluk_devam<=i) printf(" ");
		else if (bosluk_index[i]) printf(" ");
    }
    SetConsoleTextAttribute(ha, 7);
	alt_ayarli_bosluk;
    if(satir_sonu_index==10)printf("");
    else if(satir_sonu_index==11)printf("    ");
    else if(satir_sonu_index==12)printf("             ");
    else if(satir_sonu_index==13)printf("                  ");
    printf("%c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_ust_satir();


    //alt orta hat
    printf("%c %c ",186,186);        
    if(satir_sonu_index==11||satir_sonu_index==10)printf("    ");    
    for (int i = satir_sonu_index; i<22; i++)
    {
		if (plyrand[0][i]==0) printf("    ");
		else{
        printf("%c%d%c%c",186,plyrand[0][i]%100,( renk_degis(plyrand[0][i]),(sayi_bosluk(plyrand[0][i]))),186);
		}
		SetConsoleTextAttribute(ha, 7);
		if(bosluk_devam==0||bosluk_devam<=i) printf(" ");
		else if (bosluk_index[i]) printf(" ");
    }
    SetConsoleTextAttribute(ha, 7);
	alt_ayarli_bosluk;
    if(satir_sonu_index==10)printf("");
    else if(satir_sonu_index==11)printf("    ");
    else if(satir_sonu_index==12)printf("             ");
    else if(satir_sonu_index==13)printf("                  ");
    printf("%c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_orta_satir();

    
    // en alt hat
    printf("%c %c ",186,186);        
    if(satir_sonu_index==11||satir_sonu_index==10)printf("    ");    
    for (int i = satir_sonu_index; i<22; i++)
    {
		if (plyrand[0][i]==0) printf("    ");
		else{
        printf("%c%c%c%c",200,205,205,188,( renk_degis(plyrand[0][i])));
		}
		SetConsoleTextAttribute(ha, 7);
		if(bosluk_devam==0||bosluk_devam<=i) printf(" ");
		else if (bosluk_index[i]) printf(" ");
    }
    SetConsoleTextAttribute(ha, 7);
	alt_ayarli_bosluk;
    if(satir_sonu_index==10)printf("");
    else if(satir_sonu_index==11)printf("    ");
    else if(satir_sonu_index==12)printf("             ");
    else if(satir_sonu_index==13)printf("                  ");
	printf("%c %c",186,186);
		if((as==0)||(as>=9)&&(as<=10))printf("                                  %c\n",186);
		else acilan_alt_satir();

	printf("%c ",186);
	istaka_alt_cerceve;SetConsoleTextAttribute(ha, 7);
	printf(" %c",186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_ust_satir();
        
    
    printf("%c                                                                    %c",186,186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c   %s   %c",186,(lang_i==0 ?konsol_ekrani1:konsol_ekrani5),186);
		if((as==0)||(as>=11)&&(as<=12))printf("                                  %c\n",186);
		else acilan_alt_satir();
    printf("%c   %s   %c",186,(lang_i==0 ?konsol_ekrani2:konsol_ekrani6),186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_ust_satir();
    printf("%c   %s   %c",186,(lang_i==0 ?konsol_ekrani3:konsol_ekrani7),186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_orta_satir();
    printf("%c   %s   %c",186,(lang_i==0 ?konsol_ekrani4:konsol_ekrani8),186);
		if((as==0)||(as>=13)&&(as<=14))printf("                                  %c\n",186);
		else acilan_alt_satir();
    alt_cerceve2;

    SetConsoleTextAttribute(ha,  7);
    imza;
	printf("[h] -> crash raport\n");
	
    x1=0;
	x2=0;
	x3=0;

    if (devam==2)
	{
		return 0;
	}

    konsol_ekrani1="  [w] ->  ortadan tas cek                   tas isle  <- [q]  ";
	konsol_ekrani2="  [a] ->  yandan tas al                      seri ac  <- [e]  ";
	konsol_ekrani3="  [s] ->  seri diz (beta)                    cift ac  <- [r]  ";
	konsol_ekrani4="  [d] ->  cift diz                            tas at  <- [f]  ";

	
	konsol_ekrani5="[w] -> take a tile from the middle           add a tile <- [q]";
	konsol_ekrani6="[a] -> take a tile from the side            open series <- [e]";
	konsol_ekrani7="[s] -> go for series                         open pairs <- [r]";
	konsol_ekrani8="[d] -> go for pairs             put a tile to the right <- [f]";


        cd = getch();
		cd = tolower(cd);
        switch (cd)
        {
		case r :
			if ((doca==1)&&(tas_alinabilirlik[0]==1))
			{
				cift_ac(0);
				oyna(0);
				return 0;
				break;
			}
			else if(cift_tas_atilabilir[0]==1){
				cift_ac(0);
				oyna(0);
				return 0;
				break;
			}
			else if(cift[0]>=cift_acma_siniri){
				cift_ac(0);
				doca=1;
				cift_acma_siniri=cift[0]+1;
				oyna(0);
				return 0;
				break;
			}
			else break;
		case e :
			if(tas_alinabilirlik[0]==1){
				seri_ac(0);
				oyna(0);
				return 0;
				break;
			}
			else if(puan[0]>=el_acma_siniri){
				el_acma_siniri=puan[0]+1;
				seri_ac(0);
				oyna(0);
				return 0;
				break;
			}
			else break;
        case c :
            //chat
            break;  
		case u:
			//hile kodu
			scanf("%s",cheat_code);
			break;

		case a :
			if(sifirlama_sayaci!=0){
			sifirlama_sayaci++;
			yandan_tas_cek();
			oyna(0);
			return 0;
			}
			break; 
        case d :
			cift_seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0); 
			oyna(0);
			return 0;
            break;
        case s :
			tasi_sona_koy(&plyrand[0][0]);
            seri_diz(&plyrand[0][0],eleman_sayisi(&plyrand[0][0]),0);
			oyna(0);
			return 0;
            break;
        case w :
			if(sifirlama_sayaci!=0){
			sifirlama_sayaci++;
            orta_tas_cek();
			return 0;
			}
            break;
		case q:
			if((tas_alinabilirlik[0]==1)||(cift_tas_atilabilir[0]==1)){
			tas_isle();
            return 0;  
			}               
            break;
        case x :        
            pause();
            return 0;                 
            break;
        case f :
			tasi_sona_koy(&plyrand[0][0]);
			if(sifirlama_sayaci==0){
				tas_at();
				return 0;
			}
			else if (tc)
			{
				tas_at();
				return 0;
			}
			else {
				konsol_ekrani1="                             hata:                            ";
				konsol_ekrani2="               -- once tas cekmeniz gerekiyor --              ";
				konsol_ekrani3="                   [w] ->  ortadan tas cek                    ";
				konsol_ekrani4="                   [a] ->  yandan tas cek                     ";

				
				konsol_ekrani5="                             eror:                            ";
				konsol_ekrani6="              -- you have to take a tile first --             ";
				konsol_ekrani7="              [w] -> take a tile from the middle              ";
				konsol_ekrani8="              [a] -> take a tile from the left side           ";
				break;
			}
			return 0;
		case h:
			crash_raport();
			return 0;
			break;
        default:
            break;            
        }
    }
}


FILE *fskor;
int hours, minutes, seconds, day, month, year;
time_t now;

int skor_tablosu(){
	
	if((fskor=fopen("skor_tablosu.txt","r"))==NULL){
		system("cls");
		ust_cerceve3;
		bos_satir_cerceve(8);
		printf("%c                                             !! hata !!                                                %c\n",186,186);
		printf("%c                                          dosya acilamadi.                                             %c\n",186,186);
		bos_satir_cerceve(1);
		printf("%c               skor_tablosu.txt isimli dosyanin oyun klasoru icinde oldugundan emin olun               %c\n",186,186);
		bos_satir_cerceve(1);
		printf("%c                          dosyaya yoksa yeniden olusturmak icin [f] basiniz                            %c\n",186,186);
		bos_satir_cerceve(12);
		alt_cerceve1;
		imza;
		while(1){
        cd = getch();
		cd = tolower(cd);
			switch (cd)
			{
			case x :
				return 0;
				break;
			case f:
				if((fskor=fopen("skor_tablosu.txt","w"))==0){
				system("cls");	
				printf("\n\n\n                                   hata: dosya yine acilamadi!                                         \n");			
				}
				skor_tablosu();
			default:
			break;
				
			}
    	}
	}
	else{

		system("cls");
		ust_cerceve3;
		while(!feof(fskor))
		{
			printf("%c",fgetc(fskor));
		}
		printf("\n");
		alt_cerceve1;
		if(lang_i==0){
			printf("\n[h] -> tum kaydi sil\n");
		}
		else{
			printf("\n[h] -> delete all\n");
		}
		imza;
		while(1){
        cd = getch();
		cd = tolower(cd);
			switch (cd)
			{
			case h:
				(fskor=fopen("skor_tablosu.txt","w"));
				fclose(fskor);
				skor_tablosu();
				break;
			case x :
				return 0;
				break;
			
			default:
			break;
				
			}
   		}
	}
	fclose(fskor);
}

int old_skor[4];
int ob=0,os=0,ag=0; //oyun bitti fonksiyonu birden fazla skor hesaplaması yapmasın diye

int oyun_bitti(int kazanan){
int kazanan_temp=kazanan;	


if(ob==0){

	if((tas_alinabilirlik[1]==0)&&(cift_tas_atilabilir[1]==0)){
		skor[1]+=202;
	}
	else{
		for (int i = 0; i < 22; i++)
		{
			skor[1]+=(plyrand[1][i]%100);
		}
	}
	if((tas_alinabilirlik[2]==0)&&(cift_tas_atilabilir[2]==0)){
		skor[2]+=202;
	}
	else{
		for (int i = 0; i < 22; i++)
		{
			skor[2]+=(plyrand[2][i]%100);
		}
	}
	if((tas_alinabilirlik[3]==0)&&(cift_tas_atilabilir[3]==0)){
		skor[3]+=202;
	}
	else{
		for (int i = 0; i < 22; i++)
		{
			skor[3]+=(plyrand[3][i]%100);
		}
	}
	if((tas_alinabilirlik[0]==0)&&(cift_tas_atilabilir[0]==0)){
		skor[0]+=202;
	}
	else{
		for (int i = 0; i < 22; i++)
		{
			skor[0]+=(plyrand[0][i]%100);
		}
	}
	if(kazanan<4){
		for (int i = 0; i < 22; i++)
		{
			skor[kazanan]-=(plyrand[kazanan][i]%100);

		}
	}

	if((os!=0)&&(ag==0))
	{
		for (int i = 0; i < 4; i++) old_skor[i]=skor[i]-old_skor[i];
		os=1;
	}
	else {
		for (int i = 0; i < 4; i++) old_skor[i]=skor[i];
		os=1;
	}
	ob++;

}



char *kznn1={"1. oyuncu"},*kznn2={"2. oyuncu"},*kznn3={"3. oyuncu"},*kznn4={"4. oyuncu"},*tebrik={"tebrikler"},*tab_kznn={"[ kazanan ]"};

	if(kazanan>3){
		if(old_skor[0]>old_skor[1])
		{
			if(old_skor[1]>old_skor[2])
			{
				if(old_skor[2]>old_skor[3]) kazanan=3;
				else kazanan=2;
			}
			else if(old_skor[1]>old_skor[3]) kazanan=3;
			else kazanan=1;
		}
		else if(old_skor[0]>old_skor[2]){
			if(old_skor[2]>old_skor[3]) kazanan=3;
			else kazanan=2;
		}
		else if(old_skor[0]>old_skor[3]){
			kazanan=3;
		}
		else kazanan=0;
	}
	


	system("cls");
    ust_cerceve2;
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c      [ oyun bitti ]                                                                                   %c\n",186,186); 
    printf("%c                                                                                                       %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);		
	printf("%c      bu el kazanan:  [[ %s ]]   [ %d%c%c%c%c]   %s                                           %c\n",186,(kazanan==0?kznn1:(kazanan==1?kznn2:(kazanan==2?kznn3:(kazanan==3?kznn4:("         "))))),old_skor[kazanan],negatif_bosluk(old_skor[kazanan]),skor_bosluk(old_skor[kazanan]),skor_bosluk2(old_skor[kazanan]),skor_bosluk3(old_skor[kazanan]),(kazanan==0?tebrik:("         ")),186);       
    printf("%c                                                                                                       %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);
    printf("%c      skor tablosu:                                                                                    %c\n",186,186);
    printf("%c      1. oyuncu (sen)   [ %d%c%c%c%c]                                                                       %c\n",186,skor[0],negatif_bosluk(skor[0]),skor_bosluk(skor[0]),skor_bosluk2(skor[0]),skor_bosluk3(skor[0]),186);
    printf("%c      2. oyuncu         [ %d%c%c%c%c]                                                                       %c\n",186,skor[1],negatif_bosluk(skor[1]),skor_bosluk(skor[1]),skor_bosluk2(skor[1]),skor_bosluk3(skor[1]),186);
    printf("%c      3. oyuncu         [ %d%c%c%c%c]                                                                       %c\n",186,skor[2],negatif_bosluk(skor[2]),skor_bosluk(skor[2]),skor_bosluk2(skor[2]),skor_bosluk3(skor[2]),186);
    printf("%c      4. oyuncu         [ %d%c%c%c%c]                                                                       %c\n",186,skor[3],negatif_bosluk(skor[3]),skor_bosluk(skor[3]),skor_bosluk2(skor[3]),skor_bosluk3(skor[3]),186);
	printf("%c                                                                                                       %c\n",186,186);	
	bos_satir_cerceve(3);
	printf("%c      [a]  ->  diger ele basla                                                                         %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);
	printf("%c      [s]  ->  oyunu kaydet (aktif degil)                                                              %c\n",186,186);	
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c      [x]  ->  ana menu                                                                                %c\n",186,186);
    bos_satir_cerceve(2);
    alt_cerceve1;
    imza;
	while(1){
		cd = getch();
		switch (cd)
		{
		case x :
			sifirlama_sayaci++;
			anamenu();                 
			break;
		case s :
			if(skor[0]>skor[1])
			{
				if(skor[1]>skor[2])
				{
					if(skor[2]>skor[3]) kazanan=3;
					else kazanan=2;
				}
				else if(skor[1]>skor[3]) kazanan=3;
				else kazanan=1;
			}
			else if(skor[0]>skor[2]){
				if(skor[2]>skor[3]) kazanan=3;
				else kazanan=2;
			}
			else if(skor[0]>skor[3]){
				kazanan=3;
			}
			else kazanan=0;

			if((fskor=fopen("skor_tablosu.txt","a"))==NULL){
				system("cls");
				ust_cerceve3;
				bos_satir_cerceve(8);
				printf("%c                                             !! hata !!                                                %c\n",186,186);
				printf("%c                                          dosya acilamadi.                                             %c\n",186,186);
				bos_satir_cerceve(1);
				printf("%c               skor_tablosu.txt isimli dosyanin oyun klasoru icinde oldugundan emin olun               %c\n",186,186);
				bos_satir_cerceve(1);
				printf("%c                          dosyaya yoksa yeniden olusturmak icin [f] basiniz                            %c\n",186,186);
				bos_satir_cerceve(12);
				alt_cerceve1;
				imza;
				while(1){
				cd = getch();
				cd = tolower(cd);
					switch (cd)
					{
					case x :
						return 0;
						break;
					case f:
						if((fskor=fopen("skor_tablosu.txt","w"))==0){
						system("cls");	
						printf("\n\n\n                                   hata: dosya yine acilamadi!                                         \n");	
						getch();
						oyun_bitti(kazanan_temp);	
						}
						break;
					default:
					break;
						
					}
				}
			}
			else{
			
			system("cls");
    		fprintf(fskor,"    [ %02d/%02d/%d ] [ %02d:%02d:%02d ]                                                                         \n\n",day, month, year, hours, minutes, seconds);
			fprintf(fskor,"     1. oyuncu (sen)   [ %d%c%c%c%c] %s                                                              \n",skor[0],negatif_bosluk(skor[0]),skor_bosluk(skor[0]),skor_bosluk2(skor[0]),skor_bosluk3(skor[0]),(kazanan==0?tab_kznn:("           ")));
			fprintf(fskor,"     2. oyuncu         [ %d%c%c%c%c] %s                                                              \n",skor[1],negatif_bosluk(skor[1]),skor_bosluk(skor[1]),skor_bosluk2(skor[1]),skor_bosluk3(skor[1]),(kazanan==1?tab_kznn:("           ")));
			fprintf(fskor,"     3. oyuncu         [ %d%c%c%c%c] %s                                                              \n",skor[2],negatif_bosluk(skor[2]),skor_bosluk(skor[2]),skor_bosluk2(skor[2]),skor_bosluk3(skor[2]),(kazanan==2?tab_kznn:("           ")));
			fprintf(fskor,"     4. oyuncu         [ %d%c%c%c%c] %s                                                              \n\n\n",skor[3],negatif_bosluk(skor[3]),skor_bosluk(skor[3]),skor_bosluk2(skor[3]),skor_bosluk3(skor[3]),(kazanan==3?tab_kznn:("           ")));
			printf("saved...\n\npress [x] \n");
			
			}
			fclose(fskor);
			break;
		case a :
			sifirlama_sayaci=0;
			atik=0;
			temp_atik=0;
			orta_index=0;
			sondaki_sifir=0;
			satir_sonu_index=11;
			bosluk_devam=0;
			aabs=0;
			yan12=0;
			yan23=0;
			yan34=0;
			yan41=0;
			puan_cift=0;
			cift_seri_index=0;
			el_acma_siniri=34;
			cift_acma_siniri=5;
			pu_ci_sinir=34;
			puan_durumu0="[puan: ";
			as=0; 
			sc=0;
			tc=0;
			ob=0;
			ag=0;
			doca=0;
			for (int i = 0; i < 4; i++) cift_tas_atilabilir[i]=0;
			for (int i = 0; i < 4; i++) tas_alinabilirlik[i]=0;
			for (int i = 0; i < 4; i++) puan[i]=0;
			for (int i = 0; i < 4; i++) cift[i]=0;
			for (int i = 0; i < 22; i++) bosluk_index[i]=0;	
			for (int i = 0; i < 28; i++) seriler[0][i]=0;
			for (int i = 0; i < 28; i++) seriler[1][i]=0;
			for (int i = 0; i < 28; i++) seriler[2][i]=0;
			for (int i = 0; i < 28; i++) seriler[3][i]=0;
			for (int i = 0; i < 100; i++) acilan_seriler[i][0]=0;
			for (int i = 0; i < 100; i++) acilan_seriler[i][1]=0;
			for (int i = 0; i < 100; i++) acilan_seriler[i][2]=0;
			for (int i = 0; i < 100; i++) acilan_seriler[i][3]=0;
			konsol_ekrani1="  [w] ->  ortadan tas cek                   tas isle  <- [q]  ";
			konsol_ekrani2="  [a] ->  yandan tas al                      seri ac  <- [e]  ";
			konsol_ekrani3="  [s] ->  seri diz (beta)                    cift ac  <- [r]  ";
			konsol_ekrani4="  [d] ->  cift diz                            tas at  <- [f]  ";
			
			konsol_ekrani5="[w] -> take a tile from the middle           add a tile <- [q]";
			konsol_ekrani6="[a] -> take a tile from the side            open series <- [e]";
			konsol_ekrani7="[s] -> go for series                         open pairs <- [r]";
			konsol_ekrani8="[d] -> go for pairs             put a tile to the right <- [f]";
			cheat_code[0]=32;
			x1=0;
			x2=0;
			x3=0;
			ayirma();
			oyna(0);
			break;
		default:
		break;
		}
	}
}




int oyun_modu_secme(){
	int secim=2;
	char *bilgi={"                                                                  "};
	char *bilgi2={"                                                        "};
	while(1){

	system("cls");
	ust_cerceve3;
	bos_satir_cerceve(1);
    printf("%c                                         [[ OYUN MODUNU SECINIZ ]]                                     %c\n",186,186);
  	bos_satir_cerceve(3);

    printf("%c                       ",186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(secim==1?SetConsoleTextAttribute(ha, 4),201:201),205,205,205,205,205,205,205,205,205,205,205,205,187);
	SetConsoleTextAttribute(ha, 7);
	printf("        %c%c%c%c%c%c%c%c%c%c%c%c%c%c        ",(secim==2?SetConsoleTextAttribute(ha, 4),201:201),205,205,205,205,205,205,205,205,205,205,205,205,187);
	SetConsoleTextAttribute(ha, 7);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c                      ",(secim==3?SetConsoleTextAttribute(ha, 4),201:201),205,205,205,205,205,205,205,205,205,205,205,205,187);
    SetConsoleTextAttribute(ha, 7);
	printf("%c\n",186);

	printf("%c                       ",186);
	printf("%c            %c        %c            %c        %c            %c                      ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);
	printf("%c                       ",186);
    printf("%c            %c        %c            %c        %c            %c                      ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);
	printf("%c                       ",186);
	printf("%c            %c        %c            %c        %c            %c                      ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);
	printf("%c                       ",186);
    printf("%c   NORMAL   %c        %c    101]    %c        %c  SINIRSIZ  %c                      ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);
	printf("%c             < [a]     ",186);
    printf("%c    OKEY    %c        %c    OKEY    %c        %c    101]    %c     [d] >            ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);
	printf("%c                       ",186);
    printf("%c            %c        %c            %c        %c    OKEY    %c                      ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);
	printf("%c                       ",186);
    printf("%c            %c        %c            %c        %c            %c                      ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);
	printf("%c                       ",186);
    printf("%c            %c        %c            %c        %c            %c                      ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);
	printf("%c                       ",186);
    printf("%c            %c        %c            %c        %c            %c                      ",186,186,186,186,186,186,186,186);
	printf("%c\n",186);

	printf("%c                       ",186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(secim==1?SetConsoleTextAttribute(ha, 4),200:200),205,205,205,205,205,205,205,205,205,205,205,205,188);
	SetConsoleTextAttribute(ha, 7);
	printf("        %c%c%c%c%c%c%c%c%c%c%c%c%c%c        ",(secim==2?SetConsoleTextAttribute(ha, 4),200:200),205,205,205,205,205,205,205,205,205,205,205,205,188);
	SetConsoleTextAttribute(ha, 7);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c                      ",(secim==3?SetConsoleTextAttribute(ha, 4),200:200),205,205,205,205,205,205,205,205,205,205,205,205,188);
    SetConsoleTextAttribute(ha, 7);
	printf("%c\n",186);	
	
    bos_satir_cerceve(1);
	bilgi=(secim==1?"aktif degil kullanilamaz                                          ":(secim==2?"klasik 101 okey ortadaki taslar bitince el biter                  ":"aktif degil kullanilamaz                                          "));
	bilgi2=(secim==3?"ortadaki taslar bitmez biri kazanana kadar el devam eder":"                                                        ");
	printf("%c                       bilgi: %s       %c\n",186,bilgi,186);   
	printf("%c                       %s                        %c\n",186,bilgi2,186);
    bos_satir_cerceve(3);
    printf("%c                                              ONAYLA: [S]                                              %c\n",186,186);
    bos_satir_cerceve(1);

	alt_cerceve1;
	imza;
	int whl=1;
	while(whl){

	cd = getch();
	cd = tolower(cd);
	switch (cd)
	{
	case s:
		return 0;	//şimdilik
		break;
	case space:
		return 0;	//şimdilik
		break;
	case a :
		if(secim!=1){ 
			secim--;	
			whl=0;
		}
		break;
	case d:
		if(secim!=3){ 
			secim++;	
			whl=0;
		}		
		break;
	default:
		break;
	}
		
	}
	}

}

void nasiloynanir(){
int i=1;
system("cls");
ust_cerceve3;
bos_satir_cerceve(1);
printf("%c      101 okey nasil oynanir:                                                                          %c\n",186,186);
bos_satir_cerceve(1);
printf("%c    101 Okey dort oyuncu ile birden fazla turda oynanir (Tur sayisini sen belirliyorsun). Bu oyunda    %c\n",186,186);
printf("%c amac mumkun oldugu kadar az skorla oyunu bitirmektir. Tum turlar sonunda en az skora sahip olan       %c\n",186,186);
printf("%c oyuncu oyunun galibidir. skorlar elde kalan taslarin uzerindeki sayilar ile belirlenir.               %c\n",186,186);
printf("%c    Oyun ortadan cekecek tas kalmayinca bitebilecegi gibi oyunculardan birinin elini tamamlamasi ile   %c\n",186,186);
printf("%c de bitebilir.                                                                                         %c\n",186,186);
printf("%c    oyuna baslarken 22 tasiniz olucak bu yuzden ortadan tas cekemezsiniz, elinizdeki taslardan birini  %c\n",186,186);
printf("%c secip yana attiginizda oyun devam eder sira diger oyunculara gecer.                                   %c\n",186,186);
printf("%c    El acmak icin en az 34 puaniniz olmalidir. bu sayi biri elini actiginda acilan elin puaninin bir   %c\n",186,186); 
printf("%c fazlasi olarak guncellenir. El acmak icin elinizde ayni numarali degisik renklerden 3 veya 4 adet     %c\n",186,186);
printf("%c set (ornek olarak siyah 5, kirmizi 5 ve bir tane de mavi 5) veya ayni renklerden sirali sayi seti     %c\n",186,186);
printf("%c (ornek olarak kirmizi 7,8,9) olmalidir. Bir sette minimum 3 tas olmalidir. Ayni oyun sirasinda        %c\n",186,186);
printf("%c  hem elinizi acabilir hem de diger acilmis setlere eklemeler yapabilirsiniz. Mevcut acilmis taslara   %c\n",186,186);
printf("%c tas eklenebilmesi oyuncunun elini acmis olmasi gerekir. Eger oyuncu kendinden  onceki oyuncu,         %c\n",186,186);
printf("%c 4. oyuncunun sola attigi tasi almak istiyorsa bu aldigi tasi kullanmak zorundadir. Eger bu atilan     %c\n",186,186);
printf("%c tasi alan oyuncu henuz elini acmamis ise bu tasi aldigi zaman elini acmali ve actigi serilerin        %c\n",186,186);
printf("%c birinin icinde bu alinan tas da kullanilmis olmalidir. Eger bu alinan tas ile el acamiyorsaniz        %c\n",186,186);
printf("%c veya el acmadiysaniz sistem yandan tas cekemenize izin vermez.                                        %c\n",186,186);
printf("%c    Eli acmak icin bir baska yol da en az bes cift tas biriktirmektir. Ciftten anlasilan benzer iki    %c\n",186,186);
printf("%c tastir. Eger oyuncu bir kez cifte giderek oyun acarsa bu oyunda bir daha normal bir set acamaz. Ancak %c\n",186,186);
printf("%c diger oyuncularin acmis olduklari masadaki setlere tas ekleyebilir. Eger masadaki dort oyuncu da ayni %c\n",186,186);
printf("%c oyun icinde cift acarsa bu tur iptal olur ve yeni oyuna baslanir.                                     %c\n",186,186);

alt_cerceve1;
imza;
	while(i){
	cd = getch();
	cd = tolower(cd);
	switch (cd)
	{
	case x :
		
		i=0;
		break;
	
	default:
	break;
		
	}
	}
}

void lang_select(){
	ust_cerceve2;
    bos_satir_cerceve(5);
	printf("%c            select language  -  oyun dilini sec                                                        %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);
	printf("%c            [a] -> english (not finished)                                                              %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);
    printf("%c            [s] -> turkce                                                                              %c\n",186,186);
    bos_satir_cerceve(7);
	printf("%c            !! this game is playable with keyboard only, do not use mouse !!                           %c\n",186,186);
	printf("%c            !! bu oyun sadece klavye ile oynanabilir fareyi kullanmayiniz !!                           %c\n",186,186);
	bos_satir_cerceve(5);
    alt_cerceve1;
	int ga=1;
	while(ga){
		cd = getch();
		cd = tolower(cd);
		switch (cd)
		{
		case a : 
			lang_i=1;
			ga=0;
			break;
		case s :
			lang_i=0;
			ga=0;
			break;
		default:
		break;
		}
	}
}


void ekran_ayar(){
	system("cls");
    ust_cerceve2;
    bos_satir_cerceve(9);
	if(lang_i==0){
    printf("%c                                            EKRAN AYARLAMA                                             %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                  -- once konsolu tam ekran yapin --                                   %c\n",186,186);
    printf("%c                     -- sonra en alttaki yazi gorunmeyecek sekilde ekrani buyut --                     %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                  ",186); SetConsoleTextAttribute(ha, 4);
	printf("[ hazirsan herhangi bir tusa bas ]");
	SetConsoleTextAttribute(ha, 7); printf("                                   %c\n",186);
	printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                !! EARLY ACCESS - HATALAR CIKABILIR !!                                 %c\n",186,186);
	printf("%c                                               V 0.9.9                                                 %c\n",186,186);
	}
	else{
	printf("%c                                           SCREEN ADJUSTMENT                                           %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                -- first make the console full screen --                               %c\n",186,186);
    printf("%c                  -- then enlarge the screen so that the bottom text is not visible --                 %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                  ",186); SetConsoleTextAttribute(ha, 4);
	printf("[ press any key if you are ready ]");
	SetConsoleTextAttribute(ha, 7); printf("                                   %c\n",186);
	printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
	printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                 !! EARLY ACCESS - ERRORS MAY OCCUR !!                                 %c\n",186,186);
	printf("%c                                               V 0.9.9                                                 %c\n",186,186);	
	}
	bos_satir_cerceve(1);
   alt_cerceve1;
    printf("\n                    ///////////////////this line should not visible///////////////////                    \n");
    getche();
}


int oyun_yukleniyor(){
    
    system("cls");
    
    ust_cerceve2;
    bos_satir_cerceve(10);
	if(lang_i==0){
    printf("%c                                             OYUN YUKLENIYOR                                           %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                            LUTFEN BEKLEYINIZ                                          %c\n",186,186);
	}
	else{
	printf("%c                                                LOADING                                                %c\n",186,186);
    printf("%c                                                                                                       %c\n",186,186);
    printf("%c                                              please wait...                                           %c\n",186,186);	
	}
    bos_satir_cerceve(11);
    alt_cerceve1;
    imza;      
        usleep(200000); 
    return 0;
}
    

char* ana_menu_dugme="OYNA                                                              ";
int anamenu(){
    while(1){                                                                                                 

    system("cls");
	ust_cerceve2;
	bos_satir_cerceve(8);
	if(lang_i==0){ 
		if (sifirlama_sayaci==0 ) ana_menu_dugme="SINGLE-PLAYER                                                     ";
		else ana_menu_dugme="DEVAM ET                                      OYUNU SIFIRLA <- [h]";
		printf("%c            [w]  ->  MULTI-PLAYER (aktif degil)                                                        %c\n",186,186);
		printf("%c                                                                                                       %c\n",186,186);
		printf("%c            [a]  ->  %s                %c\n",186,ana_menu_dugme, 186);
		printf("%c                                                                                                       %c\n",186,186);
		printf("%c            [s]  ->  tutorial                                                                          %c\n",186,186);
		printf("%c                                                                                                       %c\n",186,186);  
		printf("%c            [d]  ->  skor tablosu                                                                      %c\n",186,186);
		printf("%c                                                                                                       %c\n",186,186);
		printf("%c            [f]  ->  oyun modunu degistir (aktif degil)                                                %c\n",186,186);
		printf("%c                                                                                                       %c\n",186,186);
		printf("%c            [x]  ->  oyundan cikis                                                                     %c\n",186,186);
	}  
	else{
		if (sifirlama_sayaci==0 ) ana_menu_dugme="SINGLE-PLAYER                                                     ";
		else ana_menu_dugme="CONTINUE                                         RESET GAME <- [h]";
		printf("%c            [w]  ->  MULTI-PLAYER (not available)                                                      %c\n",186,186);
		printf("%c                                                                                                       %c\n",186,186);
		printf("%c            [a]  ->  %s                %c\n",186,ana_menu_dugme, 186);
		printf("%c                                                                                                       %c\n",186,186);
		printf("%c            [s]  ->  tutorial                                                                          %c\n",186,186);
		printf("%c                                                                                                       %c\n",186,186);  
		printf("%c            [d]  ->  leaderboard                                                                       %c\n",186,186);
		printf("%c                                                                                                       %c\n",186,186);
		printf("%c            [f]  ->  change game mode (not available)                                                  %c\n",186,186);
		printf("%c                                                                                                       %c\n",186,186);
		printf("%c            [x]  ->  exit the game                                                                     %c\n",186,186);
	}
    bos_satir_cerceve(5);    
    alt_cerceve1;
    imza;

	

        cd = getch();
		cd = tolower(cd);
        switch(cd)
        {
        case h:
            if (sifirlama_sayaci>0 )
            {   
				sifirlama_sayaci=0;
				atik=0;
                temp_atik=0;
                orta_index=0;
				sondaki_sifir=0;
				satir_sonu_index=11;
				bosluk_devam=0;
				aabs=0;
				yan12=0;
				yan23=0;
				yan34=0;
				yan41=0;
				puan_cift=0;
				cift_seri_index=0;
				el_acma_siniri=34;
				cift_acma_siniri=5;
				pu_ci_sinir=34;
				puan_durumu0="[puan: ";
				as=0; 
				sc=0;
				tc=0;
				ob=0;
				os=0;
				doca=0;
				for (int i = 0; i < 4; i++) skor[i]=0;
				for (int i = 0; i < 4; i++) cift_tas_atilabilir[i]=0;
				for (int i = 0; i < 4; i++) tas_alinabilirlik[i]=0;
				for (int i = 0; i < 4; i++) puan[i]=0;
				for (int i = 0; i < 4; i++) cift[i]=0;
				for (int i = 0; i < 22; i++) bosluk_index[i]=0;	
				for (int i = 0; i < 28; i++) seriler[0][i]=0;
				for (int i = 0; i < 28; i++) seriler[1][i]=0;
				for (int i = 0; i < 28; i++) seriler[2][i]=0;
				for (int i = 0; i < 28; i++) seriler[3][i]=0;
				for (int i = 0; i < 100; i++) acilan_seriler[i][0]=0;
				for (int i = 0; i < 100; i++) acilan_seriler[i][1]=0;
				for (int i = 0; i < 100; i++) acilan_seriler[i][2]=0;
				for (int i = 0; i < 100; i++) acilan_seriler[i][3]=0;
				konsol_ekrani1="  [w] ->  ortadan tas cek                   tas isle  <- [q]  ";
				konsol_ekrani2="  [a] ->  yandan tas al                      seri ac  <- [e]  ";
				konsol_ekrani3="  [s] ->  seri diz (beta)                    cift ac  <- [r]  ";
				konsol_ekrani4="  [d] ->  cift diz                            tas at  <- [f]  ";
				
				konsol_ekrani5="[w] -> take a tile from the middle           add a tile <- [q]";
				konsol_ekrani6="[a] -> take a tile from the side            open series <- [e]";
				konsol_ekrani7="[s] -> go for series                         open pairs <- [r]";
				konsol_ekrani8="[d] -> go for pairs             put a tile to the right <- [f]";
				cheat_code[0]=32;
				x1=0;
				x2=0;
				x3=0;
                ayirma();
                break;
            }
            break;
        case x:
            exit(0);
            break;
        case a :
			ag=1;
			sifirlama_sayaci=0;
            oyun_yukleniyor();
            oyna(0);
            break;    
        case s : 
            nasiloynanir();
            break;
        case d:
            skor_tablosu();
            break;
		case f:
			//oyun_modu_secme();
			break;
		case w:
			//online
			break;
        default:
            break;
        }
    }

    return 0;
}

	
int main()
{

    ha=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	GetConsoleScreenBufferInfo(ha, &csbiInfo);
	wOldColorAttrs = csbiInfo.wAttributes;
	
	time(&now);
	struct tm *local = localtime(&now);
	
	hours = local->tm_hour;         // get hours since midnight (0-23)
	minutes = local->tm_min;        // get minutes passed after the hour (0-59)
	seconds = local->tm_sec;        // get seconds passed after a minute (0-59)

	day = local->tm_mday;            // get day of month (1 to 31)
	month = local->tm_mon + 1;      // get month of year (0 to 11)
	year = local->tm_year + 1900;   // get year since 1900
    lang_select();
    ekran_ayar();
	//oyun_modu_secme();
	ayirma();

    for (int i = 0; i < 22; i++) bosluk_index[i]=0;	

	anamenu();

	printf("\n[ bunu goruyorsaniz bir hata olustu demektir ]");
	printf("\n[ gelisitiriciye durumu bildiriniz lutfen    ]");
	printf("\n[ kapatmak icin her hangi bir tusa basiniz   ]");
  
    getch();
	
    return 0;
}
