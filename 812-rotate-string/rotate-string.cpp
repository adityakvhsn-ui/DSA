class Solution {
public:
    bool rotateString(string s, string goal) {
          if(s.length()!=goal.length())
            return false;
            int n=s.length();
            string ds=s+s;
            return (ds.find(goal)!=string::npos);
        
    }
};