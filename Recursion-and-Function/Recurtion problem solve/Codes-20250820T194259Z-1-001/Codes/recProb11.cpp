#include<iostream>
#include<string>
using namespace std;

bool checkPallindrome(string str){
    if(str.size()==0 || str.size()==1){
        return true;
    }

    char firstCharacter = str[0];
    char lastCharacter = str[str.size()-1];

    if(firstCharacter==lastCharacter){
        string subString = str.substr(1,str.size()-2);
        bool result = checkPallindrome(subString);

        if(result==true){
            return true;
        }else{
            return false;
        }
        // return result;
    }else{
        return false;
    }



}



int main(){
    bool result = checkPallindrome("race car");
    cout<<"Result = "<<result<<endl;
    return 0;
}


