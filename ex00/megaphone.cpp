#include <iostream>


void to_upper(std::string s)
{
	int i =0;

	if(s.length()== 0) 
		return;
	while(s[i])
	{
		if(s[i] && (s[i]>='a' && s[i]<='z')) 
			s[i]=s[i]-32;
		i++;
	}
	std::cout << s;
}


int main(int ac,char **av)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	int i =1;
	while(av[i])
	{
		to_upper(av[i]);
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
}

/*

$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
*/