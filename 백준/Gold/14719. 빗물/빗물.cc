#include <bits/stdc++.h>

using namespace std;

int arr[502];
int row, col;

int main() {
	int result = 0, r, l;
    scanf("%d %d",&row,&col);
	for (int i = 1; i <= col; i++) scanf("%d",&arr[i]);
	for (int i = 2; i < col; i++) {
		r = l = arr[i];
		for (int j = 1; j < i; j++)
			l = max(l, arr[j]);
		for (int j = i + 1; j <= col; j++)
			r = max(r, arr[j]);
		result += (min(r, l) - arr[i]);
	}
	printf("%d",result);
	return 0;
}
