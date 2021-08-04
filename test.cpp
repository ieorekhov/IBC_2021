#include <iostream>
#include <vector>
using namespace std;

float avg(vector<int> array){
    int n = array.size();
    int sum = 0;
    for(int element : array){
        sum += element;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << avg(array) << endl;
}