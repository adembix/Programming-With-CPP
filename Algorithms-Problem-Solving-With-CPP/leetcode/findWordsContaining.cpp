#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> vpos;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].length(); j++) {
                if (words[i][j] == x) {
                    vpos.push_back(i);
                    break;
                }
            }
        }

        return vpos;
    }
};


int main(){
   Solution ob;
   vector <string> vWords = {"leet", "code"};
   vector <int> vPos = ob.findWordsContaining(vWords,'e');

   for (int& x : vPos){
      cout << x <<" ";
   }

}