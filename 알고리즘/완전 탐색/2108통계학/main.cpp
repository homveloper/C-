#include <vector>
#include <numeric>
#include <stdio.h>
#include <cmath>
#include <algorithm>

double mean(const std::vector<int>& arr){
    return round(std::accumulate(arr.begin(), arr.end(), 0.0) / arr.size());
}

int median(std::vector<int>& arr){
    std::sort(arr.begin(), arr.end());
    return arr[arr.size()/2];
}

int most_frequent(const std::vector<int>& arr){
    std::vector<std::pair<int, int>> frequency(10000);

    for(int i=0; i<arr.size(); i++){
        
        int index = arr[i];

        if(index >= 0 &&
            index <= 4000)
        {
            frequency[index].first = index;
            frequency[index].second++;
        }else if(index < 0 &&
                index >= -4000)
        {
            index = 4000 + abs(arr[i]);

            frequency[index].first = arr[i];
            frequency[index].second++;
        }
    }

    sort(frequency.begin(), frequency.end(), [](auto a, auto b) {
        if (a.second == b.second){
            return a.first < b.first;
        }else{
            return a.second > b.second;
        }
    });

    std::vector<std::pair<int,int>> most_frequency;

    std::copy_if(frequency.begin(), frequency.end(), std::back_inserter(most_frequency), [&frequency](const auto &e){
        return e.second == frequency[0].second;});

    if(most_frequency.size() > 1){
        return most_frequency[1].first;
    }else{
        return most_frequency[0].first;
    }
}

int difference_max_min(const std::vector<int>& arr){
    return arr[arr.size()-1] - arr[0];
}

int main(){

    int N;
    int temp;

    std::vector<int> arr;

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &temp);
        arr.push_back(temp);
    }

    printf("%.0f\n", mean(arr));
    printf("%d\n", median(arr));
    printf("%d\n", most_frequent(arr));
    printf("%d\n", difference_max_min(arr));

    return 0;
}