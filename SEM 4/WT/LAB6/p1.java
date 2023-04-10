class p1 
{
    static int bs(int a[], int l, int u, int x) 
    {
        if (u >= l) 
        {
            int m = (l + u)/ 2;
            if (a[m] < x)
                return bs(a, m + 1, u, x);
            else if (a[m] > x)
                return bs(a, l, m - 1, x);
            else
            return m;
        }
        return -1;
    }
    public static void main(String args[]) 
    {
        int arr[] = { 5, 10, 1, 78, 96, 20, 87 };
        int n = arr.length;
        int x = 78;
        int result = bs(arr, 0, n - 1, x);
        if (result == -1)
            System.out.println(x +" Element not present");
        else
            System.out.println(x +" Element found at index: " + result);
    }
}