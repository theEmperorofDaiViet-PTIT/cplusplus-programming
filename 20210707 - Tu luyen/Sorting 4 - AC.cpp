#include <iostream>
#include<set>

#include<algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		set <int> hp;
		set <int> gt;
		int a[100000];
		int b[100000];
		cin >> n >> m;
		int q = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			hp.insert(a[i]);
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
			a[n + i] = b[i];
			if (hp.find(b[i]) != hp.end()) {
				gt.insert(b[i]);
				
			}
		}
		for (int i = 0; i < m; i++) {
			hp.insert(b[i]);
		}
		for (std::set<int>::iterator it = hp.begin(); it != hp.end(); ++it)
			std::cout << *it << " ";
		std::cout << "\n";
		for (std::set<int>::iterator it = gt.begin(); it != gt.end(); ++it)
			std::cout << *it<<" ";
		std::cout << "\n";
		
		
	}

}