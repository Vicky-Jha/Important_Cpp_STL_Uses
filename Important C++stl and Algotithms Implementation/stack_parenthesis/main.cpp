#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int i;
        if(s.empty())
            return true;
        stack <char> st;
        for(i=0 ; i<s.size() ; i++)
        {
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    if(s[i] == ')')
                    {
                        if(st.top() == '(')
                            st.pop();
                        else
                            return false;
                    }
                    else if(s[i] == ']')
                    {
                        if(st.top() == '[')
                            st.pop();
                        else
                            return false;
                    }
                    else if(s[i] == '}')
                    {
                        if(st.top() == '{')
                            st.pop();
                        else
                            return false;
                    }
                }
            }
            
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};



int main()
{
    string exp;
    getline(cin ,exp);
    Solution s;
    if(s.isValid(exp))
        cout<<"valid"<<endl;
    else
        cout<<"invalid"<<endl;
}
