#include <iostream> 
#include <conio.h> 
using namespace std;
 
struct data{ 
 
bool ketemu,nolsemua; 
int matrix[10] [10]; 
int jumlah_simpul,jumlah_sisi,asal,tujuan; 
}; 
data data; 
 
 void jumlahsimpul(){ 
 cout<<"Jumlah Simpul  : "; 
 cin>>data.jumlah_simpul; 
} 
 void jumlahsisi(){ 
 cout<<"Jumlah Sisi    : "; 
 cin>>data.jumlah_sisi; 
} 
void call(){ 
 int i ,j; 
 for (i=1;i<=data.jumlah_simpul;i++){ 
  
 for (j=1;j<=data.jumlah_simpul;j++){ 
  
 data.matrix[i][j]=0; 
} 
} 
} 
void simpul(){ 
 int i; 
 for (i=1;i<=data.jumlah_sisi;i++){ 
 cout<<"Simpul Asal    : "; 
 cin>>data.asal; 
 cout<<"Simpul Tujuan  : "; 
 cin>>data.tujuan; 
 data.matrix[data.asal][data.tujuan]=1; 
 data.matrix[data.tujuan][data.asal]=1; 
 } 
} 
void telusurgraph(){ 
 int i,j; 
 i=1;data.nolsemua=false; 
 while (i<=data.jumlah_simpul && !data.nolsemua){ 
 j=1;data.ketemu=false; 
 while (j<=data.jumlah_simpul && !data.ketemu){ 
 if (data.matrix[i][j]==1) 
 data.ketemu=true; 
 else 
 j++; 
} 
 if (!data.ketemu) 
 data.nolsemua=true; 
 else 
 i++; 
} 
 
 if(data.nolsemua){ 
 cout<<"\n\nGraf Tidak Terhubung"; 
 } 
 else{ 
 cout<<"\n\nGraf Terhubung"; 
 }  
} 
 
 
int main(){ 
 int i,j; 
 jumlahsimpul(); 
 jumlahsisi(); 
 call(); 
 simpul(); 
 telusurgraph(); 
 
getch(); 
 
}
