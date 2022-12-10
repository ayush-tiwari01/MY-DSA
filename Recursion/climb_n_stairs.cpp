#include<iostream>
using namespace std;
int countDistinctwayToClimbstair(long long nstairs){
    if(nstairs<0){
        return 0;
    }
    if(nstairs==0){
        return 1;
    }
    //r.c
    int ans = countDistinctwayToClimbstair(nstairs-1)+countDistinctwayToClimbstair(nstairs-2);
    return ans;
}
int main(){

}