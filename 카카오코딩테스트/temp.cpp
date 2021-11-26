

int election(int votes[]);

void main()
{
    int votes[3] = {10,20,30};
    int max = election(votes);
}

int election(int votes[])
{
    int max_index = 0;

    for(int i=0; i<3; i++)
    {
        if(votes[i] > votes[max_index])
        {
            max_index = i;
        }
    }

    return max_index;
}

