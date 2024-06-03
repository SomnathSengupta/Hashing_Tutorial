//Use Hash Array to count the frequencies of numbers in a sudden array:
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[11] = {1,3,1,4,5,3,4,8,9,1,3};
  int n = 11;

  //Pre Compute Phase
  int hash[20] = {0};
  for (int i = 0; i < n; i++) {
    hash[arr[i]]++;
  }

  int q;
  cout << "How many query you want? ";
  cin >> q;
  //Data Fetching Phase
  while (q) {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Frequency of " << number << " is " << hash[number] << endl;
    q--;
  }
  return 0;
}