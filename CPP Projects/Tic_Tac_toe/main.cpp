#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    char M[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
    cout<<"--------------------------------------------------- TIC  TAC  TOE----------------------------------------------------"<<endl;
    for(int i=0; i<3; i++){
        cout<<"                                                     ";
        for(int j=0; j<3; j++){
            cout<<M[i][j]<<"  ";
        }
        cout<<endl;
    }
    int k=0;
    while(k<=9){
        int x = 0;
        for(int i=0; i<3; i++){
            if(M[i][0]=='X' && M[i][1]=='X' && M[i][2]=='X' || M[0][i]=='X' && M[1][i]=='X' && M[2][i]=='X'){
                cout<<"--------------------------Player 1 Won-------------------"<<endl;
                return 0;
            }
        }
        for(int i=0; i<3; i++){
            if(M[i][0]=='O' && M[i][1]=='O' && M[i][2]=='O' || M[0][i]=='O' && M[1][i]=='O' && M[2][i]=='O'){
                cout<<"--------------------------Player 2 Won-------------------"<<endl;
                return 0;
            }
        }
        if(M[0][0]=='X' && M[1][1]=='X' && M[2][2]=='X' || M[0][2]=='X' && M[1][1]=='X' && M[2][0]=='X'){
            cout<<"--------------------------Player 1 Won------------------------"<<endl;
                return 0;
        }
        if(M[0][0]=='O' && M[1][1]=='O' && M[2][2]=='O' || M[0][2]=='O' && M[1][1]=='O' && M[2][0]=='O'){
            cout<<"--------------------------Player 2 Won------------------------"<<endl;
                return 0;
        }
        if(k==9){
            cout<<"----------------------------- IT'S A TIE ----------------------------"<<endl;
            return 0;
        }
        if(k%2==0){
            bool valid = true;
            while(valid){
                cout<<"Player 1 --> Choose a number from above unmarked choices: ";
                cin >>x;
                int a = x/3, b = x%3;
                if(b==0){
                    if(M[a-1][2] == 'X' || M[a-1][2] == 'O')
                        cout<<"                                      INVALID PLACE!! TRY AGAIN :)"<<endl;
                    else{
                       M[a-1][2] = 'X', valid = false;
                    }
                }
                else{
                    if(M[a][b-1] =='X' || M[a][b-1] == 'O'){
                        cout<<"                                      INVALID PLACE!! TRY AGAIN :)"<<endl;
                    }
                    else{
                        M[a][b-1] = 'X', valid = false;
                    }
                }
            }
        }
        else{
            bool valid = true;
            while(valid){
                cout<<"Player 2 --> Choose a number from above unmarked choices: ";
                cin >>x;
                int a = x/3, b = x%3;
                if(b==0){
                    if(M[a-1][2] == 'X' || M[a-1][2] == 'O')
                        cout<<"                                      INVALID PLACE!! TRY AGAIN :)"<<endl;
                    else{
                       M[a-1][2] = 'O', valid = false;
                    }
                }
                else{
                    if(M[a][b-1] =='X' || M[a][b-1] == 'O'){
                        cout<<"                                      INVALID PLACE!! TRY AGAIN :)"<<endl;
                    }
                    else{
                        M[a][b-1] = 'O', valid = false;
                    }
                }
            }
        }
        k++;
        for(int i=0; i<3; i++){
            cout<<"                                                     ";
            for(int j=0; j<3; j++){
                // if(M[i][j]!='X' || M[i][j]!='O') 
                cout<<M[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    if(k==10){
        cout<<"----------------------------- IT'S A TIE ----------------------------"<<endl;
    }
    return 0;
}