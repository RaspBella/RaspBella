std::string join(std::vector<std::string> list, std::string delim)
{
    std::string returned;
    for (const auto& item : list)
    {
        returned += item;
        if (&item != &list.back())
        {
            returned += delim;
        }
    }
    return returned;
}
