//
//  main.cpp
//  Bubble Vector
//
//  Created by Matthew Austin.
//  Copyright (c) 2016 Matt. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& a);

void printVector(vector<int> a);

int main()
{
    int temp;

    cout << "How many Numbers do you want sorted? ";
    cin >> temp;

    vector<int> a(temp);



    for (int x=0; x < temp; x++){
        cout << "Enter Number " << x+1 << ": ";
        cin >> a[x];
    }



    printVector(a);

    bubbleSort(a);

    printVector(a);



}

void bubbleSort(vector<int>& a)
{
    bool swapp = true;
    while(swapp){
        swapp = false;
        for (size_t i = 0; i < a.size()-1; i++) {
            if (a[i]>a[i+1] ){
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swapp = true;
            }
        }
    }
}

void printVector(vector<int> a){
    for (size_t i=0;  i <a.size();  i++) {
        cout<<a[i]<<" ";

    }
    cout<<endl;
}
