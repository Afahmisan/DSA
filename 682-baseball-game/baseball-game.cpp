class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> a;
        int n = operations.size(), sum = 0;
        for(int i = 0; i < n; i++){
            if(operations[i] == "+"){
                stack <int> temp(a);
                int total = 0, counter = 0;
                while(counter < 2){
                    total += temp.top();
                    temp.pop();
                    counter++;
                }
                sum+= total;
                a.push(total);
            } else if (operations[i] == "D"){
                int temp = 2 * a.top();
                sum+= temp;
                a.push(temp);
            } else if ( operations[i] == "C"){
                sum -= a.top();
                a.pop();
            } else {
                int temp = stoi(operations[i]);
                sum += temp;
                a.push(temp);
            }
        }

        return sum;
    }
};