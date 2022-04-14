#include<bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >> n;
    vector<char> arr;
    arr.push_back('-1');
    for(char i = 'a'; i <= 'a' + n; i++) arr.push_back(i);
    while(true){
        for(int i = 1; i <= n; i++) cout << arr[i] << " ";
        cout << endl;
        int j = n - 1, k = n;
        // Tìm từ phải qua trái sao cho arr[j] < arr[j+1]
        while(j > 0 && arr[j]>arr[j+1]) j--;
        if(j == 0) break; // Khi là cấu hình cuối cùng
        else{
            while(arr[k] < arr[j]) k--; // Tìm bên phải vị trí j sao cho có arr[k] > arr[j]
            swap(arr[k], arr[j]);
            sort(arr.begin()+j+1, arr.end());
        }
    }
    
    
} 