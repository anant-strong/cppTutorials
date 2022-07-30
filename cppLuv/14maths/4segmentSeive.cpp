#include <bits/stdc++.h>
using namespace std;

vector<int> seive(int n)
{
    int count = 0;

    vector<bool> v(n + 1, true);
    //making 0 and 1 nonprime
    v[0] = v[1] = false;

    for (int i = 2; i*i <= n; i++)
    {

        if (v[i])
        {

            
            for (int j = i* i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }
    vector<int> a;
     for (int p=2; p<=n; p++){
        if (v[p] == true){
            
            a.push_back(p);
        
        }
     }
    return a;
}
 
void segmentedSeive(int a,int b){

        int rootb = sqrt(b);

        //make bol arr of b-a+1 size
        vector<bool> v(b-a+1, true);
        //get prime using seive till rootb
        vector<int> primes;
        primes = seive(rootb);
        
        //now marking using primes we got

        for(int prime: primes){
            //find starting index for marking
            int multiple = ceil((a*1.0)/prime);

            if(multiple==1){
                multiple++;
            }

            int indx = multiple*prime - a;

            for(int j = indx;j<v.size();j+=prime){
                    v[j]=false;
            }
        }

        for(int i = 0; i< v.size();i++){
            if(v[i]){
                int val = i+a;
                cout << val << endl;
            }
        }

}
int main()
{
    //in normal seive we were creating bool of n+1 size 
    //what if the n is very big like 10^6 then it will not be 
    //optimised way of doing problem

    int a,b;
    cin >> a >> b;

    segmentedSeive(a,b);

    return 0;
}