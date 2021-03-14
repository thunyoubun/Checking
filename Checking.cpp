#include<iostream>
using namespace std;

//จงเขียน ฟังก์ชัน findWinnner()

int findWinner(int sc [][4]){

 int max=0, i, j, pp[5]={0}, ans;
      for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            pp[i] += sc[i][j];        
        }
        if(pp[i]>max){
            max = pp[i];
            ans = i;
        }
    }
    cout << ans+1 << " " << max;
    
    return ans+1; max;
}






int findDinner(int sc [][4]){

 int max=0, i, j, pp[5]={0}, ans;
      for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            pp[i] += sc[i][j];        
        }
        if(pp[i]>max){
            max = pp[i];
            ans = i;
        }
    }
    
    return ans+1; max;
}

void checkAns(int sc [][4]){
    if( findWinner(sc) == findDinner(sc)  ){
        cout << "\n" << "CORRECT";
    }else{
        cout << "\n" << "WRONG";
    }

}

int main(){
    int sc[][4] = {5, 4, 4, 5, 5, 4, 4, 4,5, 5, 4, 4,5, 5, 5, 4,4 ,4, 4, 5};
    checkAns(sc);
    return 0;
}	

