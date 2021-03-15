#include<iostream>
using namespace std;

//จงเขียน ฟังก์ชัน int findWinnner() ที่รับ ค่า arrays 2มิติ  และ cout หมายเลขของผู้เข้าแข่งขันที่ชนะ และคะแนนรวมที่เขาได้รับ

int findWinner(int sc[][4]){

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
    return 0;
}


//// TEST ////

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
    
    cout << ans+1 << " " << max;
    return 0;
    
}

int checkAns(int sc [][4]){
    
     if( findWinner(sc) == findDinner(sc)   ){
        cout << "\b\b\b\b" << "     ";
        cout << "\n" << "CORRECT";
    }else{
        cout << "\b\b\b\b" << "     ";
        cout << "\n" << "WRONG";
    }
    return 0;
}



int main(){
    int sc[][4] = {5, 4, 4, 5, 5, 4, 4, 4,5, 5, 4, 4,5, 5, 5, 4,4 ,4, 4, 5};
    checkAns(sc);
    return 0;
}	

