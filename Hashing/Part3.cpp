//Use map/undordered_map(Hashmap) to count the frequencies of numbers in a sudden array:
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[7] = {1,2,1,2,3,5,3};
  int n = 7;

  //Pre Compute Phase:
  map<int,int>hash;
  //key -> no, value -> frequency
  for (int i = 0; i < n; i++) {
    hash[arr[i]]++;
  }

  int q;
  cout << "Enter the no of query: ";
  cin >> q;

  //Data Fetching Phase
  while (q) {
    int num;
    cout << "Enter a no: ";
    cin >> num;
    cout << "The frequency of " << num << " is " << hash[num] << endl;
    q--;
  }
  return 0;
}