// We can prove the divisibility rule of 3 with the help of an example.

//     Consider the number 4368.

//     Let us expand this number as given below :

//     4368 = 4 × 1000 + 3 × 100 + 6 × 10 + 8 × 1

//     = 4 × (999 + 1) + 3 × (99 + 1) + 6 × (9 + 1) + 8 × 1

//     = (4 × 999 + 3 × 99 + 6 × 9) + (4 × 1 + 3 × 1 + 6 × 1 + 8 × 1)

//     = (4 × 999 + 3 × 99 + 6 × 9) + (4 + 3 + 6 + 8)

//                                        We know that 9,
//     99, 999,… are divisible by 3, and thus the multiples of these numbers are also divisible by 3.

//                                   So,
//     the divisibility of 4368 is now dependent on the sum 4 + 3 + 6 + 8.

//         Here,
//     4, 3, 6 and 8 are the digits of the number 4368.

//               Source
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int isPossible(int N, int arr[])
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            int it = arr[i];
            while (it > 0)
            {
                sum += it % 10;
                it /= 10;
            }
        }
        return sum % 3 == 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends