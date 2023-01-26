#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int noOfInputs;
    cin >> noOfInputs;
    for (int i = 0; i < noOfInputs; ++i) {
        int noOfRopes;
        cin>> noOfRopes;
        int ropeLength = 0;
        vector<int> ropes;
        for (int i =0; i < noOfRopes; ++i){
            int rope;
            cin >> rope;
            ropes.push_back(rope);            
        }
        for(int x: ropes){
            if (ropeLength <1){
                ropeLength = x;
            }
            else{
                ropeLength = x +ropeLength;
                ropeLength = ropeLength -2;
            }
        }
        cout << ropeLength<<endl;
        
    }
    return 0;
}
