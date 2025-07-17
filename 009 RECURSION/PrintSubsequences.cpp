//do this using the inclusion exclusion ting

#include<iostream>
using namespace std;

void PrintSubseq(string str ,int i, string ans)
{
    if(i == str.size())
    {
        cout<<"one of the subsequence is-->"<<ans<<endl;
        return;
    }
    PrintSubseq(str , i+1 , ans+str[i]);
    PrintSubseq(str , i+1 , ans);

}

int main(){
    string str = "abcd";

    PrintSubseq(str ,0 , "");


    return 0;
}