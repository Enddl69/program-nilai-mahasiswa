#include <iostream.h>   //Mengenali fungsi cout, cin
#include <conio.h>      //Mengenali fungsi getche(), clrscr()
#include <windows.h>    //Mengenali fungsi system(), HANDLE, MessageBox
#include <iomanip.h>    //Mengenali fungsi setw()

//Fungsi Rekursif Loading...
void loading(char* text)
{
clrscr();
gotoxy(21,23);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(21,24);cout<<"�";gotoxy(79,24);cout<<"�";
gotoxy(21,25);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(23,24);cout<<text<<" ";
for(int x=0;x<40;x++){cout<<"�";Sleep(30);}
clrscr();
}

//Fungsi Rekursif Ubah Warna Text
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}

//Template Normal
void normal()
{
clrscr();
gotoxy(50,5); cout<<"�敲";gotoxy(41,6); cout<<"�袴袴�   � �";
gotoxy(41,7); cout<<"� 藁菰藁뻠 鵑�袴箇袴�";gotoxy(41,8); cout<<"� �軻 �믄�  획�뻠�� �";
gotoxy(41,9); cout<<"� � � 볶 � � 뵌성뵌뭔";gotoxy(41,10);cout<<"훤� 훤셜菰菰菰袴迦 횝";
gotoxy(20,11);cout<<" �袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴敲";gotoxy(21,12);cout<<"�";
gotoxy(20,13);cout<<" 훤袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴�";gotoxy(61,12);cout<<"�";
}

//Structure / Record
typedef struct
{
char nama[20],nim[10];
int word,excel,popo,total,rata;
} ftikom;

ftikom mahasiswa[50];
int unmul;

void viewhasil();

