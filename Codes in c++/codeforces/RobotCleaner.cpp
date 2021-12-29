#include<iostream>
using namespace std;

int main(){
    
    int t = 0;
    cin >> t;
    while(t--){
        int step = 0;
        int flagr = 0;
        int flagc = 0;
        int n =0,m=0, rb=1, cb=1, rd=0, cd=0;
        scanf("%d %d %d %d %d %d", &n, &m, &rb, &cb, &rd, &cd);
        int work = 1;
        while(work){
            if(rd == rb || cd == cb){
                work = 0;
            }else{
                if(rb >= n) flagr = 1;
                if(flagr) rb--;
                else rb++;
                if(cb >= m) flagc = 1;
                if(flagc) cb--;
                else cb++;
                step++;
            }
            //cout << step << endl;
        }
        cout << step << endl;
        //cout << "step" << endl;
    }
    
    return 0;
}