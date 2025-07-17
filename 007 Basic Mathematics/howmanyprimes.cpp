//get how many primes between 0 and n

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 10;
    //using the sieve of eratosthenes
    //marking the numbers as prime or not using a vector of boolean

    vector<bool> pr (n , true);
    //making a vector of size n with the values as true
    //0 , 1 are not prime so we just do this
    pr[0] = pr[1] = false;
    //count of how many numbers are prime
    int count = 0;
    //now iterating through every element 
    for(int i = 0 ; i < n ; i++)
    {
        if(pr[i]){
            count++;
            int k = i;
            k+=i;
            while(k < n)
            {
                pr[k] = false;
                k+=i;
            } 
        }
    }
    cout << "the number of primes in range 0 to "<< n<<" is :"<<count;

   

}