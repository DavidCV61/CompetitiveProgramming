//Link: https://leetcode.com/problems/bulls-and-cows/description/
class Solution {
public:
    string getHint(string secret, string guess) {
        int t=0;
        int c=0;
        int n=secret.size();

        unordered_map <char,int> m;

        for(int i=0;i<n;i++) m[secret[i]]++;
        vector <int> st(1002,0);

for(int i=0;i<n;i++){
    if(secret[i]==guess[i]){

        t++;
        m[guess[i]]--;
        st[i]=1;
    }

  
}
for(int i=0;i<n;i++){

    if(m[guess[i]]>0 && st[i]==0){
        
        c++;
        m[guess[i]]--;
    }
}

       string ans="";
       ans+=to_string(t);
       ans+="A";
       ans+=to_string(c);
       ans+="B";



        return ans;
        
    }
};
