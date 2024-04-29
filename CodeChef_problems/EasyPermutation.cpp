// problem link
// https://www.codechef.com/problems/EASYPERM


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int temp = n;
	    for(int i = 1;i <= n;i++){
	        cout << temp << " ";
	        temp--;
	    }

	    cout << endl;
	}

}