//--------------------- Program Utama (Main Program) --------------------------//
int main()
{
char user[20],pwd[10],tertarik,ulang,exit,chapus[2],cubah[2];
int pilihan,ihapus,iubah,FULL;

system("title Created by Nupay Mawbowo from F-TIKOM B");
MessageBox(NULL,"Join with us at http://ftikom-unmul.nstars.org","Welcome Bray!!!",MB_ICONINFORMATION | MB_OK);

setcolor(15);
gotoxy(49,2); cout<<"�敲";gotoxy(40,3); cout<<"�袴袴�   � �";
gotoxy(40,4); cout<<"� 藁菰藁뻠 鵑�袴箇袴�";
gotoxy(40,5); cout<<"� �軻 �믄�  획�뻠�� �";
gotoxy(40,6); cout<<"� � � 볶 � � 뵌성뵌뭔";
gotoxy(20,7); cout<<"   �袴袴袴袴袴袴�   훤� 훤셜菰菰菰袴迦 횝";
gotoxy(20,9); cout<<" � 훤袴袴袴袴袴暠                        �";
gotoxy(20,10);cout<<" �           旼컴컴컴컴컴컴컴컴컴컴컴�   �";
gotoxy(20,12);cout<<" �           읕컴컴컴컴컴컴컴컴컴컴컴�   �";
gotoxy(20,13);cout<<" �           旼컴컴컴컴컴컴컴컴컴컴컴�   �";
gotoxy(20,15);cout<<" �           읕컴컴컴컴컴컴컴컴컴컴컴�   �";
gotoxy(20,8); cout<<" �攷            勁袴袴袴袴袴袴袴袴袴袴袴敲";
gotoxy(20,18);cout<<" 훤袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴�";
gotoxy(20,11);cout<<" �           �                       �   �";
gotoxy(20,14);cout<<" �           �                       �   �";
gotoxy(21,16);cout<<"�";gotoxy(61,16);cout<<"�";gotoxy(45,16);cout<<"� Nupay Mawbowo";
gotoxy(21,17);cout<<"�";gotoxy(61,17);cout<<"�";

setcolor(8); // Memanggil fungsi setcolor
gotoxy(25,8);cout<<"Login Menu";
gotoxy(24,11);cout<<"Username";
gotoxy(24,14);cout<<"Password";
gotoxy(37,17);cout<<"ftikom-unmul.nstars.org";

setcolor(15);
gotoxy(35,11);cin.getline(user,20);
gotoxy(35,14);cin>>pwd;

//----------------------------- Loading Section ---------------------------------
for(int a=0;a<101;a++)
{
system("cls");normal();gotoxy(20,12);cout<<" � ";
if(a<=30) {cout<<"Connecting... "<<a<<"%";}
else if(a<=50) {cout<<"Checking username... "<<a<<"%";}
else if(a<=70) {cout<<"Checking password... "<<a<<"%";}
else {cout<<"Logging in \""<<user<<"\"... "<<a<<"%";}
}

//--------------------------- End of Loading Section ----------------------------

//----------------------------- Checking password -------------------------------
if(strcmp(pwd,"ftikom")!=0)
{
normal();
gotoxy(23,12);cout<<"Fake password, try again later . . .";
getche();
goto keluar;
}

else
normal();
gotoxy(23,12);cout<<"Login Berhasil...";
gotoxy(23,12);system("pause");

//---------------------------- End of Checking password -------------------------

//---------------------------- Homepage -----------------------------------------
clrscr();
gotoxy(45,23);cout<<"�   Copyright � by Nupay Mawbowo �";Sleep(100);
gotoxy(45,24);cout<<"� http://ftikom-unmul.nstars.org �";Sleep(100);
gotoxy(2,6); cout<<"謐� Team Member 촐袴袴袴袴袴袴袴袴沽 �     NOVAY   BOWONOVAYMAWBOWONOVA     �";Sleep(100);
gotoxy(2,8); cout<<"� 1. Novianto Rahmadi (1015015072) � �   BOWON       WBOWONOVAYMAWBOWONOV   �";Sleep(100);
gotoxy(2,10);cout<<"� 2. Mutsla Khalista  (1015015082) � � ;OVAYM        VAYMAWBOWONOVAYMAWBOW; �";Sleep(100);
gotoxy(2,12);cout<<"� 3. Sutanto Purwo P. (1015015094) � � ;WONOVAY    OWO  V  YMA       VAYBO; �";Sleep(100);
gotoxy(2,14);cout<<"� 4. Farid Rahman     (1015015060) � �  BO  NOVAYMAWBOWONOVAYMAWBOWONOVAYM  �";Sleep(100);
gotoxy(45,25);cout<<"익袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴梏";Sleep(100);
gotoxy(45,22);cout<<"謐袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴沽";Sleep(100);
gotoxy(39,20);cout<<"�        ';ONOVAYMAWBOWONOVAY'         �";Sleep(100);
gotoxy(39,21);cout<<"白複複複複複複複複複複複複複複複複複複蔔";Sleep(100);
gotoxy(2,2); cout<<"謐袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴沽 幡賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賞";Sleep(100);
gotoxy(2,16);cout<<"익袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴梏 �    VA   'BOWONOVAYMAWBOWONOV   AW    �";Sleep(100);
gotoxy(2,17);cout<<"謐袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴沽 �     BO                        WO     �";Sleep(100);
gotoxy(2,18);cout<<"� Apa Anda tertarik (y/n) ? [   ]  � �      NOV                    WO'      �";Sleep(100);
gotoxy(2,11);cout<<"�                      컴컴컴컴컴  � � ONOVAYM      ONO A MAW         MAWBO �";Sleep(100);
gotoxy(2,13);cout<<"�                      컴컴컴컴컴  � � 'WONOVAYMAWBOW  OVA  AWBOWONOVAYMAW' �";Sleep(100);
gotoxy(2,9); cout<<"�                      컴컴컴컴컴  � �  AYMAW         MAWBOWONOVAYMAWBOWON  �";Sleep(100);
gotoxy(2,15);cout<<"�                      컴컴컴컴컴  � �   AW  WONOVAYMAWBOWONOVAYMAWBO  NO   �";Sleep(100);
gotoxy(2,7); cout<<"� 익袴袴袴袴袴袴�                  � �    VAYMA     NOVAYMAWBOWONOVAYMAW    �";Sleep(100);
gotoxy(2,19);cout<<"익袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴梏 �       'NOVAYMAWBOWONOVAYMAWBO        �";Sleep(100);
gotoxy(2,4); cout<<"익袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴梏 �       ,VAYMAWBOWONOVAYMAWBOWO,       �";Sleep(100);
gotoxy(2,5); cout<<"  謐袴袴袴袴袴袴�                    �      MAWBO ONOVAYMAWBOWONOVAYMA      �";Sleep(100);
gotoxy(2,3); cout<<"� >> Welcome ";gotoxy(37,3);cout<<"� �         ,NOVAYMAWBOWONOVAYM,         �";Sleep(100);
gotoxy(15,3);cout<<"\""<<user<<"\"... <<";Sleep(100);

gotoxy(4,10);setcolor(2);cout<<"2. Mutsla Khalista  (1015015082)";Sleep(100);
gotoxy(4,12);cout<<"3. Sutanto Purwo P. (1015015094)";Sleep(100);
gotoxy(4,14);cout<<"4. Farid Rahman     (1015015060)";Sleep(100);

gotoxy(4,8);setcolor(10);cout<<"1. Novianto Rahmadi (1015015072)";
gotoxy(40,3); cout<<"         ,NOVAYMAWBOWONOVAYM,         ";Sleep(100);gotoxy(40,4); cout<<"       ,VAYMAWBOWONOVAYMAWBOWO,       ";Sleep(100);gotoxy(40,5); cout<<"      MAWBO ONOVAYMAWBOWONOVAYMA      ";Sleep(100);gotoxy(40,6); cout<<"     NOVAY   BOWONOVAYMAWBOWONOVA     ";Sleep(100);
gotoxy(40,7); cout<<"    VAYMA     NOVAYMAWBOWONOVAYMAW    ";Sleep(100);gotoxy(40,8); cout<<"   BOWON       WBOWONOVAYMAWBOWONOV   ";Sleep(100);gotoxy(40,9); cout<<"  AYMAW         MAWBOWONOVAYMAWBOWON  ";Sleep(100);gotoxy(40,10);cout<<" ;OVAYM        VAYMAWBOWONOVAYMAWBOW; ";Sleep(100);
gotoxy(40,11);cout<<" ONOVAYM      ONO A MAW         MAWBO ";Sleep(100);gotoxy(40,12);cout<<" ;WONOVAY    OWO  V  YMA       VAYBO; ";Sleep(100);gotoxy(40,13);cout<<" 'WONOVAYMAWBOW  OVA  AWBOWONOVAYMAW' ";Sleep(100);gotoxy(40,14);cout<<"  BO  NOVAYMAWBOWONOVAYMAWBOWONOVAYM  ";Sleep(100);
gotoxy(40,15);cout<<"   AW  WONOVAYMAWBOWONOVAYMAWBO  NO   ";Sleep(100);gotoxy(40,16);cout<<"    VA   'BOWONOVAYMAWBOWONOV   AW    ";Sleep(100);gotoxy(40,17);cout<<"     BO                        WO     ";Sleep(100);gotoxy(40,18);cout<<"      NOV                    WO'      ";Sleep(100);
gotoxy(40,19);cout<<"       'NOVAYMAWBOWONOVAYMAWBO        ";Sleep(100);gotoxy(40,20);cout<<"        ';ONOVAYMAWBOWONOVAY'         ";Sleep(100);

//---------------------------- End of Homepage ----------------------------------

setcolor(15);
gotoxy(32,18);cin>>tertarik;
if(tertarik!='y') { goto keluar; }
else
loading("Please wait...");

//------------------------------ Menu Awal --------------------------------------
menu:
do
{
clrscr();
gotoxy(8,44);cout<<"|_?Sex"<<endl;Sleep(70);cout<<"       |_ ?Sex.";Sleep(70);gotoxy(7,43);cout<<"?Sexyy";Sleep(70);gotoxy(7,42);cout<<"?Sexy?";Sleep(70);gotoxy(8,41);cout<<"?Sex";Sleep(70);gotoxy(8,40);cout<<"?Sex";Sleep(70);gotoxy(8,39);cout<<"?Sex";Sleep(70);gotoxy(7,38);cout<<"?Sexy";Sleep(70);
gotoxy(7,37);cout<<"?Sexy";Sleep(70);gotoxy(7,36);cout<<"?Sexy?";Sleep(70);gotoxy(7,35);cout<<"?Sexy?";Sleep(70);gotoxy(7,34);cout<<"?Sexy?";Sleep(70);gotoxy(8,33);cout<<"?Sexy?";Sleep(70);gotoxy(8,32);cout<<"?Sexy?Se";Sleep(70);gotoxy(9,31);cout<<"?Sexy?Sexy";Sleep(70);gotoxy(9,30);cout<<"?Sexy?Sexy?R";Sleep(70);
gotoxy(9,29);cout<<"?Sexy?Sexy?Sexy";Sleep(70);gotoxy(10,28);cout<<"?Sexy?R ?Sexy?Sexy";Sleep(70);gotoxy(10,27);cout<<"?Sexy?R    ?Sexy?Sexy";Sleep(70);gotoxy(10,26);cout<<"?Sexy?Se     ?Sexy?Sexy?";Sleep(70);gotoxy(10,25);cout<<"?Sexy?Se       ?Sexy?Sexy?";Sleep(70);gotoxy(9,24);cout<<"?Sexy?Sexy    ?Sexy?Sexy?Se";Sleep(70);
gotoxy(8,23);cout<<"?Sexy?Sexy?Sexy?Sexy?Sexy?R";Sleep(70);gotoxy(8,22);cout<<"?Sexy?Sexy?Sexy?Sexy?Sexy";Sleep(70);gotoxy(8,21);cout<<"?Sexy?Sexy?Sexy?Sexy?";Sleep(70);gotoxy(8,20);cout<<"?Sexy?Sexy?Sexy?Se";Sleep(70);gotoxy(9,19);cout<<"?Sexy?Sexy?Sex";Sleep(70);gotoxy(8,18);cout<<"?Sexy?Sexy?Sex";Sleep(70);
gotoxy(7,17);cout<<"?Se  ?Sexy?Sexy";Sleep(70);gotoxy(6,16);cout<<"?Se    ?Sexy?Sex";Sleep(70);gotoxy(5,15);cout<<"?Sex    ?Sexy?Sexy";Sleep(70);gotoxy(4,14);cout<<"?Sex     ?Sexy?Sexy";Sleep(70);gotoxy(4,13);cout<<"?Sex     ?Sexy?Sexy";Sleep(70);gotoxy(4,12);cout<<"?Sex    ?Sexy?Sexy?";Sleep(70);
gotoxy(2,11);cout<<"?Sexy?  ?Sexy?Sexy?Sex";Sleep(70);gotoxy(1,10);cout<<"?Sexy?Sexy?Sexy?Sexy?Sex";Sleep(70);gotoxy(1,9);cout<<"?Sexy?Sexy?Sexy?Sexy?Se";Sleep(70);gotoxy(1,8);cout<<"?Sexy?Sexy?Sexy?Sexy";Sleep(70);gotoxy(2,7);cout<<"?Sexy?Sexy?Sexy?";Sleep(70);gotoxy(2,6);cout<<"?Sexy?Sexy?Se";Sleep(70);
gotoxy(2,5);cout<<"?Sexy?Sexy?Se";Sleep(70);gotoxy(3,4);cout<<"?Sexy?Sexy?Se";Sleep(70);gotoxy(4,3);cout<<"?Sexy?Sexy?S";Sleep(70);gotoxy(4,2);cout<<"?Sexy?Sexy?";Sleep(70);

gotoxy(64,3); cout<<"�敲";Sleep(10);gotoxy(55,4); cout<<"�袴袴�   � �";Sleep(10);gotoxy(55,5); cout<<"� 藁菰藁뻠 鵑�袴箇袴�";Sleep(10);gotoxy(55,6 );cout<<"� �軻 �믄�  획�뻠�� �";Sleep(10);
gotoxy(55,7);cout<<"� � � 볶 � � 뵌성뵌뭔";Sleep(10);gotoxy(55,8 );cout<<"훤� 훤셜菰菰菰袴迦 횝";Sleep(10);
gotoxy(40,9); cout<<"�袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴�";Sleep(10);gotoxy(40,10);cout<<"�   PROGRAM PENILAIAN MAHASISWA    �";Sleep(10);gotoxy(40,11);cout<<"�     F-TIKOM TRAINING CENTER      �";Sleep(10);gotoxy(40,12);cout<<"�  http://ftikom-unmul.nstars.org  �";Sleep(10);
gotoxy(40,13);cout<<"勁袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴攷";Sleep(10);gotoxy(40,14);cout<<"� Menu Program Penilaian Mahasiswa �";Sleep(10);gotoxy(40,15);cout<<"�                                  �";Sleep(10);gotoxy(40,16);cout<<"�  1. Tambah Mahasiswa [    ]      �";Sleep(10);
gotoxy(40,17);cout<<"�  2. Edit Data                    �";Sleep(10);gotoxy(40,18);cout<<"�  3. Hapus Data                   �";Sleep(10);gotoxy(40,19);cout<<"�  4. Urutkan Data                 �";Sleep(10);gotoxy(40,20);cout<<"�  5. Cari Data                    �";Sleep(10);
gotoxy(40,21);cout<<"�  6. View Hasil                   �";Sleep(10);gotoxy(40,22);cout<<"�  7. Tutup Program                �";Sleep(10);gotoxy(40,23);cout<<"�                                  �";Sleep(10);gotoxy(40,24);cout<<"� Pilih Menu = [   ]               �";Sleep(10);
gotoxy(40,25);cout<<"훤袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴暠";Sleep(10);

/*Sekedar fungsi untuk menentukan jumlah Data mahasiswa yang telah
dimasukkan. Dan Apabila Inputan data mahasiswa telah mencapai batas (50),
maka index akan berubah menjadi FULL.
*/

int i=0;
FULL=50;
while(0!=mahasiswa[i].nama[0]) {++i;}
if(i<FULL)
{gotoxy(64,16);cout<<setw(3)<<i;}
else
{gotoxy(40,16);cout<<"�  1. Tambah Mahasiswa [FULL]      �";}

gotoxy(57,24);cin>>pilihan;
loading("Bentar Bray..."); //Memanggil fungsi loading()

//----------------------------- Case Menu Program -------------------------------
switch(pilihan)
{
case 1: //Menu Tambah Data Mahasiswa

for(i=0; i<unmul; i++)
clrscr();
ubahdata:
gotoxy(1,38);cout<<"                 .7X;";Sleep(70);gotoxy(1,37);cout<<"              .MMMM@MMMS"<<endl;Sleep(70);gotoxy(1,36);cout<<"             XMMMMM   ZMM";Sleep(70);gotoxy(1,35);cout<<"             MirMMMM    MM";Sleep(70);
gotoxy(1,34);cout<<"             M  MMMM    WM";Sleep(70);gotoxy(1,33);cout<<"             :WBMMMi    MM";Sleep(70);gotoxy(1,32);cout<<"               ,:      :M:";Sleep(70);gotoxy(1,31);cout<<"                       MB";Sleep(70);
gotoxy(1,30);cout<<"                      MM";Sleep(70);gotoxy(1,29);cout<<"          7WMMMMMMWr MM";Sleep(70);gotoxy(1,28);cout<<"       ,MMMa;.  .;0MMM";Sleep(70);gotoxy(1,27);cout<<"      MMM     :7.  XM8M0";Sleep(70);
gotoxy(1,26);cout<<"    iMM:    MMMa: iM; iMM";Sleep(70);gotoxy(1,25);cout<<"   rMM;   iMM:    M@   MM;";Sleep(70);gotoxy(1,24);cout<<"   MMM    MM7    MM    MMB";Sleep(70);gotoxy(1,23);cout<<"  rMMM   iMM2   MM     MM0";Sleep(70);
gotoxy(1,22);cout<<"  ZMMM   .MMMi 0M    ,MMM";Sleep(70);gotoxy(1,21);cout<<"  ZBMM:   2MMMMMr  XMMMMZ";Sleep(70);gotoxy(1,20);cout<<"  2ZMMM    8MMMMMMMMMMMa";Sleep(70);gotoxy(1,19);cout<<"  :Z@MMZ    SMMMMMMMMM.";Sleep(70);
gotoxy(1,18);cout<<"   iXMMM7   MM ;Xr;i";Sleep(70);gotoxy(1,17);cout<<"    :aMMMi MM";Sleep(70);gotoxy(1,16);cout<<"    .raMMMMM";Sleep(70);gotoxy(1,15);cout<<"     :;2MMM8";Sleep(70);
gotoxy(1,14);cout<<"      7;SMMM.";Sleep(70);gotoxy(1,13);cout<<"       S:XMMM";Sleep(70);gotoxy(1,12);cout<<"       MM,8MMa";Sleep(70);gotoxy(1,11);cout<<"      MM riMMM";Sleep(70);
gotoxy(1,10);cout<<"     rM   2SMM";Sleep(70);gotoxy(1,9);cout<<"     MM   ,SMM";Sleep(70);gotoxy(1,8);cout<<"    XMW    7MM";Sleep(70);gotoxy(1,7);cout<<"    MMB    XMM";Sleep(70);
gotoxy(1,6);cout<<"    WMM    ZM,";Sleep(70);gotoxy(1,5);cout<<"    2MM.   MM";Sleep(70);gotoxy(1,4);cout<<"    aZMMa;MM";Sleep(70);gotoxy(1,3);cout<<"    77BMMMM";Sleep(70);
gotoxy(1,2);cout<<"    7X0MM";Sleep(70);gotoxy(1,1);cout<<"     .SS:";Sleep(70);

gotoxy(32,1);cout<<"�敲";Sleep(30);gotoxy(23,2);cout<<"�袴袴�   � �";Sleep(30);
gotoxy(23,3);cout<<"� 藁菰藁뻠 鵑�袴箇袴�";Sleep(30);gotoxy(23,4);cout<<"� �軻 �믄�  획�뻠�� �";Sleep(30);
gotoxy(23,5);cout<<"� � � 볶 � � 뵌성뵌뭔";Sleep(30);gotoxy(23,6);cout<<"훤� 훤셜菰菰菰袴迦 횝";Sleep(30);
gotoxy(23,7); cout<<"�袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴敲";Sleep(30);
gotoxy(23,8); cout<<"�        >> TAMBAH DATA MAHASISWA <<        �";Sleep(30);
gotoxy(23,9); cout<<"勁袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴�";Sleep(30);
gotoxy(23,10);cout<<"�                          No.Index : [  ]  �";Sleep(30);
gotoxy(23,11);cout<<"�                                           �";Sleep(30);
gotoxy(23,12);cout<<"�   � N A M A  : [                      ]   �";Sleep(30);
gotoxy(23,13);cout<<"�                                           �";Sleep(30);
gotoxy(23,14);cout<<"�   � N I M    : [            ]             �";Sleep(30);
gotoxy(23,15);cout<<"�                                           �";Sleep(30);
gotoxy(23,16);cout<<"勁袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴�";Sleep(30);
gotoxy(23,17);cout<<"�   NILAI PEROLEHAN                         �";Sleep(30);
gotoxy(23,18);cout<<"�   컴컴컴컴컴컴컴�                         �";Sleep(30);
gotoxy(23,19);cout<<"�     � Microsoft Word       : [    ]       �";Sleep(30);
gotoxy(23,20);cout<<"�                                           �";Sleep(30);
gotoxy(23,21);cout<<"�     � Microsoft Excel      : [    ]       �";Sleep(30);
gotoxy(23,22);cout<<"�                                           �";Sleep(30);
gotoxy(23,23);cout<<"�     � Microsoft Powerpoint : [    ]       �";Sleep(30);
gotoxy(23,24);cout<<"�                                           �";Sleep(30);
gotoxy(23,25);cout<<"훤袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴�";Sleep(30);

gotoxy(62,10);cout<<setw(2)<<(i+1);
cin.ignore();
gotoxy(42,12);cin.getline(mahasiswa[unmul].nama,30);
gotoxy(42,14);cin>>mahasiswa[unmul].nim;

l1:gotoxy(56,19);cin>>mahasiswa[unmul].word;
if((mahasiswa[unmul].word>100)||(mahasiswa[unmul].word<0))
	{
	gotoxy(34,26);cout<<"* Maaf!, Batas hanya 0-100 Poin.";
	goto l1;
	}
l2:gotoxy(56,21);cin>>mahasiswa[unmul].excel;
if((mahasiswa[unmul].excel>100)||(mahasiswa[unmul].excel<0))
	{
	gotoxy(34,26);cout<<"* Maaf!, Batas hanya 0-100 Poin.";
	goto l2;
	}
l3:gotoxy(56,23);cin>>mahasiswa[unmul].popo;
if((mahasiswa[unmul].popo>100)||(mahasiswa[unmul].popo<0))
	{
	gotoxy(34,26);cout<<"* Maaf!, Batas hanya 0-100 Poin.";
	goto l3;
	}

unmul++;

loading("Setumat Wal..."); //Memanggil fungsi loading

normal();  //Memanggil fungsi normal()
gotoxy(23,12);cout<<"Data telah berhasil ditambahkan!";
getche();
goto menu;


case 2 : //Menu Edit Data Mahasiswa

if(0==mahasiswa->nama[0])
{
normal();
gotoxy(23,12);cout<<"Maaf, Data masih kosong!";
getche();
goto menu;
}
else

viewhasil();
cout<<"Anda ingin mengubah data Mahasiswa (y/n) ? ";cin>>ulang;
if(ulang=='n'){goto menu;}

do
{
cout<<"   Masukkan No.Index yang ingin diubah = ";cin>>cubah;
iubah=atoi(cubah);
iubah--;
}while(iubah<0 || iubah>=unmul);

for(i=iubah; i<=unmul; i++)
{
strcpy(mahasiswa[i].nama, mahasiswa[i+1].nama);
strcpy(mahasiswa[i].nim, mahasiswa[i+1].nim);

unmul--;

goto ubahdata;
}

case 3 : //Menu Hapus Data

if(0==mahasiswa->nama[0])
{normal();
gotoxy(23,12);cout<<"Maaf, Data masih kosong!";
getche();
goto menu;
}
else
{
viewhasil();

cout<<"Anda ingin menghapus data Mahasiswa (y/n) ? ";cin>>ulang;
if(ulang=='n'){goto menu;}

do
{
cout<<"   Masukkan No.Index data yang akan dihapus = ";cin>>chapus;

ihapus=atoi(chapus);
ihapus--;
}while(ihapus<0 || ihapus>=unmul);

for(i=ihapus; i<=unmul; i++)
{
strcpy(mahasiswa[i].nama, mahasiswa[i+1].nama);
strcpy(mahasiswa[i].nim, mahasiswa[i+1].nim);
}
unmul--;

loading("Muadang Gay...");

normal();
gotoxy(23,12);cout<<"Data telah berhasil dihapus!";
getche();
}
goto menu;

case 4: //Menu Sorting
normal();
gotoxy(23,12);cout<<"Maaf, menu sorting belum berfungsi!";
getche();
goto menu;

case 5: //Menu Pencarian Data
normal();
gotoxy(23,12);cout<<"Maaf, menu pencarian belum berfungsi!";
getche();
goto menu;

case 6: //Menu View Hasil
{

if(0==mahasiswa->nama[0])
{normal();
gotoxy(23,12);cout<<"Maaf, Data masih kosong!";
getche();
goto menu;
}
else
viewhasil();

/*---------------------------- I N T I   T U G A S --------------------------------------*/

//Mencari Rata-Rata
{
double r,b;
r = 0;   //variabel r diasumsikan sebagai total keseluruhan nilai total mahasiswa
for (int j=0;j<=unmul;j++)
{r = r + mahasiswa[j].total;}
{b = r/i;}
cout<<"  Rata-rata dari total keseuruhan nilai adalah "<<r<<"/"<<i<<" = "<<b<<endl;
};

//Mencari Nilai Max atau Min
{
 int max,min;
 max = mahasiswa[0].total;
 min = mahasiswa[1].total;
 for (int j=0;j<=unmul-1;j++)
 {
  if (mahasiswa[j].total>max)
  max = mahasiswa[j].total;
  if (mahasiswa[j].total<min)
  min = mahasiswa[j].total;
 };
cout<<"  Nilai Tertinggi diperoleh dengan total poin "<<max<<"."<<endl;
cout<<"  Nilai Terendah diperoleh dengan poin "<<min<<"."<<endl;
}

/*---------------------------- I N T I   T U G A S --------------------------------------*/

}
getche();
goto menu;

case 7: //Menu Keluar
normal();
gotoxy(23,12);cout<<"Tutup Program (y/n)? [   ]";
gotoxy(46,12);cin>>exit;
if(exit!='n'){ goto keluar;}
else
break;

default: //Menu Default
normal();
gotoxy(61,12);cout<<"�";gotoxy(23,12);cout<<"Maaf, Menu tidak tersedia...";
getche();
goto menu;
}

normal();
gotoxy(23,12);cout<<"Kembali ke Menu Utama (y/n)? [   ]";
gotoxy(54,12);cin>>ulang;
}while(ulang == 'y');
//----------------------- End Of Case Menu Program ------------------------------

keluar:
MessageBox(NULL,"Copyright � by Nupay Mawbowo"," Terima Kasih Bray xD.",MB_ICONINFORMATION | MB_OK);
}

