//Use Hash Array to count the frequencies of Characters in a String:
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str = "hellobacchalok";
  int n = str.length();

  //Pre Compute Phase
  int hash[26] = {0};
  for (int i = 0; i < n; i++) {
    hash[str[i] - 'a']++;
  }


  int q;
  cout << "How many query you want? ";
  cin >> q;
  //Data Fetching Phase
  while (q) {
    char ch;
    cout << "Enter the character: ";
    cin >>ch;
    cout << "Frequency of " << ch << " is " << hash[ch - 'a'] << endl;
    q--;
  }
  return 0;
}