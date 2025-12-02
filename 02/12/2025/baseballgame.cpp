/* You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

An integer x.
Record a new score of x.
'+'.
Record a new score that is the sum of the previous two scores.
'D'.
Record a new score that is the double of the previous score.
'C'.
Invalidate the previous score, removing it from the record.
Return the sum of all the scores on the record after applying all the operations.

*/
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        int sum=0;
        for(int i=0;i<operations.size();i++)
        {
            int su=0;
            if(operations[i]=="+")
            {
                su+=s.top();
                int q=s.top();
                s.pop();
                su+=s.top();
                s.push(q);
                s.push(su);
            }
            else if(operations[i]=="D")
            {
                s.push(2*s.top());
            }
            else if(operations[i]=="C")
            {
                s.pop();
            }
            else{
                int a=std::stoi(operations[i]);
                s.push(a);
            }
        }
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};