#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

//ultra brute force method
//no confidence in this , should visit this often 

int compress(vector<char>& chars) {
    int index = 0;
    int count = 1;
    char prev = chars[0];
    
    for(int i = 1 ; i < chars.size() ;i++ )
    {
        if(prev == chars[i])
        {
            count++;
        }
        else
        {
            chars[index] = prev;
            index++;
            if(count > 1)
                {
                    if(count > 9)
                    {
                        int start = index;
                        while(count)
                        {
                            int temp = count%10;
                            chars[index] = (char)temp + '0';
                            count/=10;
                            index++;
                        }
                        reverse(chars.begin() + start , chars.begin() + index);
                        
                    }
                    else
                    {
                        chars[index] = (char)count + '0';
                        index++;
                    }
                }
                count = 1;
                
            }
            
            
            prev = chars[i];
        }
        
        
        chars[index] = prev;
        index++;
        if(count >1)
        {
            if(count > 9)
            {
                int start = index;
                while(count)
                {
                    int temp = count%10;
                    chars[index] = (char)temp + '0';
                    count/=10;
                    index++;
                }
                reverse(chars.begin() + start, chars.begin() + index);
            }
            else
            {
                chars[index] = (char)count + '0';
                index++;
            }
        }
        return index;
    }
    
int main(){
    
    return 0;
}