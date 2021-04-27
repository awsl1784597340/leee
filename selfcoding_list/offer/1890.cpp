class Solution {
public:
    int movingCount(int m, int n, int k) {
        int tag[100][100]={0};
        tag[0][0] = 1;
        int count=1;
        for(int i=1;i<m;i++){
            if(tag[i-1][0]&&calculate(i,0,k))
            {
                tag[i][0]=1;
                count++;
            }
        }
        for(int i=1;i<n;i++){
            if(tag[0][i-1]&&calculate(0,i,k)){
                tag[0][i]=1;
                count++;
            }
        }
        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                if((tag[i-1][j]||tag[i][j-1])&&calculate(i,j,k)){
                    tag[i][j]=1;
                    count++;
                }
            }
        }
        return count;
    }
    bool calculate(int m ,int n,int k){
        int m1 =m/100,m2=m%100/10,m3=m%10;
        int n1 =n/100,n2=n%100/10,n3=n%10;
        if(m1+m2+m3+n1+n2+n3>k)return false;
        else return true;
    }
};