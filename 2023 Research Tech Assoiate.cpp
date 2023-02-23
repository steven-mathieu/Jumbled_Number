//Jumbled Number 
#include <bits/stdc++.h>
using namespace std;

void traverse(string s,vector<int>&arr,int n)
{
    // Traverse the string
    for (int i = 0; i < n; i++) {
        if (s[i] == 'z')
            arr[0]++;
        if (s[i] == 'w')
            arr[2]++;
        if (s[i] == 'g')
            arr[8]++;
        if (s[i] == 'x')
            arr[6]++;
        if (s[i] == 'v')
            arr[5]++;
        if (s[i] == 'o')
            arr[1]++;
        if (s[i] == 's')
            arr[7]++;
        if (s[i] == 'f')
            arr[4]++;
        if (s[i] == 'h')
            arr[3]++;
        if (s[i] == 'i')
            arr[9]++;
    }

}


void print(string &finalans,vector<int>arr)
{
    arr[7] -= arr[6];
    arr[5] -= arr[7];
    arr[4] -= arr[5];
    arr[1] -= (arr[2] + arr[4] + arr[0]);
    arr[3] -= arr[8];
    arr[9] -= (arr[5] + arr[6] + arr[8]);
    // adding the desired character to string 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < arr[i]; j++) {
            finalans += (char)(i + '0');
        }
    }

}

// Driver Code
int main()
{
    string s = "reuonnoinfe";

    // defining the string of digit 0-9;
    vector<string> numbers={ "zero", "one", "two",
                              "three", "four", "five",
                              "six", "seven", "eight", "nine" };

    vector<int> arr(10);

    // Initialize answer
    string finalans = "";

    // Size of the string
    int n = s.size();
    // Traversing the string
    traverse(s,arr,n);

    print(finalans,arr);


   cout<<finalans<<endl;

}
