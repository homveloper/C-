
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

/*
 * Complete the 'countMoves' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY numbers as parameter.
 */

long countMoves(vector<int> numbers) {

    long count = 0;

    // while( !(std::adjacent_find( numbers.begin(), numbers.end(), std::not_equal_to<>() ) == numbers.end()))
    // {
    //     long max_index = max_element(numbers.begin(), numbers.end()) - numbers.begin();
    //     long min_index = min_element(numbers.begin(), numbers.end()) - numbers.begin();

    //     long diff_value = numbers[max_index] - numbers[min_index];

    //     for(int i=0; i<numbers.size(); i++)
    //     {
    //         if(i == max_index)
    //             continue;

    //         numbers[i] += diff_value;
    //     }

    //     count += diff_value;
    // }

    long max_index = max_element(numbers.begin(), numbers.end()) - numbers.begin();
    
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    int size = numbers.size();

    if(sum/size == numbers[max_index])
    {
        return count;
    }

    while(true)
    {
        if((std::adjacent_find( numbers.begin(), numbers.end(), std::not_equal_to<>() ) == numbers.end()))

        if(sum % size ==0 && (sum/size) > numbers[max_index]){
            break;
        }

        sum += size-1;
        count += 1;
    }

    return count;
}

void main()
{
    int N;
    vector<int> arr;

    cin>>N;

    for(int i=0; i<N; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    countMoves(arr);
}