#include <bits/stdc++.h>
#define M 1000000007;
// Log 10 base 2=3.32;
// 10^9==2^30
using namespace std;
typedef struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
} Node;
long long highestPowerof2(long long N)
{
  // if N is a power of two simply return it
  if (!(N & (N - 1)))
    return N;
  // else set only the most significant bit
  else
    return 0x8000000000000000 >> (__builtin_clzll(N));
}
Node *createNewNode(int data)
{
  Node *t = (Node *)malloc(sizeof(Node));
  t->data = data;
  t->left = NULL;
  t->right = NULL;
  return t;
}
Node *getPost(int *inorder, int a, int *pre, int b)
{
  int m;
  if (a <= 0 || b <= 0)
  {
    return NULL;
  }
  Node *root = createNewNode(pre[0]);
  for (int i = 0; i < a; i++)
  {
    if (inorder[i] == root->data)
    {
      m = i;
      break;
    }
  }
  root->left = getPost(inorder, m, pre + 1, m);
  root->right = getPost(inorder + m + 1, a - m - 1, pre + m + 1, b - m - 1);
}
int postorder(Node *t)
{
  if (t == NULL)
    return 0;
  else
  {
    if (t != NULL)
    {
      Node *temp = t;
      postorder(t->left);
      postorder(t->right);
      printf("%d ", t->data);
    }
  }
  return 1;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int pre[n];
  int inorder[n];
  for (int i = 0; i < n; i++)
  {
    cin >> pre[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> inorder[i];
  }
  Node *root = NULL;
  root = getPost(inorder, n, pre, n);
  postorder(root);
  return 0;
}