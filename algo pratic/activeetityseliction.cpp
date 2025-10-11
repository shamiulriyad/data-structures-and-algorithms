#include <bits/stdc++.h>

using namespace std;

class activity{
    string name;
    int starttime,endtime;
    activity(string name,int starttime,int endtime){
        this->name=name;
        this->starttime=starttime;
        this->endtime=endtime;
    }
}

bool comparator(activity a, activity b){
    if(a.endtime<b.endtime){
        return true;
    }
    else{
        return false;
    }
}

void activityselection(vector<activity> activityvector,int a){
    sort(activityvector.begin(),activityvector.end(),comparator);
    vector<activity>selectedactivities;
    int k=0;
    selectedactivities.push_back(activityvector[k]);

    for(int i=1;i<=n;i++){
        if(activityvector[i].starttime<activityvector[k].endtime){

        }
        else{
            k=i;
            selectedactivities.push_back(activityvector[k]);
        }
    }
    cout<<"The selected activities are:"<<endl;
    for(Activity a:selectedactivities){
        cout<<a.name<<","<<a.starttime<<","<<a.endtime<<endl;
    }


}

int main(){
     vector <activity> activityVector;
    int n;
    cout << "Enter the total number of active : " << endl;
   // int n;
    cin >> n;

    cout << "enter the name ,start time,end time : " << endl;
    for(int i=1;i<=n;i++){
        string name;
        int starttime,endtime;
        cin >> name;
        cin >> starttime >> endtime;
        activity a (name,starttime,endtime);
        activityVector.push_back(a);


    }


}