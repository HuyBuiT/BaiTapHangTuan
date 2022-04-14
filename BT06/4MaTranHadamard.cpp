#include<bits/stdc++.h>
using namespace std;
void draw_reverse(int n,int xStart,int yStart,char screen[100][100]){
    for(int i =xStart;i<n;i++){
        for(int j =yStart;j<n;j++){
            if(screen[i][j]=='.'){
                screen[i][j]='o';
            }
            else screen[i][j]='.';
        }
    }
}
void draw(int N, int xStart,int yStart, char screen[100][100]){
     if(N==0){screen[xStart][yStart]='.';
     }
     else {int n;
        n=N/2;
        draw(n,xStart,yStart,screen);
        draw(n,n+xStart,yStart,screen);
        draw(n,xStart,n+yStart,screen);
        draw_reverse(n,n+xStart,n+yStart,screen);
     }
}

int main(){
    int n;
    cin>>n;
    char a[100][100];
    int N=pow(n,2);
    int x=0,y=0;
    draw(N,x,y,a);
    for(int i=0;i<N;i++){
        for(int j = 0;j<N;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
