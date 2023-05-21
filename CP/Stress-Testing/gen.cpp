#include <bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <typename T>
// using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef unsigned long long ull;
#define pi 3.14159265358979323846264338327950
#define ll long long
#define ld long double
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)((x).size())
#define ff first
#define ss second
#define pb push_back
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
// #define int long long

////Deepak Prajapati--------->
const ll mxN = 1e8 + 10;
const ld eps = 1e-6;
const ll inf = 1e18;
using pii = pair<int, int>;
//----------------------------------
const int N = 1e6 + 4;
int32_t permutation[N];
///--------------------------------------------------
// namespace generator
// {
//     string gen_string(int len = 0, bool upperCase = false, int l = 1, int r = 26)
//     {
//         assert(len >= 0 && len <= 5e6);
//         string str(len, (upperCase ? 'A' : 'a'));
//         for (char &ch : str)
//         {
//             ch += uid(l, r) - 1;
//         }
//         return str;
//     }
//     vector<int> gen_array(int len = 0, int minRange = 0, int maxRange = inf)
//     {
//         assert(len >= 0 and len <= 5e6);
//         vector<int> a(len);
//         for (int &x : a)
//             x = uid(minRange, maxRange);
//         return a;
//     }
//     vector<pair<int, int>> gen_tree(int n = 0)
//     {
//         assert(n >= 0);
//         vector<pii> res(n ? n - 1 : 0);
//         // if you like to have bamboo like tree or star like tree uncomment below 8 lines
//         /*if (rng() % 5 == 0) { // bamboo like tree
//           for (int i = 1; i < n; ++i) res[i-1] = {i, i + 1};
//           return res;
//         }
//         if (rng() % 7 == 0) { // star tree
//           for (int i = 2; i <= n; ++i) res[i-2] = {1, i};
//           return res;
//         }*/
//         iota(permutation, permutation + 1 + n, 0);
//         shuffle(permutation + 1, permutation + 1 + n, rng);
//         for (int i = 2; i <= n; ++i)
//         {
//             int u = i, v = uid(1, i - 1);
//             u = permutation[u], v = permutation[v];
//             res[i - 2] = minmax(u, v); // u < v, just for convenience while debugging
//         }
//         shuffle(res.begin(), res.end(), rng);
//         return res;
//     }
//     vector<pair<int, int>> simple_graph(int n = 0, int m = 0)
//     {
//         assert(n > 0 && m >= n);
//         int max_edges = n * (n - 1) / 2;
//         assert(m <= max_edges);
//         vector<pii> res = gen_tree(n);
//         set<pii> edge(res.begin(), res.end());
//         for (int i = n; i <= m; ++i)
//         {
//             while (true)
//             {
//                 int u = uid(1, n), v = uid(1, n);
//                 if (u == v)
//                     continue;
//                 auto it = edge.insert(minmax(u, v));
//                 if (it.second)
//                     break;
//             }
//         }
//         res.assign(edge.begin(), edge.end());
//         return res;
//     }
// }

// using namespace generator;
//***************************SOLUTION***************************//

// vector<vector<int>> g;
// vector<vector<bool>> vis;

void solve()
{
    cout << 1 << "\n"; // testcase
    int n = uid(2, 9);
    cout << n << "\n";
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    int ff = uid(3, 10);

    shuffle(all(a), default_random_engine(ff));
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
int main()
{
    boost;
    cout << setprecision(10) << fixed;
    int tc = 1;
    // cal();
    // sieve();
    // cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}