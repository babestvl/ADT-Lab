#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int n;

void swapp(int x[],int i, int j) {
        int tmp = x[i];
        x[i] = x[j];
        x[j] = tmp;
}

int parti(int x[], int a, int b, int pivot) {
        int i = a, j = b;
        while (i <= j) {
            while (i <= b && x[i] < pivot) i++;
            while (j >= a && x[j] > pivot) j--;
            if (i <= j) swapp(x, i++, j--);
        }
        return i;
}

void quickSort(int x[], int left, int right) {
        if (left >= right) {
            return;
        }
        int pivot = x[right];

        int mid = parti(x, left, right - 1, pivot);
        swapp(x, mid, right);

        quickSort(x, left, mid - 1);
        quickSort(x, mid + 1, right);
}

main()
{

    cin >> n;
    int x[n];
    int a = 0,b = 1;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    quickSort(x, 0, n - 1);
    int ans = x[n-1];
    while(b < n) {
        int temp = abs(x[a] - x[b]);
        if (temp < ans) {
            ans = temp;
        }
        a++;
        b++;
    }

        cout << ans << endl;



}
