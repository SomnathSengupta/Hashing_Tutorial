//Use map/undordered_map(Hashmap) to count the frequencies of characters in a sudden String:
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str = "hellobacchalok";
  int n = str.length();

  //Pre Compute Phase:
  map<char,int>hash;
  //key -> no, value -> frequency
  for (int i = 0; i < n; i++) {
    hash[str[i]]++;
  }

  int q;
  cout << "Enter the no of query: ";
  cin >> q;

  //Data Fetching Phase
  while (q) {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "The frequency of " << ch << " is " << hash[ch] << endl;
    q--;
  }
  return 0;
}