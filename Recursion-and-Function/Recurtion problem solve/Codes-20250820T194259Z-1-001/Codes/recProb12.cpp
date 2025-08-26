#include<iostream>
#include<string>
using namespace std;

string modifyString(string str){
    cout<<"str="<<str<<endl;
    if(str.size()==0){
        return "";
    }

    char firstCharacter = str[0];
    if(firstCharacter>='a' && firstCharacter<='z' ){
        string subString = str.substr(1);
        string result = modifyString(subString);
        return firstCharacter+result;
    }else if(firstCharacter>='A' && firstCharacter<='Z'){
        firstCharacter=firstCharacter+32;
        string subString =str.substr(1);
        string result = modifyString(subString);
        return firstCharacter+result;
    }else if(firstCharacter==' '){
        string subString =str.substr(1);
        string result = modifyString(subString);
        return result;
    }else{
        string subString = str.substr(1);
        string result = modifyString(subString);
        return firstCharacter+result;
    }
}

int main(){
    string inputString;
    getline(cin,inputString);
    cout<<"You entered : "<<inputString<<endl;


    string result = modifyString("abCa#@ xY12 Z0");
    cout<<result<<endl;

    return 0;
}



