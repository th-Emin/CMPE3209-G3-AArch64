/* Muhammet Emin Toraman, 5001230008, G3 */
#define N 32 // N'yi global arr tanımlayabilmek için variable olarak tanımlanmadı
const int SID = 1230008; // 5001230008 (2^31 - 1)'i aştığı için son 9 hanesi
const unsigned int R = 26;
const unsigned int B = 65;
const unsigned int K = 184;

//Dizi
unsigned int arr[N];

//Çıktı
unsigned int checksum = 0;
char decrypt_ok = 1;

unsigned int rotl(unsigned int value, unsigned int shift){
  return (value << shift) | (value >> (sizeof(value) * 8 - shift));
}

int main() {
  //Dizi üretme
  unsigned int x = SID;
  unsigned int i = 0;
  while(i < N) {
    x = 1664525 * x + 1013904223;
    arr[i++] = ((x >> 16) % R) + B;
  }
  
  //Diziyi K anahtarıyla şifreleme
  i = 0;
  while(i < N) {
    arr[i] = arr[i] ^ K;
    i++;
  }
  
  //Checksum Hesabı
  i = 0;
  while(i < N) {
    checksum = rotl(checksum, 1) + arr[i++];
  }
  
  //Şifreyi çözeme
  x = SID;
  i = 0;
  while(i < N){
    arr[i] = arr[i] ^ K;
    
    x = 1664525 * x + 1013904223;
    if(arr[i] != (((x >> 16) % R) + B)) decrypt_ok = 0;
    i++;
  }
  
  return 0;
}
