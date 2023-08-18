/*Alice and Bob are playing a game. Each player rolls a regular six faced dice 
3
3 times.
The score of a player is the sum of the values of the highest 
2
2 rolls. The player with the highest score wins, and the game ends in a Tie if both players have the same score.

Find the winner of the game or determine whether it is a tie.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case contains six space-separated integers 
​
  — the values Alice gets in her 
3
3 dice rolls, followed by the values which Bob gets in his 
 dice rolls.
Output Format
For each test case, output on a new line Alice if Alice wins, Bob if Bob wins and Tie in case of a tie.*/

//code 
//logic  :
/*make two arrays of both the players containing the three raw dice roll no.s; then use the sort command to sort both the arrays.
then sum up both the 2nd and third elemts of the array.
also at the end comapre the sums by if else ladder nad put approriate statements A/Q Note: the entire above process should be inside
a for loop which runs for the givern user inputted number of test cases hold by variable 't'..
hope this helps :) */

//code below 

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int alice[3];
    int bob[3];
    int t; // t=test cases
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        for (int i = 0; i < 3; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> bob[i];
        }
        sort(alice, alice + 3); // sorting commands to sort heh array
        sort(bob, bob + 3);
        int a1 = alice[1] + alice[2];
        int a2 = bob[1] + bob[2];

        if (a1 > a2)
        {
            cout << "Alice" << endl;
        }
        else if (a2 > a1)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}