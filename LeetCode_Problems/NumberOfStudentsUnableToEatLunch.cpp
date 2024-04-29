// problem link
// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> stk;
        int n = students.size();

        for(int i = n - 1;i >= 0;i--){
            q.push(students[i]);
        }

        for(int i  = n - 1;i >= 0;i--){
            stk.push(sandwiches[i]);
        }

        int count = 0;


        while(q.size() > 0){
            if(q.front() == stk.top()){
                stk.pop();
                q.pop();
                count = 0;
            }else{
                int val = q.front();
                q.push(val);
                q.pop();
                count++;
                if(count == q.size()){
                    break;
                }
            }

            cout << count << endl;
        }

        return q.size();

    }
};
