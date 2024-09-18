#include <iostream>
#include <vector>	// header for vector
using namespace std;	// standard namespace

int main() {
    //int arr[5] = {1, 2, 3, 4, 5};
    vector<int>vec{1, 2, 3, 4, 5};	// initialize vector

    vec.push_back(6);
    vec.push_back(9);
    int number = 9;
    int ind = -1;
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == number)
        {
            ind = i;	// number found
            break;	// no need to search more. direct go to out of the loop. as we already find
	}
    }
    if(ind == -1)
    {
        std::cout<<"no number"<<std::endl;
    }
    else
    {
        std::cout<<"Got at index: "<<ind<<std::endl;
    }

    return 0;
}