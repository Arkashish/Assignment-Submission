Insertionsort(int A,int n)
{
    int val,hole;
    for (int i = 0; i < n; i++)
    {
        val = A[i];
        hole = i;
        while (hole>0 && A[hole-1]>A[hole])
        {
            A[hole] = A[hole-1];
            hole = hole-1;
        }
        A[hole] = val;
    }
    
}