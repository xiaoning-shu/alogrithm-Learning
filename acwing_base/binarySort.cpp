#include <iostream>

int binarySort(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
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