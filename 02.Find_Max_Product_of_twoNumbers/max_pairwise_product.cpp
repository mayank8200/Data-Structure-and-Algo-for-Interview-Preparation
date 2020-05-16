#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();
    int ind1=0,ind2=0,num=0;

    for(int i=0;i<n;i++)
    {
        if(numbers[i]>num)
         {
             num=numbers[i];
             ind1=i;
         }
    }
    num=0;
     for(int i=0;i<n;i++)
    {
        if(numbers[i]>num && i!=ind1)
         {
             num=numbers[i];
             ind2=i;
         }
    }
    //std::cout << ind1 << " " << ind2 << std::endl;
    max_product = ((long long)numbers[ind1]*numbers[ind2]);

    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
