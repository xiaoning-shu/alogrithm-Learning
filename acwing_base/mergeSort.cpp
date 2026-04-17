#include <iostream>

const int N = 1e6 + 10;
int tmp[N], arr[N];
void mergeSort(int arr[], int l, int r)
{
    if (l >= r) return;
    int mid = l + r >> 1;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    int i = l, j = mid + 1, k = 0;
    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++];
    }
    while (i <= mid) tmp[k++] = arr[i++];
    while (j <= r) tmp[k++] = arr[j++];
    for (int i = l, j = 0; i <= r; i ++) arr[i] = tmp[j++];
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";

	return 0;
}