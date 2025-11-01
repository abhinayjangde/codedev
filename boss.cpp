#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &coins, int amount)
{
    sort(coins.begin(), coins.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < coins.size(); i++)
    {
        if (amount < 0)
        {
            break;
        }
        if (amount >= coins[i])
        {
            amount -= coins[i];
            ans += 1;
        }
        else
        {
            i++;
        }
    }
    return ans;
}
int main()
{

    vector<int> coins = {1, 20, 2, 5, 10};
    int amount = 7;
    int ans = solution(coins, amount);
    cout << "coins we need: " << ans << endl;

    return 0;
}