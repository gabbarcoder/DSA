#include <bits/stdc++.h>

using namespace std;

void vec_inp(vector<int> &v, int n)
{
    cout << "enter the elemnts : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void vec_out(vector<int> x)
{
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
}

int main()
{
    vector<int> v;

    int n; // takign the size of the vector
    cout << "enter the number of elements : ";
    cin >> n;
    vec_inp(v, n);

    vector<int> x = v;

    cout << "the elements are : ";
    vec_out(x);

    return 0;
}