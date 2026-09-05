#include<bits/stdc++.h>
using namespace std;

string firstNonRepeating(string &s) {
        string B = "";
        vector<int> repeat(26,0);
        queue<char> q;
        for(int i =0; i<s.size(); i++){
            //Repested 
            if(repeat[s[i]-'a']>=1){
                repeat[s[i]-'a']++;
                while(!q.empty() && repeat[q.front()-'a']>1) q.pop();
            
            if(q.empty()) B+='#';
            else B+=q.front();
            }
            //Non repeated
            else{
                repeat[s[i]-'a']++;
                q.push(s[i]);
                
                while(repeat[q.front()-'a']>1) q.pop();
                
                B+=q.front();
            }
            
            }
            return B;
        }
        int main(){
            string s = "abcacdbd";
            cout<<firstNonRepeating(s);
            return 0;
        }