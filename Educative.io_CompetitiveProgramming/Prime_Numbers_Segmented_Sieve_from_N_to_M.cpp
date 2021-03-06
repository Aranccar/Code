#include <iostream>
#include <vector>
using namespace std;

int main() {
 

  int N, M;
  cin >> N >> M;
  vector<int> is_prime(M-N+1, true);

  for (int i = 2; i * i <= M ; i++) {
    int start = (((N - 1) / i) + 1) * i;
    for (int j = start; j <= M ; j+= i) {
      if (j >= N && j <= M) 
        is_prime[j - N] = false;
    }
  }

  for (int i = 0; i < is_prime.size(); i++) {
    if (is_prime[i])
      cout << i + N << " ";
  }

  return 0;
}



// Input 
// 100 250
// Output
// 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241 
// Time complexity - O((M-N)*logM)O((M−N)∗logM)