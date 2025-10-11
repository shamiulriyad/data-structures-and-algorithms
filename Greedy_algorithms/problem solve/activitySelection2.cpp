#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Activity{
    string name;
    int startTime;
    int endTime;
    Activity(string name,int startTime,int endTime){
        this->name=name;
        this->startTime=startTime;
        this->endTime=endTime;
    }
};

bool comparator(Activity a,Activity b){
    if(a.endTime<b.endTime){
        return true;
    }else{
        return false;
    }
}

void ActivitySelection(vector <Activity> activityVector, int n){
    sort(activityVector.begin(),activityVector.end(),comparator);
//    cout<<"The activities after sorting"<<endl;
//    for(Activity a:activityVector){
//        cout<<a.name<<","<<a.startTime<<","<<a.endTime<<endl;
//    }
    vector<Activity> selectedActivities;
    int k = 0;
    selectedActivities.push_back(activityVector[k]);

    for(int i=1;i<=n-1;i++){
        if(activityVector[i].startTime<activityVector[k].endTime){ // overlapping
            // do nothing
        }else{ // not overlapping
            k=i;
            selectedActivities.push_back(activityVector[k]);
        }
    }
    cout<<"The selected activities are:"<<endl;
    for(Activity a:selectedActivities){
        cout<<a.name<<","<<a.startTime<<","<<a.endTime<<endl;
    }
}


int main(){
    vector <Activity> activityVector;
    int n;
    cout<<"Enter the total number of activities:"<<endl;
    cin>>n;
    cout<<"Enter the names, start time and end time of each of the activities"<<endl;
    for(int i=1;i<=n;i++){
        string name;
        int startTime,endTime;
        cin>>name;
        cin>>startTime;
        cin>>endTime;

        Activity a (name,startTime,endTime);
        activityVector.push_back(a);
    }
    ActivitySelection(activityVector,n);




    return 0;
}

/*
5
ToyStory 7 10
Incredibles 5 9
Avengers 2 4
Batman 0 1
Matrix 3 6

*/

/*

0 1
2 4
5 9
Total activities selected: 3

*/
