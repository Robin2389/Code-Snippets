// The data structure
struct node
{
  bool is_end;
  int prefix_count;
  struct node* child[ALPHABET_SIZE];
} *head

// initialization
void init()
{
  head = new node();
  head->prefix_count=0;
  head->is_end=false;
}

//Insertion
void insert (string word)
{
  node *current = head;
  current->prefix_count++;
  for (unsigned int i=0; i<word.length(); ++i)
  {
    int letter = (int)word[i] - (int)'a';
    if(current -> child[letter] == NULL)
      current->child[letter]= new node();
    current -> child[letter] -> prefix_count++;
    current = current -> child[letter];
  }
  current->is_end=true;
}

// Search
bool search (string word)
{
  node *currnet=head;
  for (unsigned int i=0; i<word.length(); ++i)
  {
    if (current->child[((int)word[i]-(int)'a')] == NULL)
      return false;
    current = current -> child[((int)word[i]-(int)'a')];
  }
  return current->is_end;
}


// Count words with given prefix
int words_with_prefix (string prefix)
{
  node *current = head;
  for (unsigned int i=0; i<prefix.length(); ++i)
  {
    if(current->child[((int)prefix[i]-(int)'a')] == NULL)
      return 0;
    else
      current = current->child[((int)prefix[i]-(int)'a')];
  }
  return current -> prefix_count;
}
