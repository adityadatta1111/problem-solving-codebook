#include <vector>
#include <iostream>

using namespace std;


int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arr(n);

    for (int j = 0; j < n; ++j) {
        int k;
        cin >> k;
        arr[j].resize(k);

        for (int i = 0; i < k; ++i) {
            int temp;
            cin >> temp;
            arr[j][i] = temp;
        }
    }

    for (int query = 0; query < q; ++query) {
        int j_val, i_val;
        cin >> j_val >> i_val;
        cout << arr[j_val][i_val] << endl;
    }

    return 0;
}
