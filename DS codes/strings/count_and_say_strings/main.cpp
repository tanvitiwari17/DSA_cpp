class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        { return "1";}
      //  if(n==2)
       // {return "11";}

        string res = "1";
        for (int i=2;i<=n;i++)
        {
            string curr="";

        for (int j=0;j<res.length();j++)
        {
            int letter_count=1;
            while(j+1<res.length() and res[j]==res[j+1])
            {
                letter_count++;
                j++;
            }
            curr+=to_string(letter_count)+res[j];
        }
            res=curr;
    }
        return res;
    }
};
