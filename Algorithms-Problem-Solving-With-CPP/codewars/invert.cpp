std::vector<int> invert(std::vector<int> values)
{
    for (int& n : values)
    {
        n = n * -1;
    }

    return values;
}