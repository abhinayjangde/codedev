#include <iostream>
using namespace std;

class Solution
{
public:
    void rotateClockWise(string &s)
    {
        char temp = s[s.size() - 1];
        int ind = s.size() - 2;
        while (ind >= 0)
        {
            s[ind+1] = s[ind];
            ind--;
        }
        s[0] = temp;
    }
    void rotateAntiClockWise(string &s)
    {
        char temp = s[0];
        int ind = 1;
        while (ind < s.size())
        {
            s[ind-1] = s[ind];
            ind++;
        }
        s[s.size()-1] = temp;
    }
    bool isRotated(string str1, string str2)
    {
        if (str1.size() != str2.size())
        {
            return 0;
        }
        string clockwise, anticlockwise;
        clockwise = str1;

        rotateClockWise(clockwise);
        rotateClockWise(clockwise);
        if (clockwise == str2)
        {
            return 1;
        }
        anticlockwise = str1;
        rotateAntiClockWise(anticlockwise);
        rotateAntiClockWise(anticlockwise);
        if (anticlockwise == str2)
        {
            return 1;
        }
        return 0;
    }
};
int main()
{
    string a = "amazon";
    string b = "azonam";
    Solution s;
    cout<<s.isRotated(a,b);
    return 0;
}