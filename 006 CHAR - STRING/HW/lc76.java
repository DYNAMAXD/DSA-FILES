import java.util.*;

public class lc76
{
    public static void main(String args[])
    {
        String t = "ABC";
        String s = "ADOBECODEBANC";
        int ar[] = new int[256];
        int i=0, j=0;
        
        for(int y=0;y<t.length();y++){
            ar[t.charAt(y)-'0'] = 1;
        }

        int n = s.length(), size = t.length();
        boolean res = false;
        while(!res){
            i=0;
            j=0;
            int count = 0;
            while(j<=n){

                if((j+1)%size == 0 && j==0){
                    ar[s.charAt(i)-'0']++;
                    i=i+1;
                    j=j+1;
                    
                }

                ar[s.charAt(j)-'0']--;
                for(int x=0;x<t.length();x++){
                    if(ar[t.charAt(x)-'0'] < 1) {
                        count++;
                    };
                }
                if(count==size){
                    res = true;
                    break;
                }
                
            }
            size++;
        }
        System.out.println(size);
    }
}

