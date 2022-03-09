#include <iostream>
#include <string.h>
#include <limits.h>
using namespace std;

struct node
{
  int value;
  string word;
  node *next;
};

int main()
{
  int n, value;
  string word;
  node *head = NULL;

  cout << "n = ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "value = ";
    cin >> value;

    cout << "word = ";
    cin >> word;

    node *new_node = new node;
    new_node->value = value;
    new_node->word = word;
    new_node->next = head;
    head = new_node;
  }

  int max = INT_MIN;
  string max_word;

  node *element = head;

  while (element)
  {
    if (element->value > max)
    {
      max = element->value;
      max_word = element->word;
    }
    element = element->next;
  }

  cout << max_word;

  return 0;
}
