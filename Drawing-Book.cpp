int pageCount(int n, int p)
{
    return std::min(p/2, n/2 - p/2);
}


int pageCount2(int n, int p)
{
    int total = n / 2;
    int front = p / 2;
    int back = total - front;
    int result = 0;

    if (front < back)
    {
        result = front;
    }
    else
    {
        result = back;
    }
    
    return result;
}
