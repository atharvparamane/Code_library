#include<bits/stdc++.h>
using namespace std;

int distinct_year(string str1)
{
    string str2 = "";

    unordered_set<string> uniqueDates;

    for (int i = 0; i < str1.length(); i++) {

        if (isdigit(str1[i])) {
            str2.push_back(str1[i]);
        }
         if (str1[i] == '-') {
            str2.clear();
        }

        // if length of str2 becomes 4
        // then store it in a set
        if (str2.length() == 4) {
            uniqueDates.insert(str2);
            str2.clear();
        }
    }

    // return the size of set
    return uniqueDates.size();
}

// Driver code
int main()
{
    string str = "UN was established on 24-10-1947 ,India got freedom on 15-08-1947.";

    cout << distinct_year(str);

    return 0;
}
