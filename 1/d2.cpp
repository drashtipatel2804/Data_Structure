    #include<iostream>
    using namespace std;
    int main ()
    {
        int  n, i, j, x;
        cout << "Enter size of array : ";
        cin >> n;
        int A[n];
        cout << "Enter elements of array : ";
        for (i = 0; i < n; i++)
            cin >> A[i];    
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (A[i] < A[j])
                {

                    x = A[i];

                    A[i] = A[j];

                    A[j] = x;
                }
            }
        }
        cout << "Second largest number : " << A[1];

        cout << "\nSecond smallest number : " << A[n - 2];

        return 0;

    }

/*Enter size of array : 5
Enter elements of array : 10
20
50
40
60
Second largest number : 50
Second smallest number : 20*/

