#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int ans = 1e9,N,K;
    cin >> N >> K;
    vector<long long int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    long long int sum = A[0], h = 1, l = 0;

    while(1){
        if(l == N){
            break;
        }else if(h == l){
            h++;
        }else if(K <= sum){
            ans = min(ans,h-l);
            sum /= A[l];
            l++;
        }else{
            if(h == N){
                break;
            }else if(A[h-1] == 0){
                long long int add=1;
                l = h;

                while(l < N && A[l] == 0){
                    l = h+add;
                    add++;
                }

                if(l == N){
                    break;
                }

                h = l+1;
                sum = A[l];
            }else{
                sum *= A[h];
                h++;
            }
        }
    }

    cout << ans << endl;
}
