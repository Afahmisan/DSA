class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> a;
        int n = operations.size();
        for(int i = 0; i < n; i++){
            if(operations[i] == "+"){
                stack <int> temp(a);
                int total = 0, counter = 0;
                while(counter < 2){
                    total += temp.top();
                    temp.pop();
                    counter++;
                }
                a.push(total);
            } else if (operations[i] == "D"){
                int temp = a.top();
                a.push(temp*2);
            } else if ( operations[i] == "C"){
                a.pop();
            } else {
                a.push(stoi(operations[i]));
            }
        }

        int total = 0;
        while(!a.empty()){
            cout << a.top() << endl;
            total += a.top();
            a.pop();
        }

        return total;
    }
};