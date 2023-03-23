//
//  main.cpp
//  Finding_Target_Substrings
//
//  Created by Morgan Lucas on 4/16/22.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main () {

    string array_A;
    string array_B[4];
    cout << "Input the string concatenation: " << endl;
    getline(cin,array_A);
    cout << "Input the list of cities: " << endl;
    for (int i = 0; i < 4; i++){
        cin >> array_B[i];
    }

vector <pair <int, string>> output;

  for (int m = 0; m < sizeof (array_B) / sizeof (array_B[0]); m++){

      string cityName = array_B[m];
      int cityNameLength = cityName.size();
      int counter = 0;

      for (int i = 0; i < array_A.size (); i++){
        for (int j = 0; j < cityNameLength; j++){
          if (array_A[i + j] == cityName[j]){
            counter++;
          }
          else{
              counter = 0;
              break;
          }
          if (counter == cityNameLength){
              output.push_back (make_pair(i,cityName));
              counter = 0;
          }
        }
     }

    }

    //puts the indices in non-decreasing order, paired with their corresponding cities
    sort(output.begin(), output.end());

    cout << "Output_order = ";

    for(int i = 0; i < output.size(); i++){
        cout << output[i].first << " ";

    }

    cout << endl << "Output_array = ";

    for (int i = 0; i < output.size(); i++){

        cout << output[i].second << " ";
    }

    cout << endl;

    return 0;
}