void viewhasil()
{
gotoxy(2,1);cout<<"�袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴�";
gotoxy(2,2);cout<<"�          �敲                                                               �";
gotoxy(2,3);cout<<"� �袴袴�   � �                                                               �";
gotoxy(2,4);cout<<"� � 藁菰藁뻠 鵑�袴箇袴�                         DAFTAR REKAP NILAI PRAKTIKUM �";
gotoxy(2,5);cout<<"� � �軻 �믄�  획�뻠�� �                               FTIKOM TRAINING CENTER �";
gotoxy(2,6);cout<<"� � � � 볶 � � 뵌성뵌뭔                               UNIVERSITAS MULAWARMAN �";
gotoxy(2,7);cout<<"� 훤� 훤셜菰菰菰袴迦 횝                       http://ftikom-unmul.nstars.org �";
gotoxy(2,8);cout<<"勁袴藁袴袴袴袴袴袴袴袴袴箇袴袴袴袴袴藁袴袴袴袴袴袴袴袴袴袴袴藁袴袴袴藁袴袴袴攷";
gotoxy(2,9); cout<<"�    �                  �            �    NILAI PEROLEHAN    �       �       �";
gotoxy(2,10);cout<<"� NO �  NAMA MAHASISWA  �     NIM    勁袴袴袴箇袴袴袴箇袴袴袴� TOTAL � RATA2 �";
gotoxy(2,11);cout<<"�    �                  �            �  WORD � EXCEL �   PP  �       �       �";
gotoxy(2,12);cout<<"勁袴誥袴袴袴袴袴袴袴袴袴胱袴袴袴袴袴誥袴袴袴誥袴袴袴誥袴袴袴誥袴袴袴誥袴袴袴攷"<<endl;
for(int i=0; i<unmul; i++)
{
mahasiswa[i].total=mahasiswa[i].word+mahasiswa[i].excel+mahasiswa[i].popo;
mahasiswa[i].rata=mahasiswa[i].total/3;

cout<<" �"<<setw(3)<<(i+1)<<" �"<<setw(17)<<mahasiswa[i].nama<<" �"<<setw(11)<<mahasiswa[i].nim<<" �"<<setw(5)<<mahasiswa[i].word<<"  �"<<
setw(5)<<mahasiswa[i].excel<<"  �"<<setw(5)<<mahasiswa[i].popo<<"  �"<<setw(5)<<mahasiswa[i].total<<"  �"<<setw(6)<<mahasiswa[i].rata<<" �"<<endl;
}
cout<<" 훤袴菰袴袴袴袴袴袴袴袴袴姦袴袴袴袴袴菰袴袴袴菰袴袴袴菰袴袴袴菰袴袴袴菰袴袴袴暠"<<endl<<endl;
}
