class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        if(s.size() == 1){
            return false;
        }
        for (char c : s){
            if(c == '[' || c == '(' || c == '{'){
                a.push(c);
            } 
            
            if (c == ']' || c == ')' || c == '}'){
                if(!a.empty()){
                    int n = a.top() - '0';
                    int n1 = c - '0';

                    
                    if((n+1 == n1) || (n+2) == n1){
                        a.pop();
                    } else {
                        return false;
                    }
                } else if(a.empty()){
                    return false;
                }
            }
        }

        return a.empty();
    }
};