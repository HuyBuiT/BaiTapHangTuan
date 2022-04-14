#include<bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};  
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};       // * . . . .
                                               // . * . . .   *: ô chứa mìn
                                               // . . . . .
                                               // . . . . .
                                               // * . . . .
void standardize_input(vector<vector<char>> &arr, const int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[i][j] != '*'){
                int count_min = 0;
                for (int k = 0; k < 8; k++){
                    int new_i = i + dx[k];
                    int new_j = j + dy[k];
                    if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < n){
                        if(arr[new_i][new_j] == '*') count_min++;
                    }
                }
                arr[i][j] = char(count_min + '0');
            }
        }
    }
}

void loang(int i, int j, const vector<vector<char>> &arr, vector<vector<char>> &display, vector<vector<bool>>& open, const int n){
    display[i][j] = arr[i][j];
    open[i][j] = true;
    for (int k = 0; k < 8; k++){
        int new_i = i + dx[k];
        int new_j = j + dy[k];
        if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < n && !open[new_i][new_j]){
            if(arr[new_i][new_j] == '0'){
                loang(new_i, new_j, arr, display, open, n);
            }else{
                display[new_i][new_j] = arr[new_i][new_j];
                open[new_i][new_j] = true;
            }
        }
    }
    
    
}

bool is_win(const vector<vector<bool>>& open, const int n, const int k){
    int count_not_open = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(open[i][j] == false) count_not_open++;
        }
    }
    if(count_not_open == k) return true;
    return false;
}

int main(){
    int n, k;
    cout << "Xin moi nhap kich thuoc ban do n x n: "; cin >> n;
    cout << "Xin moi nhap so min: "; cin >> k;
    cin.ignore();
    
    cout << "Xin moi nhap du lieu ban do: " << endl;
    vector<vector<char>> arr;
    for (int i = 0; i < n; i++){
        vector<char> tmp;
        for (int j = 0; j < n; j++){
            char c; cin >> c;
            tmp.push_back(c);
        }
        arr.push_back(tmp);
    }
    standardize_input(arr, n);    
    
    vector<vector<char>> display (n, vector<char> (n, '.'));
    vector<vector<bool>> open (n , vector<bool> (n, false));
       
    int x, y;
    do{
        cout << "Xin moi nhap toa do o muon chon: "; cin >> x >> y;
        if(arr[x][y] != '*'){
            if(arr[x][y] != '0'){
                display[x][y] = arr[x][y];
                open[x][y] = true;
                for (int i = 0; i < n; i++){
                    for (int j = 0; j < n; j++){
                        if(i == x && j == y) cout << arr[x][y] << " ";
                        else cout << display[i][j] << " ";
                    }
                    cout << endl;   
                }
            }else{
                loang(x, y, arr, display, open, n);
                for (int i = 0; i < n; i++){
                    for (int j = 0; j < n; j++){
                         cout << display[i][j] << " ";
                    }
                    cout << endl;   
                }
            }
        }else cout << "YOU'RE DEAD!" << endl;
        if(is_win(open, n, k)) cout << "You win" << endl;
    }while(arr[x][y] != '*' && !is_win(open, n, k));
    
    
    return 0;   
}