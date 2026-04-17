#include <iostream>

void QucikSort(int arr[], int l, int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = arr[l + r >> 1];
    while (i < j)
    {
        do i ++; while (arr[i] < x);
        do j --; while (arr[j] > x);
        if (i < j)
        {
            std::swap(arr[i], arr[j]);
        }
    }
    QucikSort(arr, l, j);
    QucikSort(arr, j + 1, r);
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    QucikSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";

	return 0;
}