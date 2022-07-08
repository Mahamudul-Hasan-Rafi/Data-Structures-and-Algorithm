class Solution
{
    //Function to return a list of integers denoting spiral traversal of matrix.
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
        int flag=0, k=0, l=c-1, m=1, n=r-1, p=c-2, q=0, s=r-2, t=1, u=0, v=0, i, j;
        
        ArrayList<Integer> al = new ArrayList<Integer>();
        while(true){
            i=u;
            j=k;
            
            if(k>l)
                break;
            while(j<=l){
                al.add(matrix[i][j]);
                j++;
            }
            
            
            j=c-1;
            i=m;
            
            if(m>n)
                break;
            while(i<=n){
                al.add(matrix[i][j]);
                i++;
            }
            
            
            i=r-1;
            j=p;
            
            if(p<q)
                break;
            while(j>=q){
                al.add(matrix[i][j]);
                j--;
            }
            
            
            j=v;
            i=s;
            
            if(s<t)
                break;
            while(i>=t){
                al.add(matrix[i][j]);
                i--;
            }
            
            r--;
            c--;
            
            k+=1;
            l-=1;
            
            m+=1;
            n-=1;
            
            p-=1;
            q+=1;
            
            s-=1;
            t+=1;
            
            u+=1;
            v+=1;
        }
        
        return al;
    }
}
