#include <vector>
#include <iostream>

using namespace std;

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER_ARRAY arr
 *  3. INTEGER_ARRAY query_values
 */


void print(vector<int> &arr)
{
    for(int i=0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

vector<int> solve(int X, vector<int> arr, vector<int> query_values) {

    vector<int> result;

    vector<int> occurrence;

    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] == X){
            occurrence.push_back(i+1);
        }
    }

    for(int i=0; i<query_values.size(); i++)
    {
        if( query_values[i] <=  occurrence.size())
        {
            result.push_back(occurrence[query_values[i]-1]);
        }else
        {
            result.push_back(-1);
        }
    } 

    return result;
}

void main()
{
    int X;
    int N;

    vector<int> arr;
    vector<int> query_values;

    cin>>X;
    cin>>N;

    for(int i=0; i<N; i++)
    {
        int temp;
        cin>>temp;

        arr.push_back(temp);
    }

    cin>>N;

    for(int i=0; i<N; i++)
    {
        int temp;
        cin>>temp;

        query_values.push_back(temp);
    }

    vector<int> result = solve(X, arr, query_values);

    print(result);
}