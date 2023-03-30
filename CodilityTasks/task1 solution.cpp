static int solution(string S)
{
	int max_val = 0, current = 0;
	bool first_letter = true;
	foreach (char c in S) 
	{
		if (c == '!' || c == '.' || c == '?')
		{
			max_val = Math.Max(current, max_val);
			first_letter = true; current = 0;
		}
		if (char.IsLetter(c) && first_letter)
		{
			first_letter = false;
			++current;
		}
		if (c == ' ') { first_letter = true; }
	}
	max_val = Math.Max(max_val, current);
	return max_val;
}