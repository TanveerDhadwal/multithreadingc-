#include<iostream>
#include<string>
#include <thread>
#include<vector>
std::vector<int> findPrime(int x, int y);

int main(){
    std::vector<int> l = findPrime(1,10);
    for(int i =0; i < l.size(); i++){
        std::cout<<l.at(i)<<std::endl;
    }
}

std::vector<int> findPrime(int x,int y){
    int counter = 0;
    std::vector<int> list;
    for(int i = x; i < y; i++){
        for(int j = 1; j < i; j++){
            if(i % j == 0 && j != 1){
                counter++;
                break;
            }
        }
        if (counter == 0){
            list.push_back(i);
        }else{
            counter = 0;
        }
    }
    return list;
} 