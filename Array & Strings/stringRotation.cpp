bool isRotataion(string s1, string s2)
{
    int len = s1.length();
    if (len == s2.length() && len > 0)
    {
        string ss1 = s1 + s1;
        return isSubstring(ss1, s2);
    }
    return false;
}