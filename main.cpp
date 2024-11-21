#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int main() {
  srand(0);
  int n,i,itempomin;
  do 
  {
    cout << "Ins numero atleti: ";
    cin >> n;
  }while(n <= 0);
  vector<string> nomi(n);
  vector<string> nazionali(n);
  vector<float> tempi(n);
  
  for(i = 0; i < n; i++) 
  {
    cout << "Ins nome atleta & nazionale: ";
    cin >> nomi[i] >> nazionali[i];
    tempi[i] = (1000 + rand() % 501) / 100.0;
  }

  for(i = 0; i < n; i++) 
  {
    cout << "Nome: " << nomi[i] << ", nazionale: " << nazionali[i] << ", tempo: " << tempi[i] << endl;
  }
  itempomin = 0;
  for(i = 0; i < tempi.size(); i++) 
  {
    if(tempi[itempomin] > tempi[i]) 
    {
      itempomin = i;
    }
  }

  cout << "Il vincitore è: " << nomi[itempomin] << ", nazionale: " << nazionali[itempomin] << ", tempo: " << tempi[itempomin] << endl;
}