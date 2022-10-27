#include <iostream>
using namespace std;


class Election
{
	int sb = 0, count[5] = { 0 };
public:
	Election()
	{
		cout << "\t\t\tElection";
		cout << "\nPress 1 to Vote for Candidate 1";
		cout << "\nPress 2 to Vote for Candidate 2";
		cout << "\nPress 3 to Vote for Candidate 3";
		cout << "\nPress 4 to Vote for Candidate 4";
		cout << "\nPress 5 to Vote for Candidate 5" << endl;
	}
	void castVote()
	{
		int vote;
		cout << "\tPlease cast your Vote: ";
		cin >> vote;
		if (vote >= 1 && vote <= 5)
			count[vote - 1]++;
		else
			sb++;
	}
	void electionResults()
	{
		cout << "\n\t\t\tElection Results" << endl;
		for (int i = 0; i < 5; i++)
			cout << "\nCandidate " << i + 1 << "got " << count[i] << "votes.";
		cout << "\n\nSpoilt Ballots: " << sb << endl;

	}
};

int main()
{
	char choice;
	Election ele;
	do
	{
		ele.castVote();
		cout << "Anyone Left? (y/n): ";
		cin >> choice;
	} while (toupper(choice) == 'Y');
	ele.electionResults();
}
