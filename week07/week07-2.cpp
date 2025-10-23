///week07-2.cpp钩礶琍琍妓
///礶禬タよ,计癬ㄓ
#include <iostream>
#include <cmath> ///碞琌cmath3.h柑Τsin()cos() abs() sqrt()
using namespace std;
int main()
{
    int n; ///Part1 Input
    cin >> n;
    for(int i=1;i<n*2;i++){
        for(int j=1;j<n*2;j++){
            ///ㄓぇ,祇瞷タいみ1Τ種Τ翴狥﹁!!
            int d = max(abs(i-n), abs(j-n));
            cout << d;
        }
        cout << "瞷i琌: " << i << endl; ///加糷阀├
    }
}///2穦Τ3糷加,3穦Τ5糷加,4穦Τ7糷加,5穦Τ9糷加
