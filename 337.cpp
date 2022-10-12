class Solution {
public:
    char getMin(map<char,int> &mp){
      for(char c = 'a'; c<='z'; c++){
        if(mp[c]>0) return c;
      }
      return char(255);
    }

    string robotWithString(string s) {
      map<char,int> freq;
      for(char c: s){
        freq[c]++;
      }
      stack<char> st;
      string ans = "";
      
      for(char c: s){
        freq[c]--;
        st.push(c);

        // check if pop
        char minC = getMin(freq);
        while(!st.empty() && minC >= st.top()){
          ans.push_back(st.top());
          st.pop();
        }
      }

      while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
      }
      return ans;
    }
};
